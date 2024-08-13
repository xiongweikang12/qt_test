#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QDataWidgetMapper>
#include <QFileDialog>
#include <QMessageBox>
#include <QFileInfo>
#include "comboboxdelegate.h"
#include<QItemSelectionModel>
#include<sqldialog.h>
#include<select_mainwindow.h>
#include<editdialog.h>
#include<QMap>
#include "sqlinfodialog.h"
#include"noeditdelegate.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    part_all.insert("part",{"财务","人力","生产","研发"});
    sex_all.insert("sex",{"男","女"});
    ui->setupUi(this);
    ui->comboBox_part->addItems(this->part_all.value("part"));
    ui->comboBox_sex->addItems(this->sex_all.value("sex"));
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);
    //
    ui->actionadd->setEnabled(false);
    ui->actioninsert->setEnabled(false);
    ui->actiondelete->setEnabled(false);
    ui->actionset_image->setEnabled(false);
    ui->actionclear_image->setEnabled(false);
    ui->actionup_stage->setEnabled(false);
    ui->actionsave->setEnabled(false);
    ui->actioncancel->setEnabled(false);
    //
    ui->radioButton_upsort->setChecked(true);
    ui->comboBox_sortitem->setCurrentIndex(0);
    ui->radioButton_all->setChecked(true);
    //
    ui->radioButton_upsort->setEnabled(false);
    ui->radioButton_downsort->setEnabled(false);
    ui->radioButton_man->setEnabled(false);
    ui->radioButton_women->setEnabled(false);
    ui->radioButton_all->setEnabled(false);
    //
    ui->spinBox_id->setEnabled(false); //主键不可以修改

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::show_substatus(MainWindow::Action_T tip,int row)
{
    switch (tip) {
    case Action_T::Add_rec:
        ui->statusbar->showMessage(QString("增加一条数据,记录条数为%1").arg(table_model->rowCount()));
        break;
    case Action_T::dele_rec:
        ui->statusbar->showMessage(QString("删除一条数据在等%1行,记录条数为%2").arg(row,table_model->rowCount()));
        break;
    case Action_T::insert_rec:
        ui->statusbar->showMessage(QString("插入一条数据在等%1行,记录条数为%2").arg(row,table_model->rowCount()));
        break;
    }

}

void MainWindow::on_actionopen_triggered()
{
    sqlInfoDialog *getinfo=new sqlInfoDialog(this);
    getinfo->show();
    connect(getinfo,&sqlInfoDialog::emit_sqlinfo,this,&MainWindow::do_set_sqlconfig);
    if(getinfo->exec()==(int)QDialog::Accepted)
    {
        if(!DB.open())
        {
            QMessageBox::warning(this,"错误","打开失败");
        }
        else
        {
            opentable();
        }
    }

}

void MainWindow::do_currentindexchange(const QModelIndex &cur, const QModelIndex &pre)
{
    Q_UNUSED(pre);
    if(!cur.isValid())
    {
        QMessageBox::warning(this,"错误","QModelindex无效");
    }
    display_widget->setCurrentIndex(cur.row());
}

void MainWindow::do_currentcontentchange(const QModelIndex &cur, const QModelIndex &pre)
{
    Q_UNUSED(pre);
    Q_UNUSED(cur);
    if(cur.isValid())
    {
        ui->actionsave->setEnabled(table_model->isDirty());
    }
}

void MainWindow::opentable()
{
    table_model=new QSqlTableModel(this,DB);
    table_model->setTable(this->now_table);
    table_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    table_model->setSort(table_model->fieldIndex("id"),Qt::AscendingOrder);
    if(!table_model->select())
    {
        QMessageBox::critical(this,"错误","数据库表格打开失败:"+table_model->lastError().text());
    }

    table_model->setHeaderData(table_model->fieldIndex("id"),Qt::Horizontal,"工号");
    table_model->setHeaderData(table_model->fieldIndex("name"),Qt::Horizontal,"姓名");
    table_model->setHeaderData(table_model->fieldIndex("sex"),Qt::Horizontal,"性别");
    table_model->setHeaderData(table_model->fieldIndex("birthdate"),Qt::Horizontal,"出生日期");
    table_model->setHeaderData(table_model->fieldIndex("birthplace"),Qt::Horizontal,"出生地");
    table_model->setHeaderData(table_model->fieldIndex("part"),Qt::Horizontal,"部门");
    table_model->setHeaderData(table_model->fieldIndex("sage"),Qt::Horizontal,"工资");
    table_model->setSort(table_model->fieldIndex(ui->comboBox_sortitem->currentText()),Qt::AscendingOrder);

    ui->statusbar->showMessage(QString("记录条数为%1").arg(table_model->rowCount()));

    m_select= new QItemSelectionModel(table_model);
    ui->tableView->setModel(table_model);
    ui->tableView->setSelectionModel(m_select);

    //初始化获取字段名称
    QSqlRecord com_file=table_model->record();
    for(int i=0;i<com_file.count();i++)
    {
        ui->comboBox_sortitem->addItem(com_file.fieldName(i));
        NowSql_fieldNames.push_back(com_file.fieldName(i));
    }

    //设置映射
    display_widget=new QDataWidgetMapper(this);
    display_widget->setModel(table_model);
    display_widget->setSubmitPolicy(QDataWidgetMapper::SubmitPolicy::AutoSubmit);
    display_widget->addMapping(ui->spinBox_id,table_model->fieldIndex("id"));
    display_widget->addMapping(ui->lineEdit_name,table_model->fieldIndex("name"));
    display_widget->addMapping(ui->comboBox_sex,table_model->fieldIndex("sex"));
    display_widget->addMapping(ui->dateEdit_birthdata,table_model->fieldIndex("birthdate"));
    display_widget->addMapping(ui->lineEdit_part,table_model->fieldIndex("birthplace"));
    display_widget->addMapping(ui->comboBox_part,table_model->fieldIndex("part"));
    display_widget->addMapping(ui->spinBox_money,table_model->fieldIndex("sage"));
    display_widget->toFirst();

    //添加代理
    delegate_part.setItem(this->part_all.value("part"),false);
    ui->tableView->setItemDelegateForColumn(table_model->fieldIndex("part"),&delegate_part);
    delegate_sex.setItem(this->sex_all.value("sex"),false);
    ui->tableView->setItemDelegateForColumn(table_model->fieldIndex("sex"),&delegate_sex);
    ui->tableView->setItemDelegateForColumn(table_model->fieldIndex("id"),new NoeditDelegate(this));

    //设置action属性
    ui->actionadd->setEnabled(true);
    ui->actioninsert->setEnabled(true);
    ui->actiondelete->setEnabled(true);
    ui->actionset_image->setEnabled(true);
    ui->actionclear_image->setEnabled(true);
    ui->actionup_stage->setEnabled(true);
    ui->actioncancel->setEnabled(true);
    //设置控件属性
    ui->radioButton_upsort->setEnabled(true);
    ui->radioButton_downsort->setEnabled(true);
    ui->radioButton_man->setEnabled(true);
    ui->radioButton_women->setEnabled(true);
    ui->radioButton_all->setEnabled(true);

    connect(m_select,&QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentindexchange);
    connect(m_select,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentcontentchange);
}


void MainWindow::on_actionadd_triggered()
{
    QSqlRecord rec=table_model->record();
    rec.setValue(table_model->fieldIndex("sex"),"男");
    rec.setValue(table_model->fieldIndex("sage"),500);
    table_model->insertRecord(table_model->rowCount(),rec);
    m_select->clearSelection();
    m_select->setCurrentIndex(table_model->index(table_model->rowCount()-1,0),QItemSelectionModel::Select);
    this->show_substatus(MainWindow::Action_T::Add_rec,table_model->rowCount());
}

void MainWindow::on_actioninsert_triggered()
{
    QSqlRecord rec=table_model->record();
    rec.setValue(table_model->fieldIndex("sex"),"男");
    rec.setValue(table_model->fieldIndex("sage"),500);
    int curr=m_select->currentIndex().row();
    table_model->insertRecord(curr,rec);
    m_select->clearSelection();
    m_select->setCurrentIndex(table_model->index(m_select->currentIndex().row()-1,0),QItemSelectionModel::Select);
    this->show_substatus(MainWindow::Action_T::insert_rec,curr);
}


void MainWindow::on_actiondelete_triggered()
{
    m_select->clearSelection();
    int curr=m_select->currentIndex().row();
    QSqlRecord rec=table_model->record(curr);
    if(rec.isEmpty())
    {
        QMessageBox::information(this,"info",QString(table_model->tableName()+"的第%1条信息已经被删除").arg(m_select->currentIndex().row()));
        return ;
    }
    table_model->removeRow(m_select->currentIndex().row());
    this->show_substatus(MainWindow::Action_T::dele_rec,curr);
}

void MainWindow::on_actionsave_triggered()
{
    int res=table_model->submitAll();
    if(res&&!table_model->isDirty())
    {
        QMessageBox::information(this,"信息","数据保存成功");
        return ;
    }
    else
    {
        QMessageBox::warning(this,"错误","数据库提交错误");
    }
}

void MainWindow::on_actioncancel_triggered()
{
    table_model->revertAll();
}


void MainWindow::on_actionselect_part_triggered()
{
    SqlDialog *sql_log=new SqlDialog();
    QStringList items_database={DB.databaseName()};
    QStringList items_table=DB.tables();
    sql_log->combo_database(items_database);
    sql_log->combo_table(items_table);
    sql_log->show();
    connect(sql_log,&SqlDialog::emit_databseinfo,this,&MainWindow::do_keep_selectname);
    connect(sql_log,&SqlDialog::emit_openSelect,this,&MainWindow::do_open_select);
}

void MainWindow::do_keep_selectname(const QString &databsename, const QString &tablename)
{
    this->database_select=databsename;
    this->table_select=tablename;
}

void MainWindow::do_open_select()
{
    Select_MainWindow *select_window=new Select_MainWindow();
    select_window->set_selectdatabase(this->database_select);
    select_window->set_selecttable(this->table_select);
    select_window->show();
}


void MainWindow::on_comboBox_sortitem_currentIndexChanged(int index)
{
    QString fied=ui->comboBox_sortitem->itemText(index);
    //默认为升序
    if(ui->radioButton_downsort->isChecked())
    {
        table_model->setSort(table_model->fieldIndex(fied),Qt::DescendingOrder);
    }
    if(ui->radioButton_upsort->isChecked())
    {
        table_model->setSort(table_model->fieldIndex(fied),Qt::AscendingOrder);
    }
    table_model->select();
}


void MainWindow::on_radioButton_downsort_clicked()
{
    table_model->setSort(table_model->fieldIndex(ui->comboBox_sortitem->currentText()),Qt::DescendingOrder);
    table_model->select();
}


void MainWindow::on_radioButton_upsort_clicked()
{
    table_model->setSort(table_model->fieldIndex(ui->comboBox_sortitem->currentText()),Qt::AscendingOrder);
    table_model->select();
}

void MainWindow::on_radioButton_man_clicked()
{
    table_model->setFilter("sex='男'");
}

void MainWindow::on_radioButton_women_clicked()
{
    table_model->setFilter("sex='女'");
}


void MainWindow::on_radioButton_all_clicked()
{
    table_model->setFilter("");
}


void MainWindow::on_actioneditrec_triggered()
{
    if(this->DB.isOpen()&&m_select->hasSelection())
    {
        int edit_row=m_select->currentIndex().row();
        QSqlRecord edit_red=table_model->record(edit_row);
        EditDialog *edit_temp=new EditDialog(this);
        edit_temp->getcombo(this->part_all,table_model->fieldIndex("part"));
        edit_temp->getcombo(this->sex_all,table_model->fieldIndex("sex"));
        edit_temp->getsqlFild(this->NowSql_fieldNames);

        edit_temp->getrecord(edit_red);
        int res=edit_temp->exec();
        if(res==int(QDialog::Accepted))
        {
            edit_red=edit_temp->setrecord();
            table_model->setRecord(edit_row,edit_red);
            if(table_model->isDirty())
            {
                table_model->submitAll();
                table_model->select();
            }
        }
    }
    else if(!(this->DB.isOpen()))
    {
        QMessageBox::warning(this,"错误","数据库未打开");
    }
    else
    {
        QMessageBox::warning(this,"错误","未选中记录");
    }


}


void MainWindow::on_actionup_stage_triggered()
{
    for(int i=0;i<this->table_model->rowCount();i++)
    {
        QSqlRecord rec=this->table_model->record(i);
        int pre_sage=rec.value("sage").toInt();
        rec.setValue("sage",pre_sage+100);
        table_model->setRecord(i,rec);
    }
}

void MainWindow::do_set_sqlconfig(QMap<QString,QString> info)
{
    DB=QSqlDatabase::addDatabase(info.value("drive"),info.value("connect"));
    DB.setHostName(info.value("host"));
    DB.setUserName(info.value("user"));
    DB.setPassword(info.value("password"));
    DB.setDatabaseName(info.value("databasename"));
    this->now_table=info.value("tablename");
    this->now_database=info.value("databasename");

}


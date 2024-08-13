#include "select_mainwindow.h"
#include "ui_select_mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QPlainTextEdit>
#include "editdialog.h"
#include <QPushButton>
#include "sqlinfodialog.h"
#include<QMdiArea>
#include<QMdiSubWindow>
#include "qsqlrelationaltablemodel_returnrec.h"

Select_MainWindow::Select_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Select_MainWindow)
{
    ui->setupUi(this);
    ui->Select_tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->Select_tableView->setAlternatingRowColors(true);
    ui->Select_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->actionfirstrecord->setEnabled(false);
    ui->actionbefore_record->setEnabled(false);
    ui->actionlast_record->setEnabled(false);
    ui->actionnext_record->setEnabled(false);
    ui->actionopensql->setEnabled(true);
    ui->actionquit->setEnabled(true);
    //
    ui->tabWidget->clear();
    //
    ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
    ui->mdiArea->tileSubWindows();


}

Select_MainWindow::~Select_MainWindow()
{
    delete ui;
}

void Select_MainWindow::set_selectdatabase(const QString &database)
{
    this->nowselect_database=database;
}

void Select_MainWindow::set_selecttable(const QString &table)
{
    this->nowselect_table=table;
}

void Select_MainWindow::set_sql_fild(const QStringList &fild)
{
    this->sql_fild=fild;
}

void Select_MainWindow::on_actionopensql_triggered()
{
    DB=QSqlDatabase::addDatabase("QMYSQL","sec");
    DB.setHostName("127.0.0.1");
    DB.setUserName("root");
    DB.setPassword("176100");
    DB.setDatabaseName("test_manages");
    if(!DB.open())
    {
        QMessageBox::warning(this,"错误","打开失败");
    }
    else
    {
        this->qry_model=new QSqlQueryModel(this);
        ui->Select_tableView->setModel(this->qry_model);
        m_select=new QItemSelectionModel(this->qry_model,this);
        ui->Select_tableView->setSelectionModel(this->m_select);
        QString str="SELECT * FROM "+this->nowselect_table;
        this->qry_model->setQuery(str,DB);
        if(qry_model->lastError().isValid())
        {
            QMessageBox::warning(this,"错误",str);
        }
        QSqlRecord rec=this->qry_model->record();
        for(int i=0;i<rec.count();i++)
        {
            sql_fild.push_back(rec.fieldName(i));
        }
    }
    /*
    table_model=new QSqlTableModel(this,DB);
    table_model->setTable(this->nowselect_table);
    table_model->select();
    m_select=new QItemSelectionModel(table_model);
    table_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->Select_tableView->setModel(table_model);
    ui->Select_tableView->setSelectionModel(m_select);
    */

    //
    ui->actionfirstrecord->setEnabled(true);
    ui->actionbefore_record->setEnabled(true);
    ui->actionlast_record->setEnabled(true);
    ui->actionnext_record->setEnabled(true);
    ui->actionopensql->setEnabled(false);
    ui->actionquit->setEnabled(true);
    //
    connect(m_select,&QItemSelectionModel::currentRowChanged,this,&Select_MainWindow::do_currentrowchange);
}

void Select_MainWindow::do_currentrowchange(const QModelIndex &cur, const QModelIndex &pre)
{
    Q_UNUSED(pre);
    ui->plainTextEdit->clear();
    bool first_enable=(cur.row()==0);
    bool last_enable=(cur.row()==(this->qry_model->rowCount()-1));
    QSqlRecord rec=this->qry_model->record(cur.row());
    // QPlainTextEdit *temp=new QPlainTextEdit();
    this->update_plainedit(ui->plainTextEdit,rec);
    //ui->tabWidget->addTab(temp,QString("第%1行数据").arg(cur.row()+1)+"数据库:"+this->nowselect_database+"表:"+this->nowselect_table);
    int edit_row=m_select->currentIndex().row();
    QSqlRecord edit_red=this->qry_model->record(edit_row);
    EditDialog *edit_temp=new EditDialog(this); //复用对话框
    edit_temp->index_tap=ui->tabWidget->count();
    edit_temp->getdefult_combo();
    //edit_temp->getcombo(this->part_all,table_model->fieldIndex("part"));
    //edit_temp->getcombo(this->sex_all,table_model->fieldIndex("sex"));
    edit_temp->getsqlFild(this->sql_fild);
    edit_temp->getrecord(edit_red);
    edit_temp->set_info_row(cur.row());
    // int res=edit_temp->exec();
    ui->tabWidget->addTab(edit_temp,QString("第%1行数据").arg(cur.row()+1)+"数据库:"+this->nowselect_database+"表:"+this->nowselect_table);
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
    //
    ui->actionbefore_record->setEnabled(!first_enable);
    ui->actionnext_record->setEnabled(!last_enable);
    connect(edit_temp,&EditDialog::emit_tap_row,this,&Select_MainWindow::do_updata_record);
    connect(edit_temp,&EditDialog::do_change,this,&Select_MainWindow::do_change_rate);
}

void Select_MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}


void Select_MainWindow::on_actionfirstrecord_triggered()
{
    QModelIndex cur=this->qry_model->index(0,0);
    m_select->setCurrentIndex(cur,QItemSelectionModel::SelectCurrent);
}


void Select_MainWindow::on_actionbefore_record_triggered()
{
    int cur_row=m_select->currentIndex().row();
    QModelIndex cur=this->qry_model->index(cur_row-1,0);
    m_select->setCurrentIndex(cur,QItemSelectionModel::SelectCurrent);
}


void Select_MainWindow::on_actionnext_record_triggered()
{
    int cur_row=m_select->currentIndex().row();
    QModelIndex cur=this->qry_model->index(cur_row+1,0);
    m_select->setCurrentIndex(cur,QItemSelectionModel::SelectCurrent);
}


void Select_MainWindow::on_actionlast_record_triggered()
{
    QModelIndex cur=this->qry_model->index(qry_model->rowCount()-1,0);
    m_select->setCurrentIndex(cur,QItemSelectionModel::SelectCurrent);
}

void Select_MainWindow::do_updata_record(int index_tap,int info_row,QSqlRecord rec_t)
{
    QSqlRecord rec=rec_t;
    QSqlRecord rec_id=this->qry_model->record(info_row);
    QString str="";
    for(int i=1;i<rec.count();i++)
    {
        str+=rec.fieldName(i)+"=:"+rec.fieldName(i);
        if(i==rec.count()-1)
        {
            continue;
        }
        else
        {
            str+=",";
        }
    }
    QSqlQuery query(this->DB);
    query.prepare("Update "+this->nowselect_table+" set "+str+" where id=:id");
    qDebug()<<str;
    query.bindValue(":id",rec_id.value(rec.fieldName(0)));
    for(int i=1;i<rec.count();i++)
    {
        query.bindValue(":"+rec.fieldName(i),rec.value(rec.fieldName(i)));
    }
    if(!query.exec())
    {
        QMessageBox::warning(this,"错误","数据错误"+query.lastError().text());
    }
    else
    {
        this->qry_model->query().exec();
    }
    ui->tabWidget->removeTab(index_tap);
    m_select->setCurrentIndex(qry_model->index(info_row,0),QItemSelectionModel::SelectCurrent);
    this->update_plainedit(ui->plainTextEdit,qry_model->record(info_row));
    ui->statusbar->showMessage(QString("更新了第%1条记录").arg(info_row+1));
}

void Select_MainWindow::update_plainedit(QPlainTextEdit *plainedit, QSqlRecord rec)
{
    plainedit->clear();
    for(int i=0;i<rec.count();i++)
    {
        plainedit->appendPlainText(rec.fieldName(i)+":"+rec.value(rec.fieldName(i)).toString());
        // temp->appendPlainText(rec.fieldName(i)+":"+rec.value(rec.fieldName(i)).toString());
    }
}


void Select_MainWindow::on_actionopenratesql_triggered()
{
    sqlInfoDialog *getinfo=new sqlInfoDialog(this);
    getinfo->show();
    connect(getinfo,&sqlInfoDialog::emit_sqlinfo,this,&Select_MainWindow::do_set_sqlconfig);
    if(getinfo->exec()==(int)QDialog::Accepted)
    {
        if(!this->DB_rate.open())
        {
            QMessageBox::warning(this,"错误","打开失败");
        }
        else
        {
            QTableView *tabView_temp=new QTableView(ui->mdiArea);
            QSqlRelationalTableModel_returnrec *table_model_rate=new QSqlRelationalTableModel_returnrec(this,this->DB_rate);
            table_model_rate->setTable(this->now_table);
            table_model_rate->setEditStrategy(QSqlTableModel::OnManualSubmit);
            QSqlRecord rec=table_model_rate->record();
            table_model_rate->setRelation(table_model_rate->fieldIndex("id_coment"),QSqlRelation("test_name","id","comment"));
            //table_model_rate->setSort(table_model->fieldIndex("id"),Qt::AscendingOrder);
            QItemSelectionModel *select_rate=new QItemSelectionModel(table_model_rate);
            tabView_temp->setModel(table_model_rate);
            tabView_temp->setSelectionModel(select_rate);
            table_model_rate->select();
            ui->mdiArea->addSubWindow(tabView_temp);
            tabView_temp->show();
            connect(tabView_temp,&QTableView::clicked,table_model_rate,&QSqlRelationalTableModel_returnrec::do_return_rec);
            connect(table_model_rate,&QSqlRelationalTableModel_returnrec::rec_return,this,&Select_MainWindow::do_print_rec);
            connect(this,&Select_MainWindow::tell_tochange,table_model_rate,&QSqlRelationalTableModel_returnrec::refresh_change);
        }
    }

}

void Select_MainWindow::do_set_sqlconfig(QMap<QString, QString> info)
{
    this->DB_rate=QSqlDatabase::addDatabase(info.value("drive"),info.value("connect"));
    this->DB_rate.setHostName(info.value("host"));
    this->DB_rate.setUserName(info.value("user"));
    this->DB_rate.setPassword(info.value("password"));
    this->DB_rate.setDatabaseName(info.value("databasename"));
    this->now_table=info.value("tablename");
    this->now_database=info.value("databasename");

}

void Select_MainWindow::do_print_rec(QSqlRecord rec)
{
    this->update_plainedit(ui->plainTextEdit_rate,rec);
}

void Select_MainWindow::do_change_rate()
{
    emit tell_tochange();
}


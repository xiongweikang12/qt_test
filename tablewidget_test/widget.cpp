#include "widget.h"
#include "ui_widget.h"
#include <QRandomGenerator>
#include <QDate>
#include <QLabel>
#include <QHBoxLayout>
#include<QTableWidgetItem>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tableWidget->setEnabled(false);
    ui->checkBox_HshowtableHeader->setChecked(true);
    ui->checkBox_VshowtableHeader->setChecked(true);
    col_row=new QLabel("当前单元坐标",ui->widget_status);
    item_type=new QLabel("当前单元类型",ui->widget_status);
    student_name=new QLabel("学生姓名",ui->widget_status);
    QHBoxLayout *add_=new QHBoxLayout(ui->widget_status);
    add_->addWidget(item_type);
    add_->addWidget(col_row);
    add_->addWidget(student_name);
    //
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_settableHeader_clicked()
{
    //设置表头
    QStringList headertext;
    headertext<<"姓名"<<"性别"<<"出生日期"<<"民族"<<"分数"<<"是否为党员";
    ui->tableWidget->setColumnCount(headertext.size());
    for(int i=0;i<ui->tableWidget->columnCount();i++)
    {
        QTableWidgetItem *header_item=new QTableWidgetItem(headertext.at(i),type_item::header_item);
        QFont font=header_item->font();
        font.setBold(true);
        font.setPointSize(11);
        header_item->setFont(font);
        //
        header_item->setForeground(QBrush(Qt::red));
        ui->tableWidget->setHorizontalHeaderItem(i,header_item);

    }
}


void Widget::on_pushButton_setlinenum_clicked()
{
    int spinbox_linenum=ui->spinBox_linenum->value();
    ui->tableWidget->setRowCount(spinbox_linenum);
}


void Widget::on_pushButton_inittabledata_clicked()
{
    ui->tableWidget->clearContents(); //清除，除表头之外的
    QDate brith(2001,10,26);
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        QString student_name=QString("学生%1").arg(i);
        QString strsex=QRandomGenerator::global()->bounded(ui->tableWidget->rowCount())%2==0 ? "男生":"女生";
        bool isbrith=(i%2)==0? false:true;
        int num_score=QRandomGenerator::global()->bounded(60,100);
        creatItemrow(i,student_name,strsex,brith,"汉族",num_score,isbrith);
    }
}

void Widget::creatItemrow(int i, QString name, QString sex, QDate birth, const char * peopele, int score, bool yes)
{
    // uint studId=20220220;
    QTableWidgetItem *item_name=new QTableWidgetItem(name,type_item::name_item);
    QTableWidgetItem *item_sex=new QTableWidgetItem(sex,type_item::sex_item);
    QTableWidgetItem *item_birth=new QTableWidgetItem(birth.toString("yyyy-MM-dd"),type_item::Birth_item);
    QTableWidgetItem *item_people=new QTableWidgetItem(peopele,type_item::nation_item);
    QTableWidgetItem *item_score=new QTableWidgetItem(QString::number(score),type_item::score_item);
    QTableWidgetItem *yes_item=new QTableWidgetItem("党员",type_item::ispeople_item);
    if(yes)
    {
        yes_item->setCheckState(Qt::Checked);
    }
    else
    {
        yes_item->setCheckState(Qt::Unchecked);
    }

    yes_item->setBackground(QBrush(Qt::yellow));
    ui->tableWidget->setItem(i,0,item_name);
    ui->tableWidget->setItem(i,1,item_sex);
    ui->tableWidget->setItem(i,2,item_birth);
    ui->tableWidget->setItem(i,3,item_people);
    ui->tableWidget->setItem(i,4,item_score);
    ui->tableWidget->setItem(i,5,yes_item);

}


void Widget::on_pushButton_insertline_clicked()
{
    int insert_row=ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(insert_row);
    creatItemrow(insert_row,QString("插入的成员"),"男生",QDate::currentDate(),"汉族",65,false);

}


void Widget::on_pushButton_addline_clicked()
{
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
    creatItemrow(ui->tableWidget->rowCount()-1,QString("添加的新成员"),"男生",QDate::currentDate(),"汉族",65,false);

}

void Widget::on_pushButton_delectline_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}


void Widget::on_pushButton_autolineH_clicked()
{
    ui->tableWidget->resizeRowsToContents();
}

void Widget::on_pushButton_autorowW_clicked()
{
    ui->tableWidget->resizeColumnsToContents();
}


void Widget::on_pushButton_readtoText_clicked()
{
    int curr_row=ui->tableWidget->currentRow();
    QString input_plainedit=QString("");
    bool falg=true;
    for(int i=0;i<ui->tableWidget->columnCount();i++)
    {
        QString temp=ui->tableWidget->item(curr_row,i)->text();
        if(temp.isEmpty())
        {
            falg=false;
        }
        else
        {
            input_plainedit+=ui->tableWidget->item(curr_row,i)->text();
        }
    }
    if(falg)
    {
        ui->plainTextEdit->appendPlainText(input_plainedit);
    }
    else
    {
        return ;
    }

}


void Widget::on_checkBox_tableeditable_clicked(bool checked)
{
    ui->tableWidget->setEnabled(checked);
}


void Widget::on_radioButton_chooseline_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->checkBox_tableeditable->setChecked(true);
    on_checkBox_tableeditable_clicked(true);
}


void Widget::on_checkBox_linebgcolor_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void Widget::on_checkBox_HshowtableHeader_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}

void Widget::on_checkBox_VshowtableHeader_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}


void Widget::on_radioButton_choosetableitem_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->checkBox_tableeditable->setChecked(true);
    //调用槽函数
    on_checkBox_tableeditable_clicked(true);
}


void Widget::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    int col=item->column();
    int row=item->row();
    QString item_type1=QString("");
    switch (item->type()) {
    case type_item::name_item:
        item_type1=QString("name");
        break;
    case type_item::sex_item:
        item_type1=QString("sex");
        break;
    case type_item::Birth_item:
        item_type1=QString("birth");
        break;
    case type_item::nation_item:
        item_type1=QString("nation");
        break;
    case type_item::score_item:
        item_type1=QString("score");
        break;
    case type_item::ispeople_item:
        item_type1=QString("ispeople");
        break;
    default:
        break;
    }

    QString student_name1=ui->tableWidget->item(row,colName)->text();
    item_type->setText(QString("当前单元类型:")+item_type1);
    col_row->setText(QString("当前坐标:")+QString::number(row)+","+QString::number(col));
    student_name->setText(QString("当前学生姓名:")+student_name1);

}


void Widget::on_actionclear_edit_triggered()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_clearplainedit_clicked()
{
    ui->actionclear_edit->triggered();
}


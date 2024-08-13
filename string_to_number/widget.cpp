#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_sum_clicked()
{
    int num=ui->lineEdit_count->text().toInt();
    float price=ui->lineEdit_prince->text().toFloat();
    double sum_price=num*price;
    ui->lineEdit_sum->setText(QString::number(sum_price,'g',6));
}


void Widget::on_pushButton_qDebug_clicked()
{
    int num=ui->lineEdit_count->text().toInt();
    float price=ui->lineEdit_prince->text().toFloat();
    double sum_price=num*price;
    qDebug()<<QString::number(num)<<"*"<<QString::number(price)<<"="<<QString::number(sum_price,'g',6);
    qDebug()<<num<<"*"<<price<<"="<<sum_price;
}


void Widget::on_pushButton_other1_clicked()
{
    QString ten_int=ui->lineEdit_numten->text();
    if(ten_int.isEmpty()){return ;}
    else{
        QString ten_to_two=QString::number(ten_int.toInt(),2);
        ui->lineEdit_numtwo->setText(ten_to_two);
    }
}


void Widget::on_pushButton_other2_clicked()
{
    QString two_int=ui->lineEdit_numtwo->text();
    if(two_int.isEmpty()){return ;}
    else
    {
        QString two_to_ten=QString::number(two_int.toInt(nullptr,2),10);
        ui->lineEdit_numten->setText(two_to_ten);
    }
}


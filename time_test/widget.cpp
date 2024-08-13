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

void Widget::on_pushButton_readtime_clicked()
{
    QDateTime current_time=QDateTime::currentDateTime();
    ui->timeEdit_time->setTime(current_time.time());
    ui->lineEdit_time->setText(current_time.toString("hh:mm:ss"));

    ui->dateEdit_data->setDate(current_time.date());
    ui->lineEdit_date->setText(current_time.toString("yyyy-MM-dd"));

    ui->dateTimeEdit_dataTime->setDateTime(current_time);
    ui->lineEdit_timedate->setText(current_time.toString("yyyy-MM-dd hh:mm:ss"));
}


void Widget::on_pushButton_qdebugtime_clicked()
{
    QTime time_1(13,24,5);
    QString str=time_1.toString("hh:mm:ss");
    qDebug("Dtime1.time()=%s",str.toLocal8Bit().data()); //转换为Qbtyearry->data
    // inline const char *QByteArray::data() 转换为字符串

}


void Widget::on_calendarWidget_selectionChanged()
{
    QString str=ui->calendarWidget->selectedDate().toString("yyyy年M月dd日");
    ui->lineEdit_4->setText(str);
}


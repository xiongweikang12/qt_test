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

void Widget::on_pushButton_locleft_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignLeft);
}

void Widget::on_pushButton_locmid_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignCenter);
}

void Widget::on_pushButton_locright_clicked()
{
    ui->lineEdit->setAlignment(Qt::AlignRight);
}


void Widget::on_checkBox_3_clicked(bool checked)
{
    ui->lineEdit->setClearButtonEnabled(checked); //出现一个x用于清除
}




void Widget::on_checkBox_readonly_clicked(bool checked)
{
    ui->lineEdit->setReadOnly(checked);  //表示只读
}


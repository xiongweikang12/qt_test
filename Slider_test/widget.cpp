#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(do_valuechanged(int)));
    connect(ui->horizontalScrollBar,SIGNAL(valueChanged(int)),this,SLOT(do_valuechanged(int)));
    connect(ui->dial,SIGNAL(valueChanged(int)),this,SLOT(do_valuechanged(int)));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_valuechanged(int value)
{
    ui->progressBar->setValue(value);
}

void Widget::on_checkBox_textvisible_clicked(bool checked)
{
    ui->progressBar->setTextVisible(checked); //是否可见百分比
}


void Widget::on_checkBox_inverteappearance_clicked(bool checked)
{
    ui->progressBar->setInvertedAppearance(checked);  //倒转
}

void Widget::on_radioButton_prefence_clicked()
{
    ui->progressBar->setFormat("%p%"); //格式 %p 表示完成百分比
}


void Widget::on_radioButton_2_clicked()
{
    ui->progressBar->setFormat("%v"); //格式 %v 表示当前值
}


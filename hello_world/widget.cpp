#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setText("bi");
    ui->pushButton->setText("关闭");
    // QObject::connect(ui->pushButton, &QPushButton::clicked,this, qOverload<>(&QWidget::showMinimized));
    // QObject::connect(ui->pushButton_2, &QPushButton::clicked,this, qOverload<>(&QWidget::close));
    connect(ui->radioButton,SIGNAL(clicked(bool)),this,SLOT(o_radioButton_clicked_tolabel(bool)));
}


Widget::~Widget()
{
    delete ui;
}

void Widget::o_radioButton_clicked_tolabel(bool checked)
{
    if(checked)
    {
        ui->label->setText("开");
        ui->label->setStyleSheet("color:red");

    }
    else
    {
        ui->label->setText("bi");
        ui->label->setStyleSheet("color:black");
    }
}


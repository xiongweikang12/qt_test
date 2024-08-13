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

void Widget::on_pushButton_cleartext_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_initlist_clicked()
{
    //清空combo，初始化
    ui->comboBox->clear();
    for(int i=0;i<10;i++)
    {
        ui->comboBox->addItem(QString("Item-%1").arg(i));
    }
}


void Widget::on_pushButton_clearlist_clicked()
{
    ui->comboBox->clear();
}


void Widget::on_checkBox_editable_clicked(bool checked)
{
    ui->comboBox->setEditable(checked);
    int i=ui->comboBox->currentIndex();
    ui->comboBox->setItemText(i,ui->comboBox->itemText(i));

}


void Widget::on_pushButton_initcity_clicked()
{
    QMap<QString,int> city_zone;
    ui->comboBox_2->clear();
    for(int i=0;i<10;i++)
    {
        city_zone.insert("北京"+QString::number(i),10);
        ui->comboBox_2->addItem("北京"+QString::number(i)+":"+QString::number(city_zone["北京"+QString::number(i)]));
    }
}


void Widget::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(ui->comboBox->currentIndex()!=-1)
    {
         ui->plainTextEdit->appendPlainText(QString(arg1+":%1").arg(ui->comboBox->currentIndex()));
    }
    else{
        return;
    }
}


void Widget::on_comboBox_activated(int index)
{

}


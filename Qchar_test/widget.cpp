#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

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

void Widget::on_pushButton_foreach_clicked()
{
    QString str=ui->lineEdit_inputstring->text();
    if(str.isEmpty())
    {
        return;
    }
    for(qint16 i=0;i<str.size();i++)
    {
        QChar ch=str.at(i);
        char16_t ch_unicode=ch.unicode();
        QString chstr(ch_unicode);
        QString info=chstr+QString::asprintf("\t unicode编码=0x%X",ch_unicode);
        ui->textEdit_outputs->append(info);
    }
}


void Widget::on_pushButton_test1_clicked()
{
    ui->lineEdit_inputstring->clear();
    ui->lineEdit_inputchar->clear();
    ui->textEdit_outputs->clear();
    QList<QCheckBox*> obectlist_check=ui->groupBox_check->findChildren<QCheckBox*>(); //寻找孩子
    for (int i = 0; i < obectlist_check.size(); ++i)
    {
        QCheckBox *cancel_check=qobject_cast<QCheckBox*>(obectlist_check.at(i));
        cancel_check->setChecked(false);
        qDebug() <<"ok";
    }

}


void Widget::on_pushButton_getitem_clicked()
{
    QString str=ui->lineEdit_inputchar->text();
    if(str.isEmpty()){return;}
    QChar ch=str.at(0);
    char16_t ch_unicode=ch.unicode();
    QString chstr(ch_unicode);
    ui->textEdit_outputs->append(chstr+QString::asprintf("\t unicode编码=0x%X",ch_unicode));
    ui->checkBox_isDigit->setChecked(ch.isDigit());
    ui->checkBox_isLetter->setChecked(ch.isLetter());
    ui->checkBox_isLower->setChecked(ch.isLower());
    ui->checkBox_isMark->setChecked(ch.isMark());
    ui->checkBox_isUpper->setChecked(ch.isUpper());
}


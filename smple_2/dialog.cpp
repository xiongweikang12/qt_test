#include "dialog.h"

#include <QDialog>
#include <QPushButton>
#include<QRadioButton>
#include<QPlainTextEdit>
#include<QCheckBox>
#include<QHBoxLayout>
#include<QVBoxLayout>


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    init_setup();
}

Dialog::~Dialog() {}

void Dialog::init_setup()
{
    QVBoxLayout *v_all=new QVBoxLayout();
    QHBoxLayout *h_checkbutton=new QHBoxLayout();
    QCheckBox_underline =new QCheckBox("下划线");
    QCheckBox_itial =new QCheckBox("斜体");
    QCheckBox_bold =new QCheckBox("加粗");
    h_checkbutton->addWidget(QCheckBox_underline);
    h_checkbutton->addWidget(QCheckBox_itial);
    h_checkbutton->addWidget(QCheckBox_bold);

    QHBoxLayout *h_radiobutton=new QHBoxLayout();
    QRadioButton_balck =new QRadioButton("黑色");
    QRadioButton_red =new QRadioButton("红色");
    h_radiobutton->addWidget(QRadioButton_balck);
    h_radiobutton->addWidget(QRadioButton_red);

    QPlainTextEdit_input =new QPlainTextEdit;
    QPlainTextEdit_input->setPlainText("QT6");

    QHBoxLayout *h_pushbutton= new QHBoxLayout();
    QPushButton_ok =new QPushButton("确定");
    QPushButton_clear =new QPushButton("清空");
    QPushButton_cancel=new QPushButton("取消");
    h_pushbutton->addWidget(QPushButton_ok);
    h_pushbutton->addStretch();
    h_pushbutton->addWidget(QPushButton_cancel);
    h_pushbutton->addWidget(QPushButton_clear);

    v_all->addLayout(h_checkbutton);
    v_all->addLayout(h_radiobutton);
    v_all->addWidget(QPlainTextEdit_input);
    v_all->addLayout(h_pushbutton);

    setLayout(v_all);

    connect(QCheckBox_underline,SIGNAL(clicked(bool)),this,SLOT(do_funfonttype_underline(bool)));
    connect(QCheckBox_itial,SIGNAL(clicked(bool)),this,SLOT(do_funfonttype_itial(bool)));
    connect(QCheckBox_bold,SIGNAL(clicked(bool)),this,SLOT(do_funfonttype_bold(bool)));
    connect(QRadioButton_balck,SIGNAL(clicked()),this,SLOT(do_funfontcolor()));
    connect(QRadioButton_red,SIGNAL(clicked()),this,SLOT(do_funfontcolor()));
    connect(QPushButton_ok,SIGNAL(clicked()),this,SLOT(accept()));
    connect(QPushButton_cancel,SIGNAL(clicked()),this,SLOT(close()));
    connect(QPushButton_clear,SIGNAL(clicked()),this,SLOT(do_Plaineditclear()));
}



void Dialog::do_funfonttype_bold(bool checked)
{
    QFont font=QPlainTextEdit_input->font();
    font.setBold(checked);
    QPlainTextEdit_input->setFont(font);
}

void Dialog::do_funfonttype_underline(bool checked)
{
    QFont font=QPlainTextEdit_input->font();
    font.setUnderline(checked);
    QPlainTextEdit_input->setFont(font);
}

void Dialog::do_funfonttype_itial(bool checked )
{
    QFont font=QPlainTextEdit_input->font();
    font.setItalic(checked);
    QPlainTextEdit_input->setFont(font);
}

void Dialog::do_funfontcolor()
{
    QPalette palet=QPlainTextEdit_input->palette();
    if(QRadioButton_balck->isChecked())
    {
        palet.setColor(QPalette::Text,Qt::black);
    }
    else if(QRadioButton_red->isChecked())
    {
        palet.setColor(QPalette::Text,Qt::red);
    }
    QPlainTextEdit_input->setPalette(palet);
}

void Dialog::do_Plaineditclear()
{
    QPlainTextEdit_input->clear();
}



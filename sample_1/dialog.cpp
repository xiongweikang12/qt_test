#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->radioButton_black,SIGNAL(clicked()),this,SLOT(do_font_color()));
    connect(ui->radioButton_red,SIGNAL(clicked()),this,SLOT(do_font_color()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clear_clicked()
{
    ui->plainTextEdit->clear();
}


void Dialog::on_checkBox_underline_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBox_italic_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBox_bold_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void Dialog::do_font_color()
{
    QPalette palet=ui->plainTextEdit->palette();
    if(ui->radioButton_black->isChecked())
    {
        palet.setColor(QPalette::Text,Qt::black);
    }
    else if(ui->radioButton_red->isChecked())
    {
        palet.setColor(QPalette::Text,Qt::red);
    }
    ui->plainTextEdit->setPalette(palet);
}







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

void Widget::on_Pushbutton_frontback_clicked()
{
    ui->plainTextEdit->appendPlainText("front().back()函数test");
    QString qs=ui->comboBox_str1->currentText();
    ui->plainTextEdit->appendPlainText("font():"+QString(qs.front()));
    ui->plainTextEdit->appendPlainText("back():"+QString(qs.back()));
}


void Widget::on_pushButton_clear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_leftright_clicked()
{
    ui->plainTextEdit->appendPlainText("left(),right()函数test");
    QString qs=ui->comboBox_str1->currentText();
    int num=ui->spinBox_num->value();
    ui->plainTextEdit->appendPlainText(QString::asprintf("left(%d)",num)+"="+qs.left(num));
    ui->plainTextEdit->appendPlainText(QString::asprintf("right(%d)",num)+"="+qs.right(num));
}



void Widget::on_pushButton_fristlast_clicked()
{
    ui->plainTextEdit->appendPlainText("first(),last()函数test");
    QString qs=ui->comboBox_str1->currentText();
    int num=ui->spinBox_num->value();
    ui->plainTextEdit->appendPlainText(QString::asprintf("first(%d)",num)+"="+qs.first(num));
    ui->plainTextEdit->appendPlainText(QString::asprintf("last(%d)",num)+"="+qs.last(num));
    //left->first,right->last 用法一样效果也一样
}


void Widget::on_pushButton_section_clicked()
{
    ui->plainTextEdit->appendPlainText("section——test");
    QString qs=ui->comboBox_str1->currentText();
    QString match_char=ui->comboBox_str2->currentText();
    int num=ui->spinBox_num->value();
    ui->plainTextEdit->appendPlainText(qs.section(match_char,num,num)); //分割得到内容
}


void Widget::on_pushButton_Nullempty_clicked()
{

}


void Widget::on_pushButton_resize_clicked()
{
    ui->plainTextEdit->appendPlainText("resize——test");
    QString str;
    str.resize(2,'2'); //相当于赋值
    str.resize(4,'3'); //往后添加，不会覆盖
    ui->plainTextEdit->appendPlainText(str);
}


void Widget::on_pushButton_size_clicked()
{
    //size ,lenght,count
    ui->plainTextEdit->appendPlainText("size——test");
    QString str1=ui->comboBox_str1->currentText();
    ui->plainTextEdit->appendPlainText(QString::asprintf("size:%lld",str1.size())); //其格式为longlongint
    ui->plainTextEdit->appendPlainText(QString::asprintf("count:%lld",str1.count()));
    ui->plainTextEdit->appendPlainText(QString::asprintf("lenght:%lld",str1.length()));

}


void Widget::on_pushButton_fill_clicked()
{
    ui->plainTextEdit->appendPlainText("fill_test :字符串填充替换，还可以改变大小");
    QString qs=ui->comboBox_str1->currentText();
    ui->plainTextEdit->appendPlainText("before:"+qs+"after:"+"str.fill('x',2)=="+qs.fill('x',2));
}


void Widget::on_pushButton_trimmed_clicked()
{
    ui->plainTextEdit->appendPlainText("trimmed_test:去掉首尾空格");
}



void Widget::on_pushButton_index_clicked()
{

}


void Widget::on_pushButton_contains_clicked()
{
    ui->plainTextEdit->appendPlainText("contains_test:判断是否包含一个字符串");
    QString qs_=ui->comboBox_str1->currentText();
    QString qs= (qs_.contains(".cpp")==1 ) ? "true":"flase";
    ui->plainTextEdit->appendPlainText(ui->comboBox_str1->currentText()+"是否包含.cpp"+"->"+qs);
}


void Widget::on_pushButton_endstrtswith_clicked()
{
    ui->plainTextEdit->appendPlainText("endstarwith:判断是否以一个字符串开头或结尾");
    QString qs_=ui->comboBox_str1->currentText();
    QString qs= (qs_.endsWith(".cpp")==1 ) ? "true":"flase";
    ui->plainTextEdit->appendPlainText(ui->comboBox_str1->currentText()+"是否endswith.cpp"+"->"+qs);

}


void Widget::on_pushButton_count_clicked()
{
    ui->plainTextEdit->appendPlainText("count:判断一个字符串出现次数");
    QString qs_=ui->comboBox_str1->currentText();
    ui->plainTextEdit->appendPlainText(QString::asprintf("\\出现了几次:%lld",qs_.count("\\")));

}


void Widget::on_pushButton_remove_clicked()
{
    ui->plainTextEdit->appendPlainText("remove:移除字符,从某个位置开始移除");
    QString qs_=ui->comboBox_str1->currentText();
    ui->plainTextEdit->appendPlainText(qs_.remove("\\"));
}


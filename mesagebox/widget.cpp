#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QColorDialog>
#include<QFontDialog>
#include<QProgressDialog>
#include<QElapsedTimer>
#include<QInputDialog>
#include<QMessageBox>

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

void Widget::on_pushButton_openfile_clicked()
{
    QString path_current=QApplication::applicationDirPath();
    QString Filename=QFileDialog::getOpenFileName(this,"打开一个文件",path_current,"文本文件(*.txt);;头文件(*.h)");
    if(Filename.isEmpty())
    {
        return ;
    }
    else
    {   ui->plainTextEdit->appendPlainText("打开一个文件");
        ui->plainTextEdit->appendPlainText(Filename);
    }
}


void Widget::on_pushButton_openfiles_clicked()
{
    QStringList items=QFileDialog::getOpenFileNames(this,"选择多个文件",QApplication::applicationDirPath(),"文本文件(*.txt);;头文件(*.h)");
    if(items.size()>0)
    {
        ui->plainTextEdit->appendPlainText("打开多个文件");
        for(auto &filename:items)
        {
            ui->plainTextEdit->appendPlainText(filename);
        }
    }
}


void Widget::on_pushButton_choosedir_clicked()
{
    QString Dir_string=QFileDialog::getExistingDirectory(this,"选择已存在的目录",QApplication::applicationDirPath());
    if(Dir_string.isEmpty())
    {
        return;
    }
    else
    {
        ui->plainTextEdit->appendPlainText("打开一个目录");
        ui->plainTextEdit->appendPlainText(Dir_string);
    }
}

void Widget::on_pushButton_savefile_clicked()
{
    QString save_name=QFileDialog::getSaveFileName(this,"保存文件",QApplication::applicationDirPath(),"文本文件(*.txt);;头文件(*.h)");
    if(save_name.isEmpty())
    {
        return;
    }
    else
    {
        ui->plainTextEdit->appendPlainText("保存一个文件");
        ui->plainTextEdit->appendPlainText(save_name);
    }
}

void Widget::on_pushButton_choosecolor_clicked()
{
    QPalette palte=ui->plainTextEdit->palette();
    QColor incolor=palte.color(QPalette::Text);
    QColor color_get=QColorDialog::getColor(incolor,this,"选择颜色");
    if(color_get.isValid())
    {
        palte.setColor(QPalette::Text,color_get);
        ui->plainTextEdit->setPalette(palte);
        ui->plainTextEdit->appendPlainText("选择颜色");
    }
}

void Widget::on_pushButton_choosefont_clicked()
{
    QFont font=ui->plainTextEdit->font();
    bool ok=false;
    QFont font_choose=QFontDialog::getFont(&ok,font,this,"选择字体");
    if(ok)
    {
        font=font_choose;
        ui->plainTextEdit->setFont(font);
        ui->plainTextEdit->appendPlainText("选择字体");
    }
}

void Widget::on_pushButton_process_clicked()
{
    int minvalue=0;
    int maxvalue=100;
    QProgressDialog dlapr("正在复制文字...","取消",minvalue,maxvalue,this);
    dlapr.setWindowTitle("复制文件");
    dlapr.setWindowModality(Qt::WindowModal);
    QElapsedTimer counter;
    connect(&dlapr,&QProgressDialog::canceled,this,[&]{ui->plainTextEdit->appendPlainText("取消");});
    for(int i=minvalue;i<maxvalue;i++)
    {
        dlapr.setValue(i);
        dlapr.setLabelText(QString::asprintf("正在复制文件:%d",i));
        counter.start();
        while(true)
        {
            if(counter.elapsed()>50)
            {
                break;
            }
        }
        if(dlapr.wasCanceled())
        {
            break;
        }
    }
}


void Widget::on_pushButton_inputString_clicked()
{
    bool ok=false;
    QString input_string=QInputDialog::getText(this,"getText","lable",QLineEdit::Normal,"新建文件.txt",&ok);
    ui->plainTextEdit->appendPlainText(input_string);
}


void Widget::on_pushButton_clearcontent_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_inputInt_clicked()
{
    int vlaue=10;
    int Minvalue=0;
    int Maxvalue=100;
    bool ok=false;
    int input_int=QInputDialog::getInt(this,"输入","输入整数",vlaue,Minvalue,Maxvalue,1,&ok);
    if(ok)
    {
        ui->plainTextEdit->appendPlainText(QString::asprintf("输入等到的数值为:%d",input_int));
    }
}



void Widget::on_pushButton_question_clicked()
{
    int res=QMessageBox::question(this,"问题","有问题",QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel|QMessageBox::NoButton);
    if(res==static_cast<int>(QMessageBox::Yes))
    {
        ui->plainTextEdit->appendPlainText("yes");
    }
}


void Widget::on_pushButton_chooseItems_clicked()
{
    QStringList items_test;
    items_test<<"南昌"<<"南京"<<"上海";
    int current_index=0;
    bool ok=false;
    QString get_string=QInputDialog::getItem(this,"输入框","选择一个数据",items_test,current_index,false,&ok);
    if(ok)
    {
        ui->plainTextEdit->appendPlainText("inputitem");
        ui->plainTextEdit->appendPlainText(get_string);
    }
}


void Widget::on_pushButton_warning_clicked()
{
    int res=QMessageBox::warning(this,"warning","这是一个警告",QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel|QMessageBox::NoButton);
}


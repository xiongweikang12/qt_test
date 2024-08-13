#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QSaveFile>
#include <QException>
#include <QTextDocument>
#include <QTextBlock>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionopen_triggered()
{
    QString filename=getfile(false);
    if(filename.isEmpty())
    {
        return ;
    }
    QFileInfo file_info(filename);
    QDir::setCurrent(file_info.absolutePath());
    QFile file_open(filename);
    if(file_open.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        ui->plainTextEdit_File->appendPlainText(file_open.readAll()); //QFile打开文件
    }
    file_open.close();
}

QString MainWindow::getfile(bool save)
{
    QString current_path=QApplication::applicationDirPath();
    QString title="选择一个文件";
    QString fifler="源文件(*.cpp);;头文件(*.h);;所有文件(*.*)";
    QString filename;
    if(save)
    {
        filename=QFileDialog::getSaveFileName(this,title,current_path,fifler);
    }
    filename=QFileDialog::getOpenFileName(this,title,current_path,fifler);
    return filename;
}

void MainWindow::on_actionsave_triggered()
{
    QString filename=getfile(true);
    QFile file_save(filename);
    if(file_save.open(QIODevice::WriteOnly|QIODevice::Text))
    {
        QString str_temp=ui->plainTextEdit_File->toPlainText();
        file_save.write(str_temp.toUtf8(),str_temp.toUtf8().length());
    }
    file_save.close();
}

void MainWindow::on_actionsaveFile_triggered()
{
    QString filename=getfile(true);
    QSaveFile file_save(filename);  //更安全的一种文件
    if(file_save.open(QIODevice::WriteOnly|QIODevice::Text))
    {
        QString str_temp=ui->plainTextEdit_File->toPlainText();
        file_save.setDirectWriteFallback(false);
        try{
            file_save.write(str_temp.toUtf8(),str_temp.toUtf8().length());
        }
        catch(QException &e)
        {
            file_save.cancelWriting();
        }

    }

}

void MainWindow::on_actiontextStream_triggered()
{
    QString filename=getfile();
    QFile file_open(filename);
    if(file_open.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QTextStream s_file(&file_open);
        ui->plainTextEdit->appendPlainText(s_file.readAll());
    }
    file_open.close();
}

void MainWindow::on_actiontextStream_save_triggered()
{
    QString filename=getfile(true);
    QSaveFile file_save(filename);
    if(file_save.open(QIODevice::WriteOnly|QIODevice::Text))
    {
        file_save.setDirectWriteFallback(true);
        try{
            QTextStream s_file(&file_save);
            s_file.setAutoDetectUnicode(true);
            QTextDocument *doc=ui->plainTextEdit->document();
            for(int i=0 ;i<doc->blockCount();i++)
            {
                s_file<<doc->findBlockByNumber(i).text();
                s_file<<"\n";
            }
            file_save.commit();
        }
        catch(QException &e)
        {
            file_save.cancelWriting();
        }
    }

}


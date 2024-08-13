#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include<QFileDialog>

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

template<class T>
void MainWindow::writeByStream(T value)
{
    QFile fileDevice(m_filename);
    if(!fileDevice.open(QIODevice::WriteOnly|QIODevice::Text))
    {
        return ;
    }
    QDataStream file_data(&fileDevice);
    file_data.setVersion(QDataStream::Qt_6_1);
    if(ui->radioButton_big->isChecked())
    {
        file_data.setByteOrder(QDataStream::BigEndian);
    }
    else if(ui->radioButton_Little->isChecked())
    {
        file_data.setByteOrder(QDataStream::LittleEndian);
    }
    else
    {
        file_data.setByteOrder(QDataStream::LittleEndian);
    }

    file_data<<value;
    fileDevice.close();
}
template<class T>
void MainWindow::readByStream(T &value)
{
    QFile fileDevice(m_filename);
    if(!fileDevice.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return ;
    }
    QDataStream file_data(&fileDevice);
    file_data.setVersion(QDataStream::Qt_6_1);
    if(ui->radioButton_big->isChecked())
    {
        file_data.setByteOrder(QDataStream::BigEndian);
    }
    else if(ui->radioButton_Little->isChecked())
    {
        file_data.setByteOrder(QDataStream::LittleEndian);
    }
    else
    {
        file_data.setByteOrder(QDataStream::LittleEndian);
    }

    file_data>>value;
    fileDevice.close();
}

void MainWindow::on_pushButton_testfile_clicked()
{
    QString str=QFileDialog::getOpenFileName(this,"选择一个文件",QApplication::applicationDirPath(),"文本文件(*.txt)");
    m_filename=str;
    if(!m_filename.isEmpty())
    {
        ui->actionclear_edit->setEnabled(true);
        ui->actionget_file->setEnabled(true);
        ui->actionwrite_file->setEnabled(true);
        ui->lineEdit->setText(QFileInfo(str).absoluteFilePath());
    }

}


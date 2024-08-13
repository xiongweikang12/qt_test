#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include<QFileDialog>
#include<QStandardItem>
#include<QTimer>
#include"tspinbox_delegate.h"
#include"tfloatspindelegate.h"
#include"tcomobo_delegate.h"

class QItemSelectionModel;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    test=new QTimer();
    standar_item_model= new QStandardItemModel(2,3,this);
    select_item_model =new QItemSelectionModel(standar_item_model,this);
    ui->tableView->setModel(standar_item_model);
    ui->tableView->setSelectionModel(select_item_model);
    // ui->tableView->setModel(select_item_model);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);

    //
    ui->actionfont_bold->setEnabled(false);
    ui->actional_center->setEnabled(false);

    float_delegate =new TfloatspinDelegate(this);
    spin_delegate = new  Tspinbox_delegate(this);
    combo_delegate =new Tcomobo_delegate(this);
    QStringList list_set;
    list_set<<"Qt Creator 13.0.1 (Community)"<<"Qt Creator 13.0.2 (Community)"<<"Qt Creator 13.0.3 (Community)";
    ui->tableView->setItemDelegateForColumn(0,float_delegate);
    ui->tableView->setItemDelegateForColumn(1,spin_delegate);
    combo_delegate->setitems(list_set,true);
    ui->tableView->setItemDelegateForColumn(2,combo_delegate);
    connect(test,&QTimer::timeout,this,&do_timeout);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actional_center_triggered()
{
    QModelIndex currindex_row=select_item_model->currentIndex();
    for(int i=0;i<standar_item_model->columnCount();i++)
    {
        standar_item_model->item(currindex_row.row(),i)->setTextAlignment(Qt::AlignCenter);
    }
}

void MainWindow::on_actionfont_bold_triggered()
{
    QFont font=ui->plainTextEdit->font();
    font.setBold(true);
    ui->plainTextEdit->setFont(font);

    //
    QModelIndex currindex_row=select_item_model->currentIndex();
    for(int i=0;i<standar_item_model->columnCount();i++)
    {
        QFont font_temp=standar_item_model->item(currindex_row.row(),i)->font();
        font_temp.setBold(true);
        standar_item_model->item(currindex_row.row(),i)->setFont(font_temp);
    }

}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    QString row=QString::number(index.row());
    QString col=QString::number(index.column());
    QString content=index.data(Qt::DisplayRole).toString();
    ui->statusbar->showMessage(row+"-"+col+":"+content);
}


void MainWindow::on_actionopen_file_triggered()
{
    QString cur_path=QCoreApplication::applicationDirPath();
    QString aFileName=QFileDialog::getOpenFileName(this,"打开一个文件",cur_path,"数据文本(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty())
    {
        return ;
    }
    QFile aFile(aFileName);
    if(!aFile.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return ;
    }
    ui->plainTextEdit->clear();
    QTextStream astream(&aFile);
    QStringList aFilecontent;
    while(!astream.atEnd())
    {
        QString str=astream.readLine();
        ui->plainTextEdit->appendPlainText(str);
        aFilecontent.append(str);
    }
    aFile.close();
    ui->actionfont_bold->setEnabled(true);
    ui->actional_center->setEnabled(true);
    // ui->plainTextEdit->setReadOnly(true);
    initModelData(aFilecontent);
}

void MainWindow::initModelData(QStringList &aFilecontent)
{
    int row_count=aFilecontent.size();
    standar_item_model->setRowCount(row_count-1);
    QString header=aFilecontent.at(0);
    QRegularExpression remove_space(R"(\s)");
    QRegularExpression split_dot(R"(，)");
    header=header.remove(remove_space);
    QStringList header_list=header.split(split_dot,Qt::SkipEmptyParts);
    standar_item_model->setHorizontalHeaderLabels(header_list);
    for (int i=1;i<row_count;i++)
    {
        QString alinetext=aFilecontent.at(i);
        alinetext=alinetext.remove(remove_space);
        QStringList alinetext_list=alinetext.split(split_dot,Qt::SkipEmptyParts);
        for(int j=0;j<alinetext_list.size();j++)
        {
            QStandardItem *aitem= new QStandardItem(alinetext_list.at(j));
            standar_item_model->setItem(i-1,j,aitem);
        }
    }

}

void MainWindow::do_timeout()
{
    QModelIndex index=ui->tableView->currentIndex();
    QStandardItem *item=standar_item_model->item(index.row(),index.column());
    item->setBackground(QBrush(Qt::green));
    qDebug()<<"进来了";
}

void MainWindow::on_actiondata_show_triggered()
{
    ui->plainTextEdit->clear();
    QStandardItem *aItem=nullptr;
    QString str;
    for(int i=0;i<standar_item_model->columnCount();i++)
    {
        aItem=standar_item_model->horizontalHeaderItem(i);
        qDebug()<<aItem->text();
        str+=aItem->text();
        str+="\t";
    }
    ui->plainTextEdit->appendPlainText(str);
    for(int i=0;i<standar_item_model->rowCount();i++)
    {
        str="";
        for(int j=0;j<standar_item_model->columnCount();j++)
        {
            aItem=standar_item_model->item(i,j);
            str+=aItem->text();
            str+="\t";
        }
        ui->plainTextEdit->appendPlainText(str);
    }

}


void MainWindow::on_actionappenditem_triggered()
{
    QList<QStandardItem*> item_list;
    QStandardItem *item_temp=nullptr;
    for(int i=0;i<standar_item_model->columnCount()-1;i++)
    {
        item_temp=new QStandardItem();
        item_temp->setText("append_item"+QString::number(i));
        item_list.push_back(item_temp);
    }
    QString str=standar_item_model->headerData(standar_item_model->columnCount()-1,Qt::Horizontal).toString();
    item_temp=new QStandardItem();
    item_temp->setText(str);
    item_temp->setCheckState(Qt::Checked);
    item_temp->setBackground(QBrush(Qt::red));
    item_list.push_back(item_temp);
    standar_item_model->insertRow(standar_item_model->rowCount(),item_list);
}


void MainWindow::on_actiondelect_item_triggered()
{
    //int col=select_item_model->currentIndex().column();
    QModelIndex row=select_item_model->currentIndex();
    standar_item_model->removeRow(row.row());
    if(row.row()==standar_item_model->rowCount()-1)
    {
        select_item_model->setCurrentIndex(row,QItemSelectionModel::Select);
    }
}


void MainWindow::on_tableView_pressed(const QModelIndex &index)
{
    QStandardItem *item=standar_item_model->item(index.row(),index.column());
    item->setBackground(QBrush(Qt::red));
    test->setInterval(1000);
    test->setSingleShot(true);
    test->start();
    qDebug()<<"调用了";
}


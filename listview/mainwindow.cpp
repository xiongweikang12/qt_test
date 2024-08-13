#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringListModel>
#include<QLabel>
#include<QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());

    str_list<<"南昌"<<"北京"<<"上海"<<"天津";
    str_list.push_back("南京"); //添加元素
    m_model =new QStringListModel(str_list); //多个构造函数重载
    // m_model->setStringList(str_list);
    ui->listView->setModel(m_model);

    //
    ui->listView->setDragEnabled(true); //脱
    ui->listView->setAcceptDrops(true); //放
    ui->listView->setDefaultDropAction(Qt::MoveAction);
    ui->listView->setDragDropMode(QAbstractItemView::DragDrop);
    //
    setAcceptDrops(true);
    ui->plainTextEdit->setAcceptDrops(true);

    QLabel *label_index=new QLabel("索引row-col");
    QLabel *label_content=new QLabel("内容");
    ui->statusbar->addWidget(label_index);
    ui->statusbar->addWidget(label_content);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_undolist_clicked()
{
    QStringList temp=str_list;
    m_model->setStringList(temp);
}

void MainWindow::on_pushButton_clearlist_clicked()
{
    m_model->removeRows(0,m_model->rowCount());
}


void MainWindow::on_checkBox_editable_clicked(bool checked)
{
    if(checked)
    {
        ui->listView->setEditTriggers(QAbstractItemView::EditTrigger::DoubleClicked|QAbstractItemView::EditTrigger::SelectedClicked);
    }
    else
    {
        ui->listView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
    }

}


void MainWindow::on_pushButton_clearplainedit_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_pushButton_additem_clicked()
{
    m_model->insertRow(m_model->rowCount());
    QModelIndex index=m_model->index(m_model->rowCount()-1);
    m_model->setData(index,"add_item_byindex",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_insertitem_clicked()
{
    int temp_insert=ui->listView->currentIndex().row();
    QModelIndex temp_index=ui->listView->currentIndex();
    m_model->insertRow(temp_insert);
    m_model->setData(temp_index,QDate::currentDate(),Qt::DisplayRole);
}


void MainWindow::on_pushButton_delectitem_clicked()
{
    m_model->removeRow(ui->listView->currentIndex().row());
}


void MainWindow::on_pushButton_upmove_clicked()
{
    QModelIndex index;
    int currow=ui->listView->currentIndex().row();
    m_model->moveRow(index,currow,index,currow-1);
}


void MainWindow::on_pushButton_downmove_clicked()
{
    QModelIndex index;
    int currow=ui->listView->currentIndex().row();
    m_model->moveRow(index,currow,index,currow+2);
}


void MainWindow::on_pushButton_sort_clicked()
{
    m_model->sort(0,Qt::AscendingOrder);
}


void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    int row =index.row();
    QString str=QString::asprintf("col=%d-row=%d",0,row)+"content-"+m_model->data(index,Qt::DisplayRole).toString();
    ui->statusbar->showMessage(str);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->plainTextEdit->clear();
    QString str_input="";
    for(int i=0;i<m_model->rowCount();i++)
    {
        str_input+=m_model->stringList().at(i)+"\n";
        //stringList是其model的数据接口
        //m_model是listview的模型接口
        //listview->Qindexmodel->model
    }
    ui->plainTextEdit->appendPlainText(str_input);
}


#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QStringListModel>
#include <QFileSystemModel>
#include<QColor>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    file_path=QString("节点文件路径:");
    QLabel *file_path_status=new QLabel(file_path);
    ui->statusbar->addWidget(file_path_status);
    ui->comboBox_file->setEnabled(false);
    ui->pushButton_apply->setEnabled(false);

    m_FileTreeViewModel =new QFileSystemModel(this);
    ui->treeView->setModel(m_FileTreeViewModel);
    ui->listView->setModel(m_FileTreeViewModel);
    ui->tableView->setModel(m_FileTreeViewModel);

    m_FileTreeViewModel->setRootPath(QDir::currentPath());
    // ui->treeView->setRootIndex(m_FileTreeViewModel->index(QApplication::applicationDirPath()));
    ui->treeView->setRootIndex(m_FileTreeViewModel->index(QDir::currentPath()));

    connect(ui->treeView,&QTreeView::clicked,ui->listView,&QListView::setRootIndex);
    connect(ui->treeView,&QTreeView::clicked,ui->tableView,&QTableView::setRootIndex);

/*
 *
    m_TableViewModel=new QStandardItemModel(this);
    ui->tableView->setModel(m_TableViewModel);
    m_TableViewSelectModel=new QItemSelectionModel(m_TableViewModel);
    ui->tableView->setSelectionModel(m_TableViewSelectModel);
    m_TableViewModel=new QStandardItemModel(this);
    ui->tableView->setModel(m_TableViewModel);
    m_TableViewSelectModel=new QItemSelectionModel(m_TableViewModel);
    ui->tableView->setSelectionModel(m_TableViewSelectModel);

    m_ListView<<"1"<<"2"<<"3";
    m_ListViewModel=new QStringListModel(m_ListView);
    ui->listView->setModel(m_ListViewModel);
*/


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionsetRoot_triggered()
{
    QString dir=QFileDialog::getExistingDirectory(this,QDir::currentPath(),"选择目录");
    if(dir.isEmpty()){return;}
    else
    {
        ui->treeView->setRootIndex(m_FileTreeViewModel->index(dir));
        ui->listView->setRootIndex(m_FileTreeViewModel->index(dir));
        ui->tableView->setRootIndex(m_FileTreeViewModel->index(dir));
        qDebug()<<dir;
    }

}

void MainWindow::on_radioButton_displayfiledir_clicked()
{
    m_FileTreeViewModel->setFilter(QDir::AllDirs|QDir::Files|QDir::NoDotAndDotDot);
}


void MainWindow::on_radioButton_displaydironly_clicked()
{
    m_FileTreeViewModel->setFilter(QDir::AllDirs|QDir::NoDotAndDotDot);
}

void MainWindow::on_pushButton_apply_clicked()
{
    QString filler_combo=ui->comboBox_file->currentText().trimmed();
    QStringList list_fill;
    list_fill.push_back(filler_combo);
    if(ui->checkBox_filefilter->isChecked())
    {
        m_FileTreeViewModel->setNameFilters(list_fill);
    }
}

void MainWindow::on_checkBox_filefilter_clicked(bool checked)
{
    ui->comboBox_file->setEnabled(checked);
    ui->pushButton_apply->setEnabled(checked);
    m_FileTreeViewModel->setNameFilterDisables(!checked);
}


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    click_display(index);
}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    click_display(index);
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    click_display(index);

}

void MainWindow::click_display(const QModelIndex &index)
{
    ui->label_filename->setText(m_FileTreeViewModel->fileName(index));
    ui->label_filesize->setText(QString::number(m_FileTreeViewModel->fileInfo(index).size()));
    ui->label_nodetype->setText(m_FileTreeViewModel->type(index));
    ui->checkBox_nodeisdir->setChecked(m_FileTreeViewModel->fileInfo(index).isDir());
    ui->statusbar->showMessage(m_FileTreeViewModel->filePath(index));
}
//三个view的相同的部分


void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    //未成功实现
    m_FileTreeViewModel->setData(index,QColor().red(),Qt::BackgroundRole);
}


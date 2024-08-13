#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "row_col_dialog.h"
#include <QStandardItemModel>
#include <QItemSelectionModel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_model =new QStandardItemModel(4,4,this);
    select_model =new QItemSelectionModel(m_model);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(select_model);
    QStringList header;
    header<<"姓名"<<"性别"<<"学位"<<"部门";
    m_model->setHorizontalHeaderLabels(header);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionset_row_col_triggered()
{
    row_col_Dialog *Dialog_mine= new row_col_Dialog();

}


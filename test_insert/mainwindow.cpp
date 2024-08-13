#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//slot
void MainWindow::on_actioninsert_widget_triggered()
{
    MyTForm *form=new MyTForm();
    form->setAttribute(Qt::WA_DeleteOnClose);
    int curr_index=ui->tabWidget->addTab(form,QString::asprintf("widget %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(curr_index);
    ui->tabWidget->setVisible(true);
    connect(form,&MyTForm::emit_filename,this,&MainWindow::get_sinal_settab);
    form->show();
}

//slot
void MainWindow::get_sinal_settab(const QString &name)
{
    int index=ui->tabWidget->currentIndex();
    ui->tabWidget->setTabText(index,name);
}

//slot
void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->widget(index)->close();
}


void MainWindow::on_actionsingal_widget_triggered()
{
    MyTForm *form=new MyTForm();
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->show();
}


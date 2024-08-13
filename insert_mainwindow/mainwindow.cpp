#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mytform.h"
#include "insert_window.h"

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
    // form->show(); 都会展示
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


void MainWindow::on_actioninsert_mainwindow_triggered()
{
    Insert_window *window_tab=new Insert_window();
    window_tab->setAttribute(Qt::WA_DeleteOnClose);
    int curr_index=ui->tabWidget->addTab(window_tab,QString::asprintf("window %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(curr_index);
    ui->tabWidget->setVisible(true);
    connect(window_tab,&Insert_window::now_triggered_label,this,&MainWindow::get_sinal_settab);
}


void MainWindow::on_actionsingal_Mainwindow_triggered()
{
    Insert_window *window_notab=new Insert_window();
    window_notab->setAttribute(Qt::WA_DeleteOnClose);
    window_notab->show();

}


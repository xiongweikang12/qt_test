#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tformdoc.h"
#include <QFileInfo>
#include<QMdiSubWindow>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->mdiArea);
    ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
    ui->actionMDI_mode->setChecked(true);
    ui->actioncloseall->setEnabled(false);
    ui->actioncut->setEnabled(false);
    ui->actioncopy->setEnabled(false);
    ui->actionsetfont->setEnabled(false);
    ui->actionpaste->setEnabled(false);
    ui->actioncasca->setEnabled(false);
    ui->actiontile->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionnewfile_triggered()
{
    TFormdoc *newdoc=new TFormdoc(this);
    ui->mdiArea->addSubWindow(newdoc);
    newdoc->show();
    ui->actioncloseall->setEnabled(true);
    ui->actioncut->setEnabled(true);
    ui->actioncopy->setEnabled(true);
    ui->actionsetfont->setEnabled(true);
    ui->actionpaste->setEnabled(true);
    ui->actioncasca->setEnabled(true);
    ui->actiontile->setEnabled(true);
    connect(newdoc,&TFormdoc::is_tab_empty,this,&MainWindow::dosometing_empty);
}

void MainWindow::on_actionopenfile_triggered()
{
    QString filename=QFileDialog::getOpenFileName(this,"选择一个文件",QApplication::applicationDirPath(),"头文件(*.h);;所有文件(*.*)");
    QFileInfo file_open_info(filename);
    if(ui->mdiArea->subWindowList().size()==0)
    {
        TFormdoc *newdoc=new TFormdoc(this);
        ui->mdiArea->addSubWindow(newdoc);
        newdoc->Fileopen_getname(filename);
        newdoc->show();
        ui->actioncloseall->setEnabled(true);
        ui->actioncut->setEnabled(true);
        ui->actioncopy->setEnabled(true);
        ui->actionsetfont->setEnabled(true);
        ui->actionpaste->setEnabled(true);
        ui->actioncasca->setEnabled(true);
        ui->actiontile->setEnabled(true);
        connect(newdoc,&TFormdoc::is_tab_empty,this,&MainWindow::dosometing_empty);
    }
    else
    {
        TFormdoc *tamp=dynamic_cast<TFormdoc*>(ui->mdiArea->currentSubWindow()->widget());
        tamp->Fileopen_getname(filename);
        connect(tamp,&TFormdoc::is_tab_empty,this,&MainWindow::dosometing_empty);
    }
}


void MainWindow::on_actioncloseall_triggered()
{
    ui->mdiArea->closeAllSubWindows();
    ui->actioncut->setEnabled(false);
    ui->actioncopy->setEnabled(false);
    ui->actionsetfont->setEnabled(false);
    ui->actionpaste->setEnabled(false);

}

void MainWindow::on_actioncut_triggered()
{
    TFormdoc *tamp=dynamic_cast<TFormdoc*>(ui->mdiArea->currentSubWindow()->widget());
    tamp->content_cut();
}

void MainWindow::on_actioncopy_triggered()
{
    TFormdoc *tamp=dynamic_cast<TFormdoc*>(ui->mdiArea->currentSubWindow()->widget());
    tamp->content_copy();
}

void MainWindow::on_actionpaste_triggered()
{
    TFormdoc *tamp=dynamic_cast<TFormdoc*>(ui->mdiArea->currentSubWindow()->widget());
    tamp->content_paser();
}


void MainWindow::on_actionsetfont_triggered()
{
    TFormdoc *tamp=dynamic_cast<TFormdoc*>(ui->mdiArea->currentSubWindow()->widget());
    tamp->content_fontset();
}


void MainWindow::on_actionMDI_mode_triggered(bool checked)
{
    if(!checked)
    {
        ui->mdiArea->setViewMode(QMdiArea::TabbedView);
        ui->mdiArea->setTabsClosable(true);
        ui->actioncasca->setEnabled(false);
        ui->actiontile->setEnabled(false);
    }
    else
    {
        ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
        ui->actioncasca->setEnabled(true);
        ui->actiontile->setEnabled(true);
    }
}


void MainWindow::on_actioncasca_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}


void MainWindow::on_actiontile_triggered()
{
    ui->mdiArea->tileSubWindows();
}

void MainWindow::dosometing_empty()
{
    qDebug()<<"摧毁";
    qDebug()<<ui->mdiArea->subWindowList().size();
    if(ui->mdiArea->subWindowList().size()<=1)
    {
        ui->actioncloseall->setEnabled(false);
        ui->actioncut->setEnabled(false);
        ui->actioncopy->setEnabled(false);
        ui->actionsetfont->setEnabled(false);
        ui->actionpaste->setEnabled(false);
        ui->actioncasca->setEnabled(false);
        ui->actiontile->setEnabled(false);
    }
}





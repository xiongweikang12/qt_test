#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QActionGroup>
#include<QSpinBox>
#include<QLabel>
#include<QProgressBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //解决互斥
    QActionGroup *action_group=new QActionGroup(this);
    action_group->addAction(ui->actfont_zn);
    action_group->addAction(ui->actfont_en);
    action_group->setExclusive(true);

    //创建一些无法通过ui设计的组件
    spin_font_size=new QSpinBox(this);
    spin_font_size->setMaximum(50);
    spin_font_size->setMinimum(5);
    spin_font_size->setValue(ui->plainTextEdit->font().pointSize());
    spin_font_size->setMinimumWidth(50);

    //为toobar添加一个widget控件
    spin_font_size->setGeometry(spin_font_size->geometry().x(),spin_font_size->geometry().y(),30,25);
    ui->toolBar->addWidget(spin_font_size);
    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->action_close);

    //status bar
    label_=new QLabel(this);
    label_->setMinimumWidth(150);
    label_->setText("文件名");
    ui->statusbar->addWidget(label_);

    //状态栏
    progressBar_show= new QProgressBar(this);
    progressBar_show->setValue(spin_font_size->value());
    ui->statusbar->addWidget(progressBar_show);


    plainedit_keep=new QString(ui->plainTextEdit->toPlainText());






    connect(spin_font_size,&QSpinBox::valueChanged,this,&MainWindow::do_spinbox_change);
    connect(ui->action_close,SIGNAL(triggered()),this,SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete plainedit_keep;
}


void MainWindow::on_actformat_bold_triggered()
{
    QFont font_set=ui->plainTextEdit->font();
    font_set.setBold(true);
    ui->plainTextEdit->setFont(font_set);
}


void MainWindow::on_actedit_cancel_triggered()
{
    ui->plainTextEdit->clear();
}



void MainWindow::on_actFile_New_triggered()
{
    ui->plainTextEdit->clear();
    label_->setText("创建一个新文件");
    qDebug()<<"创建一个新文件";
}


void MainWindow::on_actFile_save_triggered()
{
    if(ui->plainTextEdit->toPlainText().isEmpty())
    {
        ui->plainTextEdit->appendPlainText(*plainedit_keep);
    }
    *plainedit_keep=ui->plainTextEdit->toPlainText();
}

void MainWindow::do_spinbox_change(int fontsize)
{
    qDebug()<<fontsize;
    QFont font_=ui->plainTextEdit->font();
    font_.setPointSize(fontsize);
    ui->plainTextEdit->setFont(font_);
    progressBar_show->setValue(fontsize);
}


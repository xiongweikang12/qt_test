#include "widget.h"
#include "ui_widget.h"
#include<QTimer>
#include<QTime>
#include<QElapsedTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_timer= new QTimer(this);
    m_counter= new QElapsedTimer();
    m_timer->stop();
    ui->radioButton_CoarseTimer->setChecked(true);
    m_timer->setTimerType(Qt::CoarseTimer);
    ui->lineEdit->setReadOnly(true);
    connect(m_timer,SIGNAL(timeout()),this,SLOT(do_timer_timerout()));
}

Widget::~Widget()
{
    delete m_counter;
    delete ui;
}

void Widget::do_timer_timerout()
{
    QApplication::beep();
    QTime current_time= QTime::currentTime();
    ui->lcdNumber_hour->display(QString::number(current_time.hour()));
    ui->lcdNumber_mintus_->display(QString::number(current_time.minute()));
    ui->lcdNumber_second->display(QString::number(current_time.second()));
    m_timer->setSingleShot(ui->radioButton_singal->isChecked());
    if(m_timer->isSingleShot())
    {
        int Tmsec=m_counter->elapsed();
        QString str=QString("流逝的时间%1").arg(Tmsec); //得到程序的上次start后的时间,单次定时后的时间
        ui->lineEdit->setText(str);
        ui->pushButton_start->setEnabled(true); //设置按钮属性
        ui->pushButton_stop->setEnabled(false);
        ui->pushButton_dset->setEnabled(true);
    }

}

void Widget::on_pushButton_start_clicked()
{
    m_timer->setInterval(ui->spinBox_setinterval->value());
    m_timer->setSingleShot(ui->radioButton_singal->isChecked());
    if(ui->radioButton_CoarseTimer->isChecked())
    {
        m_timer->setTimerType(Qt::CoarseTimer);
    }
    else if(ui->radioButton_PreciseTimer->isChecked())
    {
        m_timer->setTimerType(Qt::PreciseTimer);
    }
    else{
        m_timer->setTimerType(Qt::VeryCoarseTimer);
    }
    m_timer->start();
    m_counter->start();
    ui->pushButton_start->setEnabled(false);
    ui->pushButton_stop->setEnabled(true);
    ui->pushButton_dset->setEnabled(true);
}


void Widget::on_pushButton_stop_clicked()
{
    m_timer->setInterval(ui->spinBox_setinterval->value());
    m_timer->setSingleShot(ui->radioButton_singal->isChecked());
    if(ui->radioButton_CoarseTimer->isChecked()) //判断定时器类型
    {
        m_timer->setTimerType(Qt::CoarseTimer);
    }
    else if(ui->radioButton_PreciseTimer->isChecked())
    {
        m_timer->setTimerType(Qt::PreciseTimer);
    }
    else{
        m_timer->setTimerType(Qt::VeryCoarseTimer);
    }
    m_timer->stop();
    int Tmsec=m_counter->elapsed();
    QString str=QString("流逝的时间%1").arg(Tmsec); //得到程序的上次start后的时间,主动停止的时间
    ui->lineEdit->setText(str);
    ui->pushButton_start->setEnabled(true);
    ui->pushButton_stop->setEnabled(false);
    ui->pushButton_dset->setEnabled(true);
}


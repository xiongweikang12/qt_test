#include "enterdialog.h"
#include "ui_enterdialog.h"
#include<QSettings>
#include <QMessageBox>
#include <QMouseEvent>

EnterDialog::EnterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EnterDialog)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlag(Qt::SplashScreen);
}

EnterDialog::~EnterDialog()
{
    delete ui;
}

void EnterDialog::set_code(QString name_pwd)
{
    Q_UNUSED(name_pwd);
}

void EnterDialog::wirthSettings()
{
    QSettings settings;
    settings.setValue("Username",this->user_name);
    settings.setValue("Password",this->user_pwd);
    settings.setValue("issaved",ui->checkBox_savepwd->isChecked());
}

void EnterDialog::on_pushButton_accpect_clicked()
{
    QString text_username=ui->lineEdit_username->text();
    QString text_userpassword=ui->lineEdit_userpwd->text();
    if(text_username==user_name&&text_userpassword==user_pwd)
    {
        this->accept();
        if(ui->checkBox_savepwd->isChecked())
        {
            this->wirthSettings();
        }
    }
    else
    {   QMessageBox::warning(this,"警告输入错误",QString::asprintf("还有%d次机会",Max_count-counter_input));
        counter_input++;
        if(counter_input>=Max_count)
        {
            QMessageBox::question(this,"错误","输入达到上限");
            this->reject();
        }
    }
}


void EnterDialog::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        this->ismove=true;
        this->m_lastpos=event->globalPosition().toPoint();
    }
    return QDialog::mousePressEvent(event);
}

void EnterDialog::mouseReleaseEvent(QMouseEvent *event)
{
    this->ismove=false;
    event->accept();
}

void EnterDialog::mouseMoveEvent(QMouseEvent *event)
{
    QPoint event_point=event->globalPosition().toPoint();
    if((event_point-this->m_lastpos-this->pos()).manhattanLength()>QApplication::startDragDistance()
        &&ismove&&(event->buttons()&Qt::LeftButton))
    {
        move(event_point-this->m_lastpos);
        m_lastpos=event_point-this->pos();
    }
    return QDialog::mouseMoveEvent(event);
}

#include "sqlinfodialog.h"
#include "ui_sqlinfodialog.h"
#include <QtSql>
#include <algorithm>
#include<QMessageBox>
#include<QMap>
#include<QList>


bool sqlInfoDialog::is_check_database=false;
bool sqlInfoDialog::is_check_table=false;
QString sqlInfoDialog::save_database="";
QString sqlInfoDialog::save_table="";

sqlInfoDialog::sqlInfoDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sqlInfoDialog)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("输入数据库数据");
    ui->comboBox_databasedrive->addItems(QSqlDatabase::drivers());
    ui->lineEdit_hostname->setText("127.0.0.1");
    ui->lineEdit_username->setText("root");
    ui->lineEdit_password->setText("176100");
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    ui->checkBox_savedatabase->setChecked(sqlInfoDialog::is_check_database);
    ui->checkBox_savetable->setChecked(sqlInfoDialog::is_check_table);
    if(sqlInfoDialog::is_check_database){ui->lineEdit_databasename->setText(sqlInfoDialog::save_database);}
    if(sqlInfoDialog::is_check_table){ui->lineEdit_tablename->setText(sqlInfoDialog::save_table);}
}

sqlInfoDialog::~sqlInfoDialog()
{
    delete ui;
}

void sqlInfoDialog::on_pushButton_accecpt_clicked()
{
    QMap<QString,QString> sql_info;
    QString drive=ui->comboBox_databasedrive->currentText();
    QString connect_database=ui->lineEdit_databaseconnect->text();
    QString host_name=ui->lineEdit_hostname->text();
    QString user_name=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();
    QString database_name=ui->lineEdit_databasename->text();
    QString table_name=ui->lineEdit_tablename->text();
    QList<bool> is_empty_1={drive.isEmpty(),connect_database.isEmpty(),
                                 host_name.isEmpty(),user_name.isEmpty(),password.isEmpty(),
                                database_name.isEmpty(),table_name.isEmpty()};


    if(std::any_of(is_empty_1.begin(),is_empty_1.end(),[](bool empty){return empty==true;}))
    {
        QMessageBox::warning(this,"错误","信息不完整");
    }
    else
    {
        sql_info.insert("drive",drive);
        sql_info.insert("connect",connect_database);
        sql_info.insert("host",host_name);
        sql_info.insert("user",user_name);
        sql_info.insert("password",password);
        sql_info.insert("databasename",database_name);
        sql_info.insert("tablename",table_name);
        //
        sqlInfoDialog::is_check_database=(ui->checkBox_savedatabase->isChecked());
        sqlInfoDialog::is_check_table=(ui->checkBox_savetable->isChecked());
        if(sqlInfoDialog::is_check_database){sqlInfoDialog::save_database=database_name;}
        if(sqlInfoDialog::is_check_table){sqlInfoDialog::save_table=table_name;}
        //
        emit emit_sqlinfo(sql_info);
        this->accept();
    }

}


#include "sqldialog.h"
#include "ui_sqldialog.h"

SqlDialog::SqlDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SqlDialog)
{
    ui->setupUi(this);
}

SqlDialog::~SqlDialog()
{
    delete ui;
}

void SqlDialog::combo_database(QStringList items)
{
    ui->comboBox_database->addItems(items);
}

void SqlDialog::combo_table(QStringList items)
{
    ui->comboBox_2->addItems(items);
}

void SqlDialog::on_pushButton_clicked()
{
    emit emit_databseinfo(ui->comboBox_database->currentText(),ui->comboBox_2->currentText());
    emit emit_openSelect();
    this->accept();
}


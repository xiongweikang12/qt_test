#include "tsizedialog.h"
#include "ui_tsizedialog.h"
#include <QCloseEvent>

TsizeDialog::TsizeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TsizeDialog)
{
    ui->setupUi(this);
}

TsizeDialog::~TsizeDialog()
{
    delete ui;
}

void TsizeDialog::set_colrow(int col, int row)
{
    ui->spinBox_colcount->setValue(col);
    ui->spinBox_rowcount->setValue(row);
}

int TsizeDialog::return_col()
{
    return ui->spinBox_colcount->value();
}

int TsizeDialog::return_row()
{
    return ui->spinBox_rowcount->value();
}

void TsizeDialog::closeEvent(QCloseEvent *event)
{
    event->accept();
    emit keep_enable(true);
}

void TsizeDialog::showEvent(QShowEvent *event)
{
    event->accept();
    emit keep_disenable(false);
}

void TsizeDialog::on_pushButton_ok_clicked()
{
    this->close();
    emit set_rowcol(this->return_col(),this->return_row());
}


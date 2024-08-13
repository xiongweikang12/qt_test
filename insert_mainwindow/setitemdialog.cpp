#include "setitemdialog.h"
#include "ui_setitemdialog.h"
#include <QModelIndex>

setitemDialog::setitemDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::setitemDialog)
{
    ui->setupUi(this);
}

setitemDialog::~setitemDialog()
{
    delete ui;
}

void setitemDialog::set_item_spinboxinit(int col, int row,QModelIndex &index)
{
    ui->spinBox_colindex->setRange(0,col-1);
    ui->spinBox_rowindex->setRange(0,row-1);
    ui->spinBox_colindex->setValue(index.column());
    ui->spinBox_rowindex->setValue(index.row());

}

void setitemDialog::on_pushButton_setText_clicked()
{
    int col_current=ui->spinBox_colindex->value();
    int row_current=ui->spinBox_rowindex->value();
    QString text_temp=ui->lineEdit_itemtext->text();
    if(ui->checkBox_colnum_increase->isChecked())
    {
        ui->spinBox_colindex->setValue(col_current+1);
    }
    if(ui->checkBox_rownum_increase->isChecked())
    {
        ui->spinBox_rowindex->setValue(row_current+1);
    }
    // this->close();
    emit setitem_lineedit(col_current,row_current,text_temp);

}

void setitemDialog::tableview_click(const QModelIndex &index)
{
    ui->spinBox_colindex->setValue(index.column());
    ui->spinBox_rowindex->setValue(index.row());
    ui->lineEdit_itemtext->setText(index.data(Qt::DisplayRole).toString());
}


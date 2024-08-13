#include "row_col_dialog.h"
#include "ui_row_col_dialog.h"

row_col_Dialog::row_col_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::row_col_Dialog)
{
    ui->setupUi(this);
}

row_col_Dialog::~row_col_Dialog()
{
    delete ui;
}

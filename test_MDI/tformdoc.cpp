#include "tformdoc.h"
#include "ui_tformdoc.h"
#include<QFile>
#include<QTextStream>
#include<QFileInfo>
#include<QFontDialog>

TFormdoc::TFormdoc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TFormdoc)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

TFormdoc::~TFormdoc()
{
    delete ui;
}

void TFormdoc::Fileopen_getname(const QString &filename)
{
    QFile file_open(filename);
    if(file_open.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QTextStream app_file(&file_open);
        ui->plainTextEdit->appendPlainText(app_file.readAll());
    }
    QFileInfo file_info(filename);
    this->setWindowTitle(file_info.fileName());
    file_open.close();
}

void TFormdoc::content_cut()
{
    ui->plainTextEdit->cut();
}

void TFormdoc::content_copy()
{
    ui->plainTextEdit->copy();
}

void TFormdoc::content_paser()
{
    ui->plainTextEdit->paste();
}

void TFormdoc::content_fontset()
{
    bool ok=false;
    QFont init_font = ui->plainTextEdit->font();
    init_font=QFontDialog::getFont(&ok,init_font,this,"选择一个字体");
    if(ok)
    {
        ui->plainTextEdit->setFont(init_font);
    }
}

void TFormdoc::on_TFormdoc_destroyed()
{
    emit is_tab_empty();
}

void TFormdoc::closeEvent(QCloseEvent *event)
{
    emit is_tab_empty();
}


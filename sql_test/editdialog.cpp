#include "editdialog.h"
#include "ui_editdialog.h"
#include <QSqlRecord>

EditDialog::EditDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditDialog)
{
    ui->setupUi(this);
    ui->spinBox_id->setEnabled(false);
    QWidget::setWindowTitle("展示编辑sqlRecord");
}

EditDialog::~EditDialog()
{
    delete ui;
}

void EditDialog::getrecord(const QSqlRecord &temp)
{
    int i=0;
    m_record=temp;
    ui->spinBox_id->setValue(m_record.value(Sql_fild.at(i++)).toInt());
    ui->lineEdit_name->setText(m_record.value(Sql_fild.at(i++)).toString());
    ui->comboBox_sex->setCurrentText(m_record.value(Sql_fild.at(i++)).toString());
    ui->dateEdit_birthdata->setDate(m_record.value(Sql_fild.at(i++)).toDate());
    ui->lineEdit_part->setText(m_record.value(Sql_fild.at(i++)).toString());
    ui->comboBox_part->setCurrentText(m_record.value(Sql_fild.at(i++)).toString());
    ui->spinBox_money->setValue(m_record.value(Sql_fild.at(i++)).toInt());

}
QSqlRecord EditDialog::setrecord()
{
    int i=0;
    m_record.setValue(Sql_fild.at(i++),ui->spinBox_id->text());
    m_record.setValue(Sql_fild.at(i++),ui->lineEdit_name->text());
    m_record.setValue(Sql_fild.at(i++),ui->comboBox_sex->currentText());
    m_record.setValue(Sql_fild.at(i++),ui->dateEdit_birthdata->date());
    m_record.setValue(Sql_fild.at(i++),ui->lineEdit_part->text());
    m_record.setValue(Sql_fild.at(i++),ui->comboBox_part->currentText());
    m_record.setValue(Sql_fild.at(i++),ui->spinBox_money->value());
    return m_record;
}

void EditDialog::getsqlFild(const QStringList &temp)
{
    Sql_fild=temp;
}

void EditDialog::getcombo(const QMap<QString, QStringList> &temp,int index)
{
    switch (index) {
    case 2:
    ui->comboBox_sex->addItems(temp.value("sex"));
        break;
    case 5:
    ui->comboBox_part->addItems(temp.value("part"));
        break;
    }
}

void EditDialog::getdefult_combo()
{
    ui->comboBox_part->addItems({"财务","人力","生产","研发"});
    ui->comboBox_sex->addItems({"男","女"});
}

void EditDialog::set_info_row(int row)
{
    this->info_row=row;
}

int EditDialog::get_info_row()
{
    return this->info_row;
}

void EditDialog::on_pushButton_submit_clicked()
{
    emit emit_tap_row(this->index_tap,this->info_row,this->setrecord());
    emit do_change();
    this->accept();
}


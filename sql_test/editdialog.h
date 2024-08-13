#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>
#include <QSqlRecord>
#include <QMap>

namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditDialog(QWidget *parent = nullptr);
    ~EditDialog();
public:
    int index_tap;
    void getrecord(const QSqlRecord &temp);
    QSqlRecord setrecord();
    void getsqlFild(const QStringList &temp);
    void getcombo(const QMap<QString,QStringList> &temp,int index);
    void getdefult_combo();
    void set_info_row(int row);
    int get_info_row();

private slots:
    void on_pushButton_submit_clicked();

private:
    Ui::EditDialog *ui;
    QStringList Sql_fild;
    QSqlRecord m_record;
    int info_row;
signals:
    void emit_tap_row(int index_tap ,int info_row,QSqlRecord rec_t);
    void do_change();

};

#endif // EDITDIALOG_H

#ifndef SQLINFODIALOG_H
#define SQLINFODIALOG_H

#include <QDialog>
#include<QMap>

namespace Ui {
class sqlInfoDialog;
}

class sqlInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit sqlInfoDialog(QWidget *parent = nullptr);
    ~sqlInfoDialog();

private slots:
    void on_pushButton_accecpt_clicked();

private:
    Ui::sqlInfoDialog *ui;
private:
    static bool is_check_database;
    static bool is_check_table;
    static QString save_database;
    static QString save_table;
signals:
    void emit_sqlinfo(QMap<QString,QString> info);
};


#endif

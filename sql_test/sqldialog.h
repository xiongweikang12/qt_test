#ifndef SQLDIALOG_H
#define SQLDIALOG_H

#include <QDialog>

namespace Ui {
class SqlDialog;
}

class SqlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SqlDialog(QWidget *parent = nullptr);
    ~SqlDialog();
public:
    void combo_database(QStringList items);
    void combo_table(QStringList items);

private slots:
    void on_pushButton_clicked();

private:
    Ui::SqlDialog *ui;
signals:
    void emit_databseinfo(const QString &databsename,const QString &tablename);
    void emit_openSelect();
};



#endif // SQLDIALOG_H

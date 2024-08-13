#ifndef SETITEMDIALOG_H
#define SETITEMDIALOG_H

#include <QDialog>
class QModelIndex;
namespace Ui {
class setitemDialog;
}

class setitemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit setitemDialog(QWidget *parent = nullptr);
    ~setitemDialog();
    void set_item_spinboxinit(int col,int row,QModelIndex &index);

private slots:
    void on_pushButton_setText_clicked();
public slots:
    void tableview_click(const QModelIndex &index);

private:
    Ui::setitemDialog *ui;
signals:
    void setitem_lineedit(int col_current,int row_current,QString &text_temp);

};

#endif // SETITEMDIALOG_H

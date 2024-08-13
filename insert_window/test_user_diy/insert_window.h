#ifndef INSERT_WINDOW_H
#define INSERT_WINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
class QModelIndex;

QT_BEGIN_NAMESPACE
namespace Ui {
class Insert_window;
}
QT_END_NAMESPACE

class Insert_window : public QMainWindow
{
    Q_OBJECT

public:
    Insert_window(QWidget *parent = nullptr);
    ~Insert_window();

private slots:
    void on_actionsetsize_triggered();

    void on_actionsetheader_triggered();

    void size_dialog_noable();

    void size_dialog_isable();

    void set_colrow_slot(int col ,int row);

    void on_actionsetitem_triggered();

    void set_item_bysigal(int col_current,int row_current,QString &text_temp);

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::Insert_window *ui;
    QStandardItemModel *m_model;
    QItemSelectionModel *Select_model;
signals:
    void set_spinbox_sigal(const QModelIndex &index);
};
#endif // INSERT_WINDOW_H

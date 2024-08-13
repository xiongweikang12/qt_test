#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
class QModelIndex;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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
    Ui::MainWindow *ui;
    QStandardItemModel *m_model;
    QItemSelectionModel *Select_model;
signals:
    void set_spinbox_sigal(const QModelIndex &index);
};
#endif // MAINWINDOW_H

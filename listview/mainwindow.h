#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QStringListModel;
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
    void on_pushButton_undolist_clicked();

    void on_pushButton_clearlist_clicked();

    void on_checkBox_editable_clicked(bool checked);

    void on_pushButton_clearplainedit_clicked();

    void on_pushButton_additem_clicked();

    void on_pushButton_insertitem_clicked();

    void on_pushButton_delectitem_clicked();

    void on_pushButton_upmove_clicked();

    void on_pushButton_downmove_clicked();

    void on_pushButton_sort_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    QStringList str_list;
    QStringListModel *m_model;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QListWidgetItem;
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
    void on_checkBox_clicked(bool checked);

    void on_toolButton_cleartext_clicked();

    void on_toolButton_addline_clicked();

    void on_act_listinit_triggered();

    void on_checkBox_enabledit_clicked(bool checked);

    void on_actlist_clear_triggered();

    void on_actlist_insert_triggered();

    void on_actlist_add_triggered();

    void on_actlist_delete_triggered();


    void on_actionsec_singal_triggered();

    void on_actionsecl_all_triggered();

    void on_actionsecl_None_triggered();

    void on_actionclear_plaintext_triggered();

    void on_actionappend_plaintext_triggered();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_toolButton_upsort_clicked();

    void on_toolButton_downsort_clicked();

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

    void on_actionclear_linedit_triggered();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

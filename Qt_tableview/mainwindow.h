#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QStandardItemModel;
class QItemSelectionModel;
class TfloatspinDelegate;
class Tspinbox_delegate;
class Tcomobo_delegate;
class QTimer;

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
    void on_actional_center_triggered();
    void on_actionfont_bold_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void on_actionopen_file_triggered();

    void on_actiondata_show_triggered();

    void on_actionappenditem_triggered();

    void on_actiondelect_item_triggered();

    void on_tableView_pressed(const QModelIndex &index);

    void do_timeout();

private:
    QStandardItemModel *standar_item_model;
    QItemSelectionModel *select_item_model;
    //
    TfloatspinDelegate * float_delegate;
    Tspinbox_delegate  * spin_delegate;
    Tcomobo_delegate  *combo_delegate;

private:
    Ui::MainWindow *ui;
    QTimer *test;
    void initModelData(QStringList&);
};


#endif // MAINWINDOW_H

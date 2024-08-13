#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_actioninsert_widget_triggered();
    void get_sinal_settab(const QString &name);
    void on_tabWidget_tabCloseRequested(int index);

    void on_actionsingal_widget_triggered();

    void on_actioninsert_mainwindow_triggered();

    void on_actionsingal_Mainwindow_triggered();

private:
    Ui::MainWindow *ui;
signals:

};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Insert_window;
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

private:
    Ui::Insert_window *ui;
signals:

};
#endif // MAINWINDOW_H

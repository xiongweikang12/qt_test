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
    void on_actionnewfile_triggered();

    void on_actionopenfile_triggered();

    void on_actioncloseall_triggered();

    void on_actioncut_triggered();

    void on_actioncopy_triggered();

    void on_actionpaste_triggered();

    void on_actionsetfont_triggered();

    void on_actionMDI_mode_triggered(bool checked);

    void on_actioncasca_triggered();

    void on_actiontile_triggered();

    void dosometing_empty();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

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
    void on_actionopen_triggered();

    void on_actionsave_triggered();

    void on_actionsaveFile_triggered();

    void on_actiontextStream_triggered();

    void on_actiontextStream_save_triggered();

private:
    Ui::MainWindow *ui;
    QString getfile(bool save=false);
};
#endif // MAINWINDOW_H

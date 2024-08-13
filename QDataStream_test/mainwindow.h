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
    void on_pushButton_testfile_clicked();

private:
    Ui::MainWindow *ui;
private:
    QString m_filename;
    template<class T> void writeByStream(T value);
    template<class T> void readByStream(T &value);
};
#endif // MAINWINDOW_H

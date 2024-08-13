#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QSpinBox;
class   QProgressBar;
class QLabel;

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
    void on_actformat_bold_triggered();

    void on_actedit_cancel_triggered();

    void on_actFile_New_triggered();

    void on_actFile_save_triggered();

    void do_spinbox_change(int fontsize);

private:
    Ui::MainWindow *ui;
    QSpinBox *spin_font_size;
    QProgressBar *progressBar_show;
    QLabel *label_;
    QString *plainedit_keep;
};
#endif // MAINWINDOW_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_openfile_clicked();

    void on_pushButton_openfiles_clicked();

    void on_pushButton_choosedir_clicked();

    void on_pushButton_savefile_clicked();

    void on_pushButton_choosecolor_clicked();

    void on_pushButton_choosefont_clicked();

    void on_pushButton_process_clicked();

    void on_pushButton_inputString_clicked();

    void on_pushButton_clearcontent_clicked();

    void on_pushButton_inputInt_clicked();

    void on_pushButton_question_clicked();

    void on_pushButton_chooseItems_clicked();

    void on_pushButton_warning_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

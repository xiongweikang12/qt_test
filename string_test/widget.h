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
    void on_Pushbutton_frontback_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_leftright_clicked();

    void on_pushButton_fristlast_clicked();

    void on_pushButton_section_clicked();

    void on_pushButton_Nullempty_clicked();

    void on_pushButton_resize_clicked();

    void on_pushButton_size_clicked();

    void on_pushButton_fill_clicked();

    void on_pushButton_trimmed_clicked();

    void on_pushButton_index_clicked();

    void on_pushButton_contains_clicked();

    void on_pushButton_endstrtswith_clicked();

    void on_pushButton_count_clicked();

    void on_pushButton_remove_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

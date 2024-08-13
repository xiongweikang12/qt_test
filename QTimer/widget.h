#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QTimer;
class QElapsedTimer;

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
private:
    QTimer *m_timer;
    QElapsedTimer *m_counter;
private slots:
    void do_timer_timerout();
    void on_pushButton_start_clicked();

    void on_pushButton_stop_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

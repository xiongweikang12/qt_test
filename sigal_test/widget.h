#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mlabel_test.h"

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
    Ui::Widget *ui;

    // QWidget interface
protected:
    virtual void mouseDoubleClickEvent(QMouseEvent *event) override;
private slots:
    void on_Widget_windowTitleChanged(const QString &title);

    // QObject interface
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;
};



#endif // WIDGET_H

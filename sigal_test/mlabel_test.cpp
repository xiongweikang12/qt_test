#include "mlabel_test.h"

MLabel_test::MLabel_test(QWidget *parent):QLabel(parent)
{

}

void MLabel_test::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    emit doubleclick();
}

void MLabel_test::do_someevent()
{
    this->setText("label的信号,label的槽函数");
}

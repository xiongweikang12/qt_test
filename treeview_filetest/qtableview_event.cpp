#include "qtableview_event.h"

QTableview_event::QTableview_event(QWidget *parent):QTableView(parent) {

    setAttribute(Qt::WA_Hover,true);
}

bool QTableview_event::event(QEvent *event)
{
    if(event->type()==QEvent::HoverEnter)
    {
        this->setGridStyle(Qt::DotLine);
    }
    if(event->type()==QEvent::HoverLeave)
    {
        this->setGridStyle(Qt::SolidLine);
    }
    return true;
}

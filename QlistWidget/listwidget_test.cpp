#include "listwidget_test.h"
#include <QDragEnterEvent>
#include <QMimeData>

ListWidget_test::ListWidget_test(QWidget *parent):QListWidget(parent) {

}

void ListWidget_test::dragEnterEvent(QDragEnterEvent *event)
{
    qDebug()<<"drag_listWidget";
    event->acceptProposedAction();
}

void ListWidget_test::dropEvent(QDropEvent *event)
{
    qDebug()<<"drop_plainedit";
    event->accept();
}

#ifndef QTABLEVIEW_EVENT_H
#define QTABLEVIEW_EVENT_H

#include <QObject>
#include <QTableView>
#include<QEvent>

class QTableview_event : public QTableView
{
    Q_OBJECT
public:
    QTableview_event(QWidget *parent=nullptr);

    // QObject interface
public:
    virtual bool event(QEvent *event) override;
};



#endif // QTABLEVIEW_EVENT_H

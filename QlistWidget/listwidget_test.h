#ifndef LISTWIDGET_TEST_H
#define LISTWIDGET_TEST_H

#include <QListWidget>
#include <QObject>

class ListWidget_test : public QListWidget
{
    Q_OBJECT
public:
    ListWidget_test(QWidget *parent=nullptr);

    // QWidget interface
protected:
    virtual void dragEnterEvent(QDragEnterEvent *event) override;
    virtual void dropEvent(QDropEvent *event) override;
};



#endif // LISTWIDGET_TEST_H

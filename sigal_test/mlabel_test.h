#ifndef MLABEL_TEST_H
#define MLABEL_TEST_H

#include <QLabel>
#include <QObject>

class MLabel_test : public QLabel
{
    Q_OBJECT
public:
    MLabel_test(QWidget *parent=nullptr);

    // QWidget interface
protected:
    virtual void mouseDoubleClickEvent(QMouseEvent *event) override;
signals:
    void doubleclick();
public slots:
    void do_someevent();
};



#endif // MLABEL_TEST_H

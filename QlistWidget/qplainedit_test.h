#ifndef QPLAINEDIT_TEST_H
#define QPLAINEDIT_TEST_H

#include <QObject>
#include <QPlainTextEdit>

class QPlainedit_test : public QPlainTextEdit
{
    Q_OBJECT
public:
    QPlainedit_test(QWidget *parent=nullptr);
    // QWidget interface
protected:
    virtual void dropEvent(QDropEvent *event) override;
};



#endif // QPLAINEDIT_TEST_H

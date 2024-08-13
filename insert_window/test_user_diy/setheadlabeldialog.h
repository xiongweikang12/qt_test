#ifndef SETHEADLABELDIALOG_H
#define SETHEADLABELDIALOG_H
#include<QStringListModel>

#include <QDialog>

namespace Ui {
class setHeadlabelDialog;
}

class setHeadlabelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit setHeadlabelDialog(QWidget *parent = nullptr);
    ~setHeadlabelDialog();

private:
    Ui::setHeadlabelDialog *ui;
    QStringListModel *sethead_Listview_mode;
public:
    void init_Head(QStringList &head);
    QStringList return_StringList();
};

#endif // SETHEADLABELDIALOG_H

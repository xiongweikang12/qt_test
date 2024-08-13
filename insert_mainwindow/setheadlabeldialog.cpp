#include "setheadlabeldialog.h"
#include "ui_setheadlabeldialog.h"
#include <QStringListModel>

setHeadlabelDialog::setHeadlabelDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::setHeadlabelDialog)
{
    ui->setupUi(this);
    sethead_Listview_mode=new QStringListModel();
    ui->listView_setheadlist->setModel(sethead_Listview_mode);
}

setHeadlabelDialog::~setHeadlabelDialog()
{
    delete ui;
}

void setHeadlabelDialog::init_Head(QStringList &head)
{
    sethead_Listview_mode->setStringList(head);
}

QStringList setHeadlabelDialog::return_StringList()
{
    return sethead_Listview_mode->stringList();
}


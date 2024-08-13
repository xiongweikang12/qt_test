/********************************************************************************
** Form generated from reading UI file 'insert_window.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_WINDOW_H
#define UI_INSERT_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Insert_window
{
public:
    QAction *actionsetsize;
    QAction *actionsetheader;
    QAction *actionsetitem;
    QAction *actionquit;
    QWidget *centralwidget;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Insert_window)
    {
        if (Insert_window->objectName().isEmpty())
            Insert_window->setObjectName(QString::fromUtf8("Insert_window"));
        Insert_window->resize(582, 499);
        actionsetsize = new QAction(Insert_window);
        actionsetsize->setObjectName(QString::fromUtf8("actionsetsize"));
        actionsetsize->setMenuRole(QAction::NoRole);
        actionsetheader = new QAction(Insert_window);
        actionsetheader->setObjectName(QString::fromUtf8("actionsetheader"));
        actionsetheader->setMenuRole(QAction::NoRole);
        actionsetitem = new QAction(Insert_window);
        actionsetitem->setObjectName(QString::fromUtf8("actionsetitem"));
        actionsetitem->setMenuRole(QAction::NoRole);
        actionquit = new QAction(Insert_window);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        actionquit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(Insert_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 561, 431));
        Insert_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Insert_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Insert_window->setStatusBar(statusbar);
        toolBar = new QToolBar(Insert_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Insert_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionsetsize);
        toolBar->addAction(actionsetheader);
        toolBar->addAction(actionsetitem);
        toolBar->addAction(actionquit);

        retranslateUi(Insert_window);
        QObject::connect(actionquit, &QAction::triggered, Insert_window, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Insert_window);
    } // setupUi

    void retranslateUi(QMainWindow *Insert_window)
    {
        Insert_window->setWindowTitle(QCoreApplication::translate("Insert_window", "MainWindow", nullptr));
        actionsetsize->setText(QCoreApplication::translate("Insert_window", "setsize", nullptr));
        actionsetheader->setText(QCoreApplication::translate("Insert_window", "setheader", nullptr));
        actionsetitem->setText(QCoreApplication::translate("Insert_window", "setitem", nullptr));
        actionquit->setText(QCoreApplication::translate("Insert_window", "quit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Insert_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Insert_window: public Ui_Insert_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_WINDOW_H

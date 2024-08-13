/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(582, 499);
        actionsetsize = new QAction(MainWindow);
        actionsetsize->setObjectName(QString::fromUtf8("actionsetsize"));
        actionsetsize->setMenuRole(QAction::NoRole);
        actionsetheader = new QAction(MainWindow);
        actionsetheader->setObjectName(QString::fromUtf8("actionsetheader"));
        actionsetheader->setMenuRole(QAction::NoRole);
        actionsetitem = new QAction(MainWindow);
        actionsetitem->setObjectName(QString::fromUtf8("actionsetitem"));
        actionsetitem->setMenuRole(QAction::NoRole);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        actionquit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 561, 431));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionsetsize);
        toolBar->addAction(actionsetheader);
        toolBar->addAction(actionsetitem);
        toolBar->addAction(actionquit);

        retranslateUi(MainWindow);
        QObject::connect(actionquit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionsetsize->setText(QCoreApplication::translate("MainWindow", "setsize", nullptr));
        actionsetheader->setText(QCoreApplication::translate("MainWindow", "setheader", nullptr));
        actionsetitem->setText(QCoreApplication::translate("MainWindow", "setitem", nullptr));
        actionquit->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

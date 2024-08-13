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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actioninsert_widget;
    QAction *actionsingal_widget;
    QAction *actioninsert_mainwindow;
    QAction *actionsingal_Mainwindow;
    QAction *actionquit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(554, 418);
        actioninsert_widget = new QAction(MainWindow);
        actioninsert_widget->setObjectName(QString::fromUtf8("actioninsert_widget"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image1/back-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioninsert_widget->setIcon(icon);
        actioninsert_widget->setMenuRole(QAction::NoRole);
        actionsingal_widget = new QAction(MainWindow);
        actionsingal_widget->setObjectName(QString::fromUtf8("actionsingal_widget"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/image1/enter-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsingal_widget->setIcon(icon1);
        actionsingal_widget->setMenuRole(QAction::NoRole);
        actioninsert_mainwindow = new QAction(MainWindow);
        actioninsert_mainwindow->setObjectName(QString::fromUtf8("actioninsert_mainwindow"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/image1/up-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioninsert_mainwindow->setIcon(icon2);
        actioninsert_mainwindow->setMenuRole(QAction::NoRole);
        actionsingal_Mainwindow = new QAction(MainWindow);
        actionsingal_Mainwindow->setObjectName(QString::fromUtf8("actionsingal_Mainwindow"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/image1/down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsingal_Mainwindow->setIcon(icon3);
        actionsingal_Mainwindow->setMenuRole(QAction::NoRole);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/image1/expand-line-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionquit->setIcon(icon4);
        actionquit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 531, 331));
        tabWidget->setTabsClosable(true);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actioninsert_widget);
        toolBar->addAction(actionsingal_widget);
        toolBar->addAction(actioninsert_mainwindow);
        toolBar->addAction(actionsingal_Mainwindow);
        toolBar->addAction(actionquit);

        retranslateUi(MainWindow);
        QObject::connect(actionquit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actioninsert_widget->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Wiget", nullptr));
        actionsingal_widget->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Widget", nullptr));
        actioninsert_mainwindow->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Mainwindow", nullptr));
        actionsingal_Mainwindow->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow", nullptr));
        actionquit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

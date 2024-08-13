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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionexit;
    QAction *actional_center;
    QAction *actionfont_bold;
    QAction *actionopen_file;
    QAction *actiondata_show;
    QAction *actionappenditem;
    QAction *actiondelect_item;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actionexit->setMenuRole(QAction::NoRole);
        actional_center = new QAction(MainWindow);
        actional_center->setObjectName(QString::fromUtf8("actional_center"));
        actional_center->setMenuRole(QAction::NoRole);
        actionfont_bold = new QAction(MainWindow);
        actionfont_bold->setObjectName(QString::fromUtf8("actionfont_bold"));
        actionfont_bold->setMenuRole(QAction::NoRole);
        actionopen_file = new QAction(MainWindow);
        actionopen_file->setObjectName(QString::fromUtf8("actionopen_file"));
        actionopen_file->setMenuRole(QAction::NoRole);
        actiondata_show = new QAction(MainWindow);
        actiondata_show->setObjectName(QString::fromUtf8("actiondata_show"));
        actiondata_show->setMenuRole(QAction::NoRole);
        actionappenditem = new QAction(MainWindow);
        actionappenditem->setObjectName(QString::fromUtf8("actionappenditem"));
        actionappenditem->setMenuRole(QAction::NoRole);
        actiondelect_item = new QAction(MainWindow);
        actiondelect_item->setObjectName(QString::fromUtf8("actiondelect_item"));
        actiondelect_item->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 381, 551));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 371, 521));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 10, 381, 551));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 361, 521));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actiondata_show);
        menu->addAction(actionopen_file);
        menu->addAction(actionexit);
        menu->addAction(actional_center);
        menu->addAction(actionfont_bold);
        menu->addAction(actionappenditem);
        menu->addAction(actiondelect_item);

        retranslateUi(MainWindow);
        QObject::connect(actionexit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        actional_center->setText(QCoreApplication::translate("MainWindow", "al_center", nullptr));
        actionfont_bold->setText(QCoreApplication::translate("MainWindow", "font_bold", nullptr));
        actionopen_file->setText(QCoreApplication::translate("MainWindow", "open_file", nullptr));
        actiondata_show->setText(QCoreApplication::translate("MainWindow", "data_show", nullptr));
        actionappenditem->setText(QCoreApplication::translate("MainWindow", "appenditem", nullptr));
        actiondelect_item->setText(QCoreApplication::translate("MainWindow", "delect_item", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Tableview", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PlainTextedit", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

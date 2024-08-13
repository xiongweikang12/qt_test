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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionsave;
    QAction *actionsaveFile;
    QAction *actiontextStream;
    QAction *actiontextStream_save;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPlainTextEdit *plainTextEdit_File;
    QWidget *tab_2;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(594, 403);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionopen->setMenuRole(QAction::NoRole);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionsave->setMenuRole(QAction::NoRole);
        actionsaveFile = new QAction(MainWindow);
        actionsaveFile->setObjectName(QString::fromUtf8("actionsaveFile"));
        actionsaveFile->setMenuRole(QAction::NoRole);
        actiontextStream = new QAction(MainWindow);
        actiontextStream->setObjectName(QString::fromUtf8("actiontextStream"));
        actiontextStream->setMenuRole(QAction::NoRole);
        actiontextStream_save = new QAction(MainWindow);
        actiontextStream_save->setObjectName(QString::fromUtf8("actiontextStream_save"));
        actiontextStream_save->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 591, 351));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        plainTextEdit_File = new QPlainTextEdit(tab);
        plainTextEdit_File->setObjectName(QString::fromUtf8("plainTextEdit_File"));
        plainTextEdit_File->setGeometry(QRect(10, 0, 561, 311));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 571, 301));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionopen);
        toolBar->addAction(actionsave);
        toolBar->addAction(actionsaveFile);
        toolBar->addAction(actiontextStream);
        toolBar->addAction(actiontextStream_save);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "OFile\346\211\223\345\274\200", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "QFile\345\217\246\345\255\230", nullptr));
        actionsaveFile->setText(QCoreApplication::translate("MainWindow", "QSaveFile\345\217\246\345\255\230", nullptr));
        actiontextStream->setText(QCoreApplication::translate("MainWindow", "QTextStream\346\211\223\345\274\200", nullptr));
        actiontextStream_save->setText(QCoreApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\223\215\344\275\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "QTextStream\346\223\215\344\275\234", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

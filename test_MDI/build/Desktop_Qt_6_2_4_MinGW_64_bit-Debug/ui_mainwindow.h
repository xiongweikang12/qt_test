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
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnewfile;
    QAction *actionopenfile;
    QAction *actioncloseall;
    QAction *actioncut;
    QAction *actioncopy;
    QAction *actionpaste;
    QAction *actionsetfont;
    QAction *actionMDI_mode;
    QAction *actioncasca;
    QAction *actiontile;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(707, 406);
        actionnewfile = new QAction(MainWindow);
        actionnewfile->setObjectName(QString::fromUtf8("actionnewfile"));
        actionnewfile->setMenuRole(QAction::NoRole);
        actionopenfile = new QAction(MainWindow);
        actionopenfile->setObjectName(QString::fromUtf8("actionopenfile"));
        actionopenfile->setMenuRole(QAction::NoRole);
        actioncloseall = new QAction(MainWindow);
        actioncloseall->setObjectName(QString::fromUtf8("actioncloseall"));
        actioncloseall->setMenuRole(QAction::NoRole);
        actioncut = new QAction(MainWindow);
        actioncut->setObjectName(QString::fromUtf8("actioncut"));
        actioncut->setMenuRole(QAction::NoRole);
        actioncopy = new QAction(MainWindow);
        actioncopy->setObjectName(QString::fromUtf8("actioncopy"));
        actioncopy->setMenuRole(QAction::NoRole);
        actionpaste = new QAction(MainWindow);
        actionpaste->setObjectName(QString::fromUtf8("actionpaste"));
        actionpaste->setMenuRole(QAction::NoRole);
        actionsetfont = new QAction(MainWindow);
        actionsetfont->setObjectName(QString::fromUtf8("actionsetfont"));
        actionsetfont->setMenuRole(QAction::NoRole);
        actionMDI_mode = new QAction(MainWindow);
        actionMDI_mode->setObjectName(QString::fromUtf8("actionMDI_mode"));
        actionMDI_mode->setCheckable(true);
        actionMDI_mode->setMenuRole(QAction::NoRole);
        actioncasca = new QAction(MainWindow);
        actioncasca->setObjectName(QString::fromUtf8("actioncasca"));
        actioncasca->setMenuRole(QAction::NoRole);
        actiontile = new QAction(MainWindow);
        actiontile->setObjectName(QString::fromUtf8("actiontile"));
        actiontile->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(40, 20, 581, 321));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionnewfile);
        toolBar->addSeparator();
        toolBar->addAction(actionopenfile);
        toolBar->addSeparator();
        toolBar->addAction(actioncloseall);
        toolBar->addSeparator();
        toolBar->addAction(actioncut);
        toolBar->addAction(actioncopy);
        toolBar->addAction(actionpaste);
        toolBar->addAction(actionsetfont);
        toolBar->addSeparator();
        toolBar->addAction(actionMDI_mode);
        toolBar->addAction(actioncasca);
        toolBar->addAction(actiontile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnewfile->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
        actionopenfile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actioncloseall->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
        actioncut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
        actioncopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
        actionpaste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
        actionsetfont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
        actionMDI_mode->setText(QCoreApplication::translate("MainWindow", "MDI\346\250\241\345\274\217", nullptr));
        actioncasca->setText(QCoreApplication::translate("MainWindow", "\345\261\202\347\272\247\345\261\225\345\274\200", nullptr));
        actiontile->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

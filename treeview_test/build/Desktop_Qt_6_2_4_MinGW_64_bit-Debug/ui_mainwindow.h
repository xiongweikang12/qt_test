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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionaddFolder;
    QAction *actionaddFile;
    QAction *actionquit;
    QAction *actiondelectall;
    QAction *actionforecch;
    QAction *actionzoomfixW;
    QAction *actionzoomfixH;
    QAction *actionZoomIn;
    QAction *actionzoomout;
    QAction *actionDockvisable;
    QAction *actionDockfloat;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(851, 473);
        actionaddFolder = new QAction(MainWindow);
        actionaddFolder->setObjectName(QString::fromUtf8("actionaddFolder"));
        actionaddFolder->setMenuRole(QAction::NoRole);
        actionaddFile = new QAction(MainWindow);
        actionaddFile->setObjectName(QString::fromUtf8("actionaddFile"));
        actionaddFile->setMenuRole(QAction::NoRole);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        actionquit->setMenuRole(QAction::NoRole);
        actiondelectall = new QAction(MainWindow);
        actiondelectall->setObjectName(QString::fromUtf8("actiondelectall"));
        actiondelectall->setMenuRole(QAction::NoRole);
        actionforecch = new QAction(MainWindow);
        actionforecch->setObjectName(QString::fromUtf8("actionforecch"));
        actionforecch->setMenuRole(QAction::NoRole);
        actionzoomfixW = new QAction(MainWindow);
        actionzoomfixW->setObjectName(QString::fromUtf8("actionzoomfixW"));
        actionzoomfixW->setMenuRole(QAction::NoRole);
        actionzoomfixH = new QAction(MainWindow);
        actionzoomfixH->setObjectName(QString::fromUtf8("actionzoomfixH"));
        actionzoomfixH->setMenuRole(QAction::NoRole);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomIn->setMenuRole(QAction::NoRole);
        actionzoomout = new QAction(MainWindow);
        actionzoomout->setObjectName(QString::fromUtf8("actionzoomout"));
        actionzoomout->setMenuRole(QAction::NoRole);
        actionDockvisable = new QAction(MainWindow);
        actionDockvisable->setObjectName(QString::fromUtf8("actionDockvisable"));
        actionDockvisable->setCheckable(true);
        actionDockvisable->setMenuRole(QAction::NoRole);
        actionDockfloat = new QAction(MainWindow);
        actionDockfloat->setObjectName(QString::fromUtf8("actionDockfloat"));
        actionDockfloat->setCheckable(true);
        actionDockfloat->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 731, 371));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 729, 369));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 851, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 271, 351));
        QFont font;
        font.setPointSize(7);
        treeWidget->setFont(font);
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionaddFolder);
        menu->addAction(actionaddFile);
        menu->addAction(actionquit);
        menu->addAction(actiondelectall);
        menu->addAction(actionforecch);
        toolBar->addAction(actionaddFolder);
        toolBar->addAction(actionaddFile);
        toolBar->addAction(actiondelectall);
        toolBar->addAction(actionforecch);
        toolBar->addSeparator();
        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionzoomfixW);
        toolBar->addAction(actionzoomfixH);
        toolBar->addAction(actionzoomout);
        toolBar->addAction(actionDockvisable);
        toolBar->addAction(actionDockfloat);

        retranslateUi(MainWindow);
        QObject::connect(actionquit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionaddFolder->setText(QCoreApplication::translate("MainWindow", "addFolder", nullptr));
        actionaddFile->setText(QCoreApplication::translate("MainWindow", "addFile", nullptr));
        actionquit->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
        actiondelectall->setText(QCoreApplication::translate("MainWindow", "delectall", nullptr));
        actionforecch->setText(QCoreApplication::translate("MainWindow", "forecch", nullptr));
        actionzoomfixW->setText(QCoreApplication::translate("MainWindow", "zoomfixW", nullptr));
        actionzoomfixH->setText(QCoreApplication::translate("MainWindow", "zoomfixH", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "ZoomIn", nullptr));
        actionzoomout->setText(QCoreApplication::translate("MainWindow", "zoomout", nullptr));
        actionDockvisable->setText(QCoreApplication::translate("MainWindow", "Dockvisable", nullptr));
        actionDockfloat->setText(QCoreApplication::translate("MainWindow", "Dockfloat", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\233\256\345\275\225\346\240\221", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\346\226\207\344\273\266", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("MainWindow", "png", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "file1", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'select_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_MAINWINDOW_H
#define UI_SELECT_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Select_MainWindow
{
public:
    QAction *actionopensql;
    QAction *actionfirstrecord;
    QAction *actionbefore_record;
    QAction *actionnext_record;
    QAction *actionlast_record;
    QAction *actionquit;
    QAction *actionopenratesql;
    QWidget *centralwidget;
    QTableView *Select_tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMdiArea *mdiArea;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QFrame *line_2;
    QPlainTextEdit *plainTextEdit_rate;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Select_MainWindow)
    {
        if (Select_MainWindow->objectName().isEmpty())
            Select_MainWindow->setObjectName(QString::fromUtf8("Select_MainWindow"));
        Select_MainWindow->resize(793, 699);
        actionopensql = new QAction(Select_MainWindow);
        actionopensql->setObjectName(QString::fromUtf8("actionopensql"));
        actionopensql->setMenuRole(QAction::NoRole);
        actionfirstrecord = new QAction(Select_MainWindow);
        actionfirstrecord->setObjectName(QString::fromUtf8("actionfirstrecord"));
        actionfirstrecord->setMenuRole(QAction::NoRole);
        actionbefore_record = new QAction(Select_MainWindow);
        actionbefore_record->setObjectName(QString::fromUtf8("actionbefore_record"));
        actionbefore_record->setMenuRole(QAction::NoRole);
        actionnext_record = new QAction(Select_MainWindow);
        actionnext_record->setObjectName(QString::fromUtf8("actionnext_record"));
        actionnext_record->setMenuRole(QAction::NoRole);
        actionlast_record = new QAction(Select_MainWindow);
        actionlast_record->setObjectName(QString::fromUtf8("actionlast_record"));
        actionlast_record->setMenuRole(QAction::NoRole);
        actionquit = new QAction(Select_MainWindow);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        actionquit->setMenuRole(QAction::NoRole);
        actionopenratesql = new QAction(Select_MainWindow);
        actionopenratesql->setObjectName(QString::fromUtf8("actionopenratesql"));
        actionopenratesql->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(Select_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Select_tableView = new QTableView(centralwidget);
        Select_tableView->setObjectName(QString::fromUtf8("Select_tableView"));
        Select_tableView->setGeometry(QRect(10, 10, 381, 221));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 250, 771, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 280, 391, 351));
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(400, 10, 371, 221));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(410, 280, 371, 351));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout_2->addWidget(plainTextEdit);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        plainTextEdit_rate = new QPlainTextEdit(widget);
        plainTextEdit_rate->setObjectName(QString::fromUtf8("plainTextEdit_rate"));

        horizontalLayout_2->addWidget(plainTextEdit_rate);

        Select_MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Select_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Select_MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(Select_MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Select_MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionopensql);
        toolBar->addAction(actionfirstrecord);
        toolBar->addAction(actionbefore_record);
        toolBar->addAction(actionnext_record);
        toolBar->addAction(actionlast_record);
        toolBar->addAction(actionquit);
        toolBar->addSeparator();
        toolBar->addAction(actionopenratesql);

        retranslateUi(Select_MainWindow);
        QObject::connect(actionquit, &QAction::triggered, Select_MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Select_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Select_MainWindow)
    {
        Select_MainWindow->setWindowTitle(QCoreApplication::translate("Select_MainWindow", "MainWindow", nullptr));
        actionopensql->setText(QCoreApplication::translate("Select_MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
        actionfirstrecord->setText(QCoreApplication::translate("Select_MainWindow", "\351\246\226\350\256\260\345\275\225", nullptr));
        actionbefore_record->setText(QCoreApplication::translate("Select_MainWindow", "\345\211\215\344\270\200\350\256\260\345\275\225", nullptr));
        actionnext_record->setText(QCoreApplication::translate("Select_MainWindow", "\345\220\216\344\270\200\350\256\260\345\275\225", nullptr));
        actionlast_record->setText(QCoreApplication::translate("Select_MainWindow", "\345\260\276\350\256\260\345\275\225", nullptr));
        actionquit->setText(QCoreApplication::translate("Select_MainWindow", "\351\200\200\345\207\272", nullptr));
        actionopenratesql->setText(QCoreApplication::translate("Select_MainWindow", "\346\211\223\345\274\200\345\205\263\350\201\224\346\225\260\346\215\256\345\272\223", nullptr));
        label->setText(QCoreApplication::translate("Select_MainWindow", "record", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Select_MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Select_MainWindow", "Tab 2", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Select_MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Select_MainWindow: public Ui_Select_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_MAINWINDOW_H

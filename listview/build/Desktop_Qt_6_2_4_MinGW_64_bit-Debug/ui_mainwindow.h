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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton_undolist;
    QPushButton *pushButton_clearlist;
    QCheckBox *checkBox_editable;
    QPushButton *pushButton_additem;
    QPushButton *pushButton_insertitem;
    QPushButton *pushButton_delectitem;
    QPushButton *pushButton_upmove;
    QPushButton *pushButton_downmove;
    QPushButton *pushButton_sort;
    QListView *listView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_clearplainedit;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(824, 553);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 322, 141));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_undolist = new QPushButton(groupBox);
        pushButton_undolist->setObjectName(QString::fromUtf8("pushButton_undolist"));

        gridLayout->addWidget(pushButton_undolist, 0, 0, 1, 1);

        pushButton_clearlist = new QPushButton(groupBox);
        pushButton_clearlist->setObjectName(QString::fromUtf8("pushButton_clearlist"));

        gridLayout->addWidget(pushButton_clearlist, 0, 1, 1, 1);

        checkBox_editable = new QCheckBox(groupBox);
        checkBox_editable->setObjectName(QString::fromUtf8("checkBox_editable"));

        gridLayout->addWidget(checkBox_editable, 0, 2, 1, 1);

        pushButton_additem = new QPushButton(groupBox);
        pushButton_additem->setObjectName(QString::fromUtf8("pushButton_additem"));

        gridLayout->addWidget(pushButton_additem, 1, 0, 1, 1);

        pushButton_insertitem = new QPushButton(groupBox);
        pushButton_insertitem->setObjectName(QString::fromUtf8("pushButton_insertitem"));

        gridLayout->addWidget(pushButton_insertitem, 1, 1, 1, 1);

        pushButton_delectitem = new QPushButton(groupBox);
        pushButton_delectitem->setObjectName(QString::fromUtf8("pushButton_delectitem"));

        gridLayout->addWidget(pushButton_delectitem, 1, 2, 1, 1);

        pushButton_upmove = new QPushButton(groupBox);
        pushButton_upmove->setObjectName(QString::fromUtf8("pushButton_upmove"));

        gridLayout->addWidget(pushButton_upmove, 2, 0, 1, 1);

        pushButton_downmove = new QPushButton(groupBox);
        pushButton_downmove->setObjectName(QString::fromUtf8("pushButton_downmove"));

        gridLayout->addWidget(pushButton_downmove, 2, 1, 1, 1);

        pushButton_sort = new QPushButton(groupBox);
        pushButton_sort->setObjectName(QString::fromUtf8("pushButton_sort"));

        gridLayout->addWidget(pushButton_sort, 2, 2, 1, 1);

        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(20, 170, 311, 311));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(350, 10, 431, 481));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_clearplainedit = new QPushButton(groupBox_2);
        pushButton_clearplainedit->setObjectName(QString::fromUtf8("pushButton_clearplainedit"));

        verticalLayout->addWidget(pushButton_clearplainedit);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 824, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Listview", nullptr));
        pushButton_undolist->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215\345\210\227\350\241\250", nullptr));
        pushButton_clearlist->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        checkBox_editable->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\347\274\226\350\276\221", nullptr));
        pushButton_additem->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        pushButton_insertitem->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        pushButton_delectitem->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
        pushButton_upmove->setText(QCoreApplication::translate("MainWindow", "\344\270\212\347\247\273", nullptr));
        pushButton_downmove->setText(QCoreApplication::translate("MainWindow", "\344\270\213\347\247\273", nullptr));
        pushButton_sort->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PlainTextedit", nullptr));
        pushButton_clearplainedit->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

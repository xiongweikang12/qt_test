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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include <qtableview_event.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionset_rootdir;
    QAction *actionquit;
    QAction *actionsetRoot;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTreeView *treeView;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_displayfiledir;
    QRadioButton *radioButton_displaydironly;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_filefilter;
    QComboBox *comboBox_file;
    QPushButton *pushButton_apply;
    QGroupBox *groupBox_2;
    QListView *listView;
    QGroupBox *groupBox_3;
    QTableview_event *tableView;
    QWidget *widget_info;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_filename;
    QLabel *label_nodetype;
    QLabel *label_filesize;
    QCheckBox *checkBox_nodeisdir;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(784, 605);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image1/heart-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionset_rootdir = new QAction(MainWindow);
        actionset_rootdir->setObjectName(QString::fromUtf8("actionset_rootdir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/image1/copy-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionset_rootdir->setIcon(icon1);
        actionset_rootdir->setMenuRole(QAction::NoRole);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/image1/down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionquit->setIcon(icon2);
        actionquit->setMenuRole(QAction::NoRole);
        actionsetRoot = new QAction(MainWindow);
        actionsetRoot->setObjectName(QString::fromUtf8("actionsetRoot"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/image1/notice-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsetRoot->setIcon(icon3);
        actionsetRoot->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 321, 441));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(10, 110, 301, 321));
        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 20, 301, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 290, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_displayfiledir = new QRadioButton(layoutWidget);
        radioButton_displayfiledir->setObjectName(QString::fromUtf8("radioButton_displayfiledir"));

        horizontalLayout->addWidget(radioButton_displayfiledir);

        radioButton_displaydironly = new QRadioButton(layoutWidget);
        radioButton_displaydironly->setObjectName(QString::fromUtf8("radioButton_displaydironly"));

        horizontalLayout->addWidget(radioButton_displaydironly);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 291, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_filefilter = new QCheckBox(layoutWidget1);
        checkBox_filefilter->setObjectName(QString::fromUtf8("checkBox_filefilter"));

        horizontalLayout_2->addWidget(checkBox_filefilter);

        comboBox_file = new QComboBox(layoutWidget1);
        comboBox_file->addItem(QString());
        comboBox_file->addItem(QString());
        comboBox_file->setObjectName(QString::fromUtf8("comboBox_file"));

        horizontalLayout_2->addWidget(comboBox_file);

        pushButton_apply = new QPushButton(layoutWidget1);
        pushButton_apply->setObjectName(QString::fromUtf8("pushButton_apply"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/image1/expand-line-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_apply->setIcon(icon4);

        horizontalLayout_2->addWidget(pushButton_apply);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(340, 0, 431, 241));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 20, 411, 211));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(340, 230, 431, 221));
        tableView = new QTableview_event(groupBox_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 411, 192));
        widget_info = new QWidget(centralwidget);
        widget_info->setObjectName(QString::fromUtf8("widget_info"));
        widget_info->setGeometry(QRect(20, 459, 751, 31));
        layoutWidget2 = new QWidget(widget_info);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 0, 721, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_filename = new QLabel(layoutWidget2);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));

        horizontalLayout_3->addWidget(label_filename);

        label_nodetype = new QLabel(layoutWidget2);
        label_nodetype->setObjectName(QString::fromUtf8("label_nodetype"));

        horizontalLayout_3->addWidget(label_nodetype);

        label_filesize = new QLabel(layoutWidget2);
        label_filesize->setObjectName(QString::fromUtf8("label_filesize"));

        horizontalLayout_3->addWidget(label_filesize);

        checkBox_nodeisdir = new QCheckBox(layoutWidget2);
        checkBox_nodeisdir->setObjectName(QString::fromUtf8("checkBox_nodeisdir"));

        horizontalLayout_3->addWidget(checkBox_nodeisdir);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionset_rootdir);
        toolBar->addSeparator();
        toolBar->addAction(actionquit);
        toolBar->addSeparator();
        toolBar->addAction(actionsetRoot);

        retranslateUi(MainWindow);
        QObject::connect(actionquit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\347\263\273\347\273\237", nullptr));
        actionset_rootdir->setText(QCoreApplication::translate("MainWindow", "set_rootdir", nullptr));
        actionquit->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
        actionsetRoot->setText(QCoreApplication::translate("MainWindow", "setRoot", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "treeview", nullptr));
        radioButton_displayfiledir->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\233\256\345\275\225\345\222\214\346\226\207\344\273\266", nullptr));
        radioButton_displaydironly->setText(QCoreApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272\347\233\256\345\275\225", nullptr));
        checkBox_filefilter->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\350\277\207\346\273\244", nullptr));
        comboBox_file->setItemText(0, QCoreApplication::translate("MainWindow", "*.h", nullptr));
        comboBox_file->setItemText(1, QCoreApplication::translate("MainWindow", "*.cpp", nullptr));

        pushButton_apply->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "listview", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "tableview", nullptr));
        label_filename->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        label_nodetype->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213\357\274\232", nullptr));
        label_filesize->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", nullptr));
        checkBox_nodeisdir->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\345\220\246\346\230\257\347\233\256\345\275\225", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

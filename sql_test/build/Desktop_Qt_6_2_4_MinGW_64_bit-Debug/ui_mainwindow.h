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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionadd;
    QAction *actioninsert;
    QAction *actiondelete;
    QAction *actionset_image;
    QAction *actionclear_image;
    QAction *actionup_stage;
    QAction *actionsave;
    QAction *actioncancel;
    QAction *actionquit;
    QAction *actionselect_part;
    QAction *actioneditrec;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_sortitem;
    QRadioButton *radioButton_downsort;
    QRadioButton *radioButton_upsort;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_man;
    QRadioButton *radioButton_women;
    QRadioButton *radioButton_all;
    QTableView *tableView;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *spinBox_id;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox_sex;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDateEdit *dateEdit_birthdata;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *comboBox_part;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QSpinBox *spinBox_money;
    QLineEdit *lineEdit_part;
    QPlainTextEdit *plainTextEdit;
    QFrame *line;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(896, 578);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionopen->setMenuRole(QAction::NoRole);
        actionadd = new QAction(MainWindow);
        actionadd->setObjectName(QString::fromUtf8("actionadd"));
        actionadd->setMenuRole(QAction::NoRole);
        actioninsert = new QAction(MainWindow);
        actioninsert->setObjectName(QString::fromUtf8("actioninsert"));
        actioninsert->setMenuRole(QAction::NoRole);
        actiondelete = new QAction(MainWindow);
        actiondelete->setObjectName(QString::fromUtf8("actiondelete"));
        actiondelete->setMenuRole(QAction::NoRole);
        actionset_image = new QAction(MainWindow);
        actionset_image->setObjectName(QString::fromUtf8("actionset_image"));
        actionset_image->setMenuRole(QAction::NoRole);
        actionclear_image = new QAction(MainWindow);
        actionclear_image->setObjectName(QString::fromUtf8("actionclear_image"));
        actionclear_image->setMenuRole(QAction::NoRole);
        actionup_stage = new QAction(MainWindow);
        actionup_stage->setObjectName(QString::fromUtf8("actionup_stage"));
        actionup_stage->setMenuRole(QAction::NoRole);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionsave->setMenuRole(QAction::NoRole);
        actioncancel = new QAction(MainWindow);
        actioncancel->setObjectName(QString::fromUtf8("actioncancel"));
        actioncancel->setMenuRole(QAction::NoRole);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        actionquit->setMenuRole(QAction::NoRole);
        actionselect_part = new QAction(MainWindow);
        actionselect_part->setObjectName(QString::fromUtf8("actionselect_part"));
        actionselect_part->setMenuRole(QAction::NoRole);
        actioneditrec = new QAction(MainWindow);
        actioneditrec->setObjectName(QString::fromUtf8("actioneditrec"));
        actioneditrec->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(11, 11, 514, 527));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 31, 261, 71));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 284, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox_sortitem = new QComboBox(layoutWidget);
        comboBox_sortitem->setObjectName(QString::fromUtf8("comboBox_sortitem"));

        horizontalLayout->addWidget(comboBox_sortitem);

        radioButton_downsort = new QRadioButton(layoutWidget);
        radioButton_downsort->setObjectName(QString::fromUtf8("radioButton_downsort"));

        horizontalLayout->addWidget(radioButton_downsort);

        radioButton_upsort = new QRadioButton(layoutWidget);
        radioButton_upsort->setObjectName(QString::fromUtf8("radioButton_upsort"));

        horizontalLayout->addWidget(radioButton_upsort);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(280, 30, 231, 71));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 201, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_man = new QRadioButton(layoutWidget1);
        radioButton_man->setObjectName(QString::fromUtf8("radioButton_man"));

        horizontalLayout_2->addWidget(radioButton_man);

        radioButton_women = new QRadioButton(layoutWidget1);
        radioButton_women->setObjectName(QString::fromUtf8("radioButton_women"));

        horizontalLayout_2->addWidget(radioButton_women);

        radioButton_all = new QRadioButton(layoutWidget1);
        radioButton_all->setObjectName(QString::fromUtf8("radioButton_all"));

        horizontalLayout_2->addWidget(radioButton_all);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 120, 501, 391));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(540, 20, 351, 231));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        spinBox_id = new QSpinBox(groupBox_4);
        spinBox_id->setObjectName(QString::fromUtf8("spinBox_id"));
        spinBox_id->setMaximum(1000000);

        gridLayout->addWidget(spinBox_id, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(7);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        lineEdit_name = new QLineEdit(groupBox_4);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 1, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        comboBox_sex = new QComboBox(groupBox_4);
        comboBox_sex->setObjectName(QString::fromUtf8("comboBox_sex"));

        gridLayout->addWidget(comboBox_sex, 2, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        dateEdit_birthdata = new QDateEdit(groupBox_4);
        dateEdit_birthdata->setObjectName(QString::fromUtf8("dateEdit_birthdata"));

        gridLayout->addWidget(dateEdit_birthdata, 3, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);


        gridLayout->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        comboBox_part = new QComboBox(groupBox_4);
        comboBox_part->setObjectName(QString::fromUtf8("comboBox_part"));

        gridLayout->addWidget(comboBox_part, 5, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);


        gridLayout->addLayout(horizontalLayout_9, 6, 0, 1, 1);

        spinBox_money = new QSpinBox(groupBox_4);
        spinBox_money->setObjectName(QString::fromUtf8("spinBox_money"));
        spinBox_money->setMaximum(100000);

        gridLayout->addWidget(spinBox_money, 6, 1, 1, 1);

        lineEdit_part = new QLineEdit(groupBox_4);
        lineEdit_part->setObjectName(QString::fromUtf8("lineEdit_part"));

        gridLayout->addWidget(lineEdit_part, 4, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(540, 270, 341, 251));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(540, 245, 341, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addSeparator();
        toolBar->addAction(actionopen);
        toolBar->addAction(actionadd);
        toolBar->addAction(actioninsert);
        toolBar->addAction(actiondelete);
        toolBar->addAction(actionset_image);
        toolBar->addAction(actionclear_image);
        toolBar->addAction(actionup_stage);
        toolBar->addAction(actionsave);
        toolBar->addAction(actioncancel);
        toolBar->addAction(actionquit);
        toolBar->addAction(actionselect_part);
        toolBar->addAction(actioneditrec);

        retranslateUi(MainWindow);
        QObject::connect(actionquit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        actionadd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        actioninsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
        actiondelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        actionset_image->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\233\276\347\211\207", nullptr));
        actionclear_image->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\233\276\347\211\207", nullptr));
        actionup_stage->setText(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        actioncancel->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        actionquit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actionselect_part->setText(QCoreApplication::translate("MainWindow", "select_part", nullptr));
        actioneditrec->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\345\255\227\346\256\265", nullptr));
        radioButton_downsort->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        radioButton_upsort->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\277\207\346\273\244", nullptr));
        radioButton_man->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioButton_women->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        radioButton_all->setText(QCoreApplication::translate("MainWindow", "\345\205\250\346\230\276\347\244\272", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\345\234\260", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\203\250\351\227\250", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\267\245\350\265\204", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

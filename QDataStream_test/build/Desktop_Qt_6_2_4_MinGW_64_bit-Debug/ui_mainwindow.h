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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionclear_edit;
    QAction *actionwrite_file;
    QAction *actionget_file;
    QAction *actionquit;
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spinBox_8;
    QPushButton *pushButton_14;
    QPushButton *pushButton_r8;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *spinBox_u8;
    QPushButton *pushButton_u8;
    QPushButton *pushButton_ru8;
    QLineEdit *lineEdit_u8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *spinBox_16;
    QPushButton *pushButton_16;
    QPushButton *pushButton_r16;
    QLineEdit *lineEdit_16;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *spinBox_u16;
    QPushButton *pushButton_u16;
    QPushButton *pushButton_ru16;
    QLineEdit *lineEdit_u16;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpinBox *spinBox_32;
    QPushButton *pushButton_32;
    QPushButton *pushButton_r32;
    QLineEdit *lineEdit_32;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *spinBox_64;
    QPushButton *pushButton_64;
    QPushButton *pushButton_r64;
    QLineEdit *lineEdit_64;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_testfile;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QRadioButton *radioButton_Little;
    QRadioButton *radioButton_big;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_single;
    QRadioButton *radioButton_double;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(681, 597);
        actionclear_edit = new QAction(MainWindow);
        actionclear_edit->setObjectName(QString::fromUtf8("actionclear_edit"));
        actionclear_edit->setMenuRole(QAction::NoRole);
        actionwrite_file = new QAction(MainWindow);
        actionwrite_file->setObjectName(QString::fromUtf8("actionwrite_file"));
        actionwrite_file->setMenuRole(QAction::NoRole);
        actionget_file = new QAction(MainWindow);
        actionget_file->setObjectName(QString::fromUtf8("actionget_file"));
        actionget_file->setMenuRole(QAction::NoRole);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName(QString::fromUtf8("actionquit"));
        actionquit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 130, 656, 258));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        spinBox_8 = new QSpinBox(groupBox_3);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setMinimum(-128);
        spinBox_8->setMaximum(127);
        spinBox_8->setValue(85);

        horizontalLayout_3->addWidget(spinBox_8);

        pushButton_14 = new QPushButton(groupBox_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        horizontalLayout_3->addWidget(pushButton_14);

        pushButton_r8 = new QPushButton(groupBox_3);
        pushButton_r8->setObjectName(QString::fromUtf8("pushButton_r8"));

        horizontalLayout_3->addWidget(pushButton_r8);

        lineEdit_8 = new QLineEdit(groupBox_3);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_3->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        spinBox_u8 = new QSpinBox(groupBox_3);
        spinBox_u8->setObjectName(QString::fromUtf8("spinBox_u8"));
        spinBox_u8->setMaximum(255);
        spinBox_u8->setValue(236);

        horizontalLayout_4->addWidget(spinBox_u8);

        pushButton_u8 = new QPushButton(groupBox_3);
        pushButton_u8->setObjectName(QString::fromUtf8("pushButton_u8"));

        horizontalLayout_4->addWidget(pushButton_u8);

        pushButton_ru8 = new QPushButton(groupBox_3);
        pushButton_ru8->setObjectName(QString::fromUtf8("pushButton_ru8"));

        horizontalLayout_4->addWidget(pushButton_ru8);

        lineEdit_u8 = new QLineEdit(groupBox_3);
        lineEdit_u8->setObjectName(QString::fromUtf8("lineEdit_u8"));

        horizontalLayout_4->addWidget(lineEdit_u8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        spinBox_16 = new QSpinBox(groupBox_3);
        spinBox_16->setObjectName(QString::fromUtf8("spinBox_16"));
        spinBox_16->setMinimum(-32768);
        spinBox_16->setMaximum(32767);
        spinBox_16->setValue(-1522);

        horizontalLayout_5->addWidget(spinBox_16);

        pushButton_16 = new QPushButton(groupBox_3);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        horizontalLayout_5->addWidget(pushButton_16);

        pushButton_r16 = new QPushButton(groupBox_3);
        pushButton_r16->setObjectName(QString::fromUtf8("pushButton_r16"));

        horizontalLayout_5->addWidget(pushButton_r16);

        lineEdit_16 = new QLineEdit(groupBox_3);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));

        horizontalLayout_5->addWidget(lineEdit_16);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        spinBox_u16 = new QSpinBox(groupBox_3);
        spinBox_u16->setObjectName(QString::fromUtf8("spinBox_u16"));
        spinBox_u16->setMaximum(65535);
        spinBox_u16->setValue(54862);

        horizontalLayout_6->addWidget(spinBox_u16);

        pushButton_u16 = new QPushButton(groupBox_3);
        pushButton_u16->setObjectName(QString::fromUtf8("pushButton_u16"));

        horizontalLayout_6->addWidget(pushButton_u16);

        pushButton_ru16 = new QPushButton(groupBox_3);
        pushButton_ru16->setObjectName(QString::fromUtf8("pushButton_ru16"));

        horizontalLayout_6->addWidget(pushButton_ru16);

        lineEdit_u16 = new QLineEdit(groupBox_3);
        lineEdit_u16->setObjectName(QString::fromUtf8("lineEdit_u16"));

        horizontalLayout_6->addWidget(lineEdit_u16);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        spinBox_32 = new QSpinBox(groupBox_3);
        spinBox_32->setObjectName(QString::fromUtf8("spinBox_32"));
        spinBox_32->setMinimum(-65535);
        spinBox_32->setMaximum(65535);
        spinBox_32->setValue(-3546);

        horizontalLayout_7->addWidget(spinBox_32);

        pushButton_32 = new QPushButton(groupBox_3);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));

        horizontalLayout_7->addWidget(pushButton_32);

        pushButton_r32 = new QPushButton(groupBox_3);
        pushButton_r32->setObjectName(QString::fromUtf8("pushButton_r32"));

        horizontalLayout_7->addWidget(pushButton_r32);

        lineEdit_32 = new QLineEdit(groupBox_3);
        lineEdit_32->setObjectName(QString::fromUtf8("lineEdit_32"));

        horizontalLayout_7->addWidget(lineEdit_32);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        spinBox_64 = new QSpinBox(groupBox_3);
        spinBox_64->setObjectName(QString::fromUtf8("spinBox_64"));
        spinBox_64->setMinimum(-1000000);
        spinBox_64->setMaximum(10000000);
        spinBox_64->setValue(2564851);

        horizontalLayout_8->addWidget(spinBox_64);

        pushButton_64 = new QPushButton(groupBox_3);
        pushButton_64->setObjectName(QString::fromUtf8("pushButton_64"));

        horizontalLayout_8->addWidget(pushButton_64);

        pushButton_r64 = new QPushButton(groupBox_3);
        pushButton_r64->setObjectName(QString::fromUtf8("pushButton_r64"));

        horizontalLayout_8->addWidget(pushButton_r64);

        lineEdit_64 = new QLineEdit(groupBox_3);
        lineEdit_64->setObjectName(QString::fromUtf8("lineEdit_64"));

        horizontalLayout_8->addWidget(lineEdit_64);


        verticalLayout->addLayout(horizontalLayout_8);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 641, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_testfile = new QPushButton(widget);
        pushButton_testfile->setObjectName(QString::fromUtf8("pushButton_testfile"));

        horizontalLayout->addWidget(pushButton_testfile);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 50, 641, 71));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        radioButton_Little = new QRadioButton(groupBox);
        radioButton_Little->setObjectName(QString::fromUtf8("radioButton_Little"));
        radioButton_Little->setGeometry(QRect(10, 30, 118, 23));
        radioButton_big = new QRadioButton(groupBox);
        radioButton_big->setObjectName(QString::fromUtf8("radioButton_big"));
        radioButton_big->setGeometry(QRect(130, 30, 118, 23));

        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        radioButton_single = new QRadioButton(groupBox_2);
        radioButton_single->setObjectName(QString::fromUtf8("radioButton_single"));
        radioButton_single->setGeometry(QRect(10, 30, 141, 23));
        radioButton_double = new QRadioButton(groupBox_2);
        radioButton_double->setObjectName(QString::fromUtf8("radioButton_double"));
        radioButton_double->setGeometry(QRect(160, 30, 131, 23));

        horizontalLayout_2->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QFont font;
        font.setPointSize(14);
        toolBar->setFont(font);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionclear_edit);
        toolBar->addSeparator();
        toolBar->addAction(actionwrite_file);
        toolBar->addSeparator();
        toolBar->addAction(actionget_file);
        toolBar->addSeparator();
        toolBar->addAction(actionquit);

        retranslateUi(MainWindow);
        QObject::connect(actionquit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionclear_edit->setText(QCoreApplication::translate("MainWindow", "clear_edit", nullptr));
        actionwrite_file->setText(QCoreApplication::translate("MainWindow", "write_file", nullptr));
        actionget_file->setText(QCoreApplication::translate("MainWindow", "get_file", nullptr));
        actionquit->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\351\242\204\347\274\226\347\240\201\346\225\260\346\215\256\345\272\217\345\210\227\345\214\226\346\226\271\345\274\217\350\257\273\345\206\231\346\265\213\350\257\225", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "qint8(-128~127)", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_r8->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "quint(0~255)", nullptr));
        pushButton_u8->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_ru8->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "qint16(-32768~32767)l", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_r16->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "quint16(0~65535)", nullptr));
        pushButton_u16->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_ru16->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "qint32", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_r32->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "qint64", nullptr));
        pushButton_64->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_r64->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        pushButton_testfile->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\347\224\250\346\226\207\344\273\266", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\255\227\350\212\202\345\272\217", nullptr));
        radioButton_Little->setText(QCoreApplication::translate("MainWindow", "LittleEndian", nullptr));
        radioButton_big->setText(QCoreApplication::translate("MainWindow", "BigEndian", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\265\256\347\202\271\346\225\260\347\262\276\345\272\246", nullptr));
        radioButton_single->setText(QCoreApplication::translate("MainWindow", "singleprecision", nullptr));
        radioButton_double->setText(QCoreApplication::translate("MainWindow", "DoublePrecision", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

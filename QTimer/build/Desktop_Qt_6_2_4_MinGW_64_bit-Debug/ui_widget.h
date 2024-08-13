/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_dset;
    QLabel *label;
    QSpinBox *spinBox_setinterval;
    QRadioButton *radioButton_contintue;
    QRadioButton *radioButton_singal;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_PreciseTimer;
    QRadioButton *radioButton_CoarseTimer;
    QRadioButton *radioButton_5;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber_hour;
    QLCDNumber *lcdNumber_mintus_;
    QLCDNumber *lcdNumber_second;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(825, 477);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 741, 121));
        pushButton_start = new QPushButton(groupBox);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(50, 30, 93, 28));
        pushButton_stop = new QPushButton(groupBox);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(210, 30, 93, 28));
        pushButton_dset = new QPushButton(groupBox);
        pushButton_dset->setObjectName(QString::fromUtf8("pushButton_dset"));
        pushButton_dset->setGeometry(QRect(360, 30, 341, 28));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 69, 31));
        spinBox_setinterval = new QSpinBox(groupBox);
        spinBox_setinterval->setObjectName(QString::fromUtf8("spinBox_setinterval"));
        spinBox_setinterval->setGeometry(QRect(160, 70, 141, 25));
        spinBox_setinterval->setMaximum(10000);
        spinBox_setinterval->setValue(1000);
        radioButton_contintue = new QRadioButton(groupBox);
        radioButton_contintue->setObjectName(QString::fromUtf8("radioButton_contintue"));
        radioButton_contintue->setGeometry(QRect(360, 70, 118, 23));
        radioButton_singal = new QRadioButton(groupBox);
        radioButton_singal->setObjectName(QString::fromUtf8("radioButton_singal"));
        radioButton_singal->setGeometry(QRect(580, 70, 118, 23));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 180, 741, 91));
        radioButton_PreciseTimer = new QRadioButton(groupBox_2);
        radioButton_PreciseTimer->setObjectName(QString::fromUtf8("radioButton_PreciseTimer"));
        radioButton_PreciseTimer->setGeometry(QRect(50, 40, 151, 23));
        radioButton_CoarseTimer = new QRadioButton(groupBox_2);
        radioButton_CoarseTimer->setObjectName(QString::fromUtf8("radioButton_CoarseTimer"));
        radioButton_CoarseTimer->setGeometry(QRect(290, 40, 151, 23));
        radioButton_5 = new QRadioButton(groupBox_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(550, 40, 141, 23));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 280, 741, 141));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 601, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber_hour = new QLCDNumber(layoutWidget);
        lcdNumber_hour->setObjectName(QString::fromUtf8("lcdNumber_hour"));
        lcdNumber_hour->setProperty("value", QVariant(10.000000000000000));

        horizontalLayout->addWidget(lcdNumber_hour);

        lcdNumber_mintus_ = new QLCDNumber(layoutWidget);
        lcdNumber_mintus_->setObjectName(QString::fromUtf8("lcdNumber_mintus_"));
        lcdNumber_mintus_->setSmallDecimalPoint(false);
        lcdNumber_mintus_->setDigitCount(5);
        lcdNumber_mintus_->setProperty("value", QVariant(23.000000000000000));

        horizontalLayout->addWidget(lcdNumber_mintus_);

        lcdNumber_second = new QLCDNumber(layoutWidget);
        lcdNumber_second->setObjectName(QString::fromUtf8("lcdNumber_second"));
        lcdNumber_second->setProperty("value", QVariant(6.000000000000000));

        horizontalLayout->addWidget(lcdNumber_second);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 430, 741, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        pushButton_dset->setText(QCoreApplication::translate("Widget", "\345\212\250\346\200\201\345\210\233\345\273\272\345\215\225\346\254\241\345\256\232\346\227\266\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        spinBox_setinterval->setSuffix(QCoreApplication::translate("Widget", "ms", nullptr));
        radioButton_contintue->setText(QCoreApplication::translate("Widget", "\350\277\236\347\273\255\345\256\232\346\227\266", nullptr));
        radioButton_singal->setText(QCoreApplication::translate("Widget", "\345\215\225\346\254\241\345\256\232\346\227\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250\347\262\276\345\272\246", nullptr));
        radioButton_PreciseTimer->setText(QCoreApplication::translate("Widget", "PreciseTimer", nullptr));
        radioButton_CoarseTimer->setText(QCoreApplication::translate("Widget", "CoarseTimer", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Widget", "VeryCoarseTimer", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\210\345\260\217\346\227\266\357\274\232\345\210\206\357\274\232\347\247\222\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

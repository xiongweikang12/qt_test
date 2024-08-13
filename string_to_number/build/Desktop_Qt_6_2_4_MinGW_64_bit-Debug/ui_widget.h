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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit_count;
    QLabel *label_2;
    QLineEdit *lineEdit_prince;
    QPushButton *pushButton_qDebug;
    QPushButton *pushButton_sum;
    QLabel *label_3;
    QLineEdit *lineEdit_sum;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit_numten;
    QPushButton *pushButton_other1;
    QLabel *label_5;
    QLineEdit *lineEdit_numtwo;
    QPushButton *pushButton_other2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(707, 394);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 631, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 69, 19));
        lineEdit_count = new QLineEdit(groupBox);
        lineEdit_count->setObjectName(QString::fromUtf8("lineEdit_count"));
        lineEdit_count->setGeometry(QRect(130, 30, 113, 25));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 30, 69, 19));
        lineEdit_prince = new QLineEdit(groupBox);
        lineEdit_prince->setObjectName(QString::fromUtf8("lineEdit_prince"));
        lineEdit_prince->setGeometry(QRect(430, 30, 113, 25));
        pushButton_qDebug = new QPushButton(groupBox);
        pushButton_qDebug->setObjectName(QString::fromUtf8("pushButton_qDebug"));
        pushButton_qDebug->setGeometry(QRect(130, 110, 111, 31));
        pushButton_sum = new QPushButton(groupBox);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        pushButton_sum->setGeometry(QRect(430, 110, 111, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 80, 69, 19));
        lineEdit_sum = new QLineEdit(groupBox);
        lineEdit_sum->setObjectName(QString::fromUtf8("lineEdit_sum"));
        lineEdit_sum->setGeometry(QRect(430, 70, 113, 25));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 69, 19));
        lineEdit_numten = new QLineEdit(groupBox_2);
        lineEdit_numten->setObjectName(QString::fromUtf8("lineEdit_numten"));
        lineEdit_numten->setGeometry(QRect(130, 30, 191, 25));
        pushButton_other1 = new QPushButton(groupBox_2);
        pushButton_other1->setObjectName(QString::fromUtf8("pushButton_other1"));
        pushButton_other1->setGeometry(QRect(400, 30, 161, 28));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 70, 69, 19));
        lineEdit_numtwo = new QLineEdit(groupBox_2);
        lineEdit_numtwo->setObjectName(QString::fromUtf8("lineEdit_numtwo"));
        lineEdit_numtwo->setGeometry(QRect(130, 60, 191, 25));
        pushButton_other2 = new QPushButton(groupBox_2);
        pushButton_other2->setObjectName(QString::fromUtf8("pushButton_other2"));
        pushButton_other2->setGeometry(QRect(400, 60, 161, 28));

        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\347\232\204\350\276\223\345\205\245\344\270\216\350\276\223\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        pushButton_qDebug->setText(QCoreApplication::translate("Widget", "qDebug\346\265\213\350\257\225", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\200\273\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
        pushButton_other1->setText(QCoreApplication::translate("Widget", "PushButton_other1", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        pushButton_other2->setText(QCoreApplication::translate("Widget", "PushButton_other2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

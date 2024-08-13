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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_initlist;
    QPushButton *pushButton_clearlist;
    QComboBox *comboBox;
    QCheckBox *checkBox_editable;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_initcity;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_cleartext;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(668, 519);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 351, 121));
        pushButton_initlist = new QPushButton(groupBox);
        pushButton_initlist->setObjectName(QString::fromUtf8("pushButton_initlist"));
        pushButton_initlist->setGeometry(QRect(20, 30, 101, 28));
        pushButton_clearlist = new QPushButton(groupBox);
        pushButton_clearlist->setObjectName(QString::fromUtf8("pushButton_clearlist"));
        pushButton_clearlist->setGeometry(QRect(130, 30, 101, 28));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 80, 311, 25));
        checkBox_editable = new QCheckBox(groupBox);
        checkBox_editable->setObjectName(QString::fromUtf8("checkBox_editable"));
        checkBox_editable->setGeometry(QRect(250, 30, 81, 23));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(370, 0, 291, 121));
        pushButton_initcity = new QPushButton(groupBox_2);
        pushButton_initcity->setObjectName(QString::fromUtf8("pushButton_initcity"));
        pushButton_initcity->setGeometry(QRect(50, 30, 181, 28));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 80, 261, 25));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 130, 641, 381));
        pushButton_cleartext = new QPushButton(groupBox_3);
        pushButton_cleartext->setObjectName(QString::fromUtf8("pushButton_cleartext"));
        pushButton_cleartext->setGeometry(QRect(20, 50, 611, 28));
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 90, 611, 281));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "ComboBox_demo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\347\256\200\345\215\225comboBox", nullptr));
        pushButton_initlist->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        pushButton_clearlist->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "\345\215\227\346\230\214", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "\346\235\255\345\267\236", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "\344\270\212\346\265\267", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "\345\214\227\344\272\254", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Widget", "\346\255\246\346\261\211", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Widget", "\344\270\234\350\216\236", nullptr));

        checkBox_editable->setText(QCoreApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\347\232\204comboBox", nullptr));
        pushButton_initcity->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\344\277\241\346\201\257\346\230\276\347\244\272", nullptr));
        pushButton_cleartext->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

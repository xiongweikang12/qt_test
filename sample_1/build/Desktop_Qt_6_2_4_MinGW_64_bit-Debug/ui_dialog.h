/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_font;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_underline;
    QCheckBox *checkBox_italic;
    QCheckBox *checkBox_bold;
    QGroupBox *groupBox_color;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_black;
    QRadioButton *radioButton_red;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_OK;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_closer;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/image1/notice-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 90, 371, 401));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_font = new QGroupBox(widget);
        groupBox_font->setObjectName(QString::fromUtf8("groupBox_font"));
        horizontalLayout = new QHBoxLayout(groupBox_font);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_underline = new QCheckBox(groupBox_font);
        checkBox_underline->setObjectName(QString::fromUtf8("checkBox_underline"));

        horizontalLayout->addWidget(checkBox_underline);

        checkBox_italic = new QCheckBox(groupBox_font);
        checkBox_italic->setObjectName(QString::fromUtf8("checkBox_italic"));

        horizontalLayout->addWidget(checkBox_italic);

        checkBox_bold = new QCheckBox(groupBox_font);
        checkBox_bold->setObjectName(QString::fromUtf8("checkBox_bold"));

        horizontalLayout->addWidget(checkBox_bold);


        verticalLayout->addWidget(groupBox_font);

        groupBox_color = new QGroupBox(widget);
        groupBox_color->setObjectName(QString::fromUtf8("groupBox_color"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_color);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_black = new QRadioButton(groupBox_color);
        radioButton_black->setObjectName(QString::fromUtf8("radioButton_black"));

        horizontalLayout_2->addWidget(radioButton_black);

        radioButton_red = new QRadioButton(groupBox_color);
        radioButton_red->setObjectName(QString::fromUtf8("radioButton_red"));

        horizontalLayout_2->addWidget(radioButton_red);


        verticalLayout->addWidget(groupBox_color);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_OK = new QPushButton(widget);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/image1/heart-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_OK->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton_OK);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_closer = new QPushButton(widget);
        pushButton_closer->setObjectName(QString::fromUtf8("pushButton_closer"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/image1/down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_closer->setIcon(icon2);

        horizontalLayout_3->addWidget(pushButton_closer);

        pushButton_clear = new QPushButton(widget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/image1/scan-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_clear->setIcon(icon3);

        horizontalLayout_3->addWidget(pushButton_clear);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);
        QObject::connect(pushButton_closer, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_OK, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox_font->setTitle(QCoreApplication::translate("Dialog", "\345\255\227\344\275\223", nullptr));
        checkBox_underline->setText(QCoreApplication::translate("Dialog", "\344\270\213\345\210\222\347\272\277", nullptr));
        checkBox_italic->setText(QCoreApplication::translate("Dialog", "\346\226\234\344\275\223", nullptr));
        checkBox_bold->setText(QCoreApplication::translate("Dialog", "\345\212\240\347\262\227", nullptr));
        groupBox_color->setTitle(QCoreApplication::translate("Dialog", "\351\242\234\350\211\262", nullptr));
        radioButton_black->setText(QCoreApplication::translate("Dialog", "\351\273\221\350\211\262", nullptr));
        radioButton_red->setText(QCoreApplication::translate("Dialog", "\347\272\242\350\211\262", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "QT6\345\274\200\345\217\221\346\214\207\345\215\227", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        pushButton_closer->setText(QCoreApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'tsizedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSIZEDIALOG_H
#define UI_TSIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TsizeDialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox_colcount;
    QLabel *label_2;
    QSpinBox *spinBox_rowcount;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *TsizeDialog)
    {
        if (TsizeDialog->objectName().isEmpty())
            TsizeDialog->setObjectName(QString::fromUtf8("TsizeDialog"));
        TsizeDialog->resize(391, 158);
        groupBox = new QGroupBox(TsizeDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 221, 141));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 201, 101));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBox_colcount = new QSpinBox(layoutWidget);
        spinBox_colcount->setObjectName(QString::fromUtf8("spinBox_colcount"));

        gridLayout->addWidget(spinBox_colcount, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBox_rowcount = new QSpinBox(layoutWidget);
        spinBox_rowcount->setObjectName(QString::fromUtf8("spinBox_rowcount"));

        gridLayout->addWidget(spinBox_rowcount, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(TsizeDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 20, 151, 131));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 101, 81));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_ok = new QPushButton(layoutWidget1);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));

        verticalLayout->addWidget(pushButton_ok);

        pushButton_cancel = new QPushButton(layoutWidget1);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        verticalLayout->addWidget(pushButton_cancel);


        retranslateUi(TsizeDialog);
        QObject::connect(pushButton_ok, &QPushButton::clicked, TsizeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_cancel, &QPushButton::clicked, TsizeDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(TsizeDialog);
    } // setupUi

    void retranslateUi(QDialog *TsizeDialog)
    {
        TsizeDialog->setWindowTitle(QCoreApplication::translate("TsizeDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TsizeDialog", "\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("TsizeDialog", "\345\210\227\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("TsizeDialog", "\350\241\214\346\225\260", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_ok->setText(QCoreApplication::translate("TsizeDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("TsizeDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TsizeDialog: public Ui_TsizeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSIZEDIALOG_H

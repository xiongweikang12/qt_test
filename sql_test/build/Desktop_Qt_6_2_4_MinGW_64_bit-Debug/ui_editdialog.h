/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QGroupBox *groupBox_4;
    QSpinBox *spinBox_id;
    QLineEdit *lineEdit_name;
    QComboBox *comboBox_sex;
    QDateEdit *dateEdit_birthdata;
    QComboBox *comboBox_part;
    QSpinBox *spinBox_money;
    QLineEdit *lineEdit_part;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(385, 323);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image1/copy-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditDialog->setWindowIcon(icon);
        groupBox_4 = new QGroupBox(EditDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 0, 341, 221));
        spinBox_id = new QSpinBox(groupBox_4);
        spinBox_id->setObjectName(QString::fromUtf8("spinBox_id"));
        spinBox_id->setGeometry(QRect(81, 31, 248, 20));
        spinBox_id->setMaximum(1000000);
        lineEdit_name = new QLineEdit(groupBox_4);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(81, 58, 248, 19));
        comboBox_sex = new QComboBox(groupBox_4);
        comboBox_sex->setObjectName(QString::fromUtf8("comboBox_sex"));
        comboBox_sex->setGeometry(QRect(81, 84, 248, 20));
        dateEdit_birthdata = new QDateEdit(groupBox_4);
        dateEdit_birthdata->setObjectName(QString::fromUtf8("dateEdit_birthdata"));
        dateEdit_birthdata->setGeometry(QRect(81, 111, 248, 19));
        comboBox_part = new QComboBox(groupBox_4);
        comboBox_part->setObjectName(QString::fromUtf8("comboBox_part"));
        comboBox_part->setGeometry(QRect(81, 164, 248, 19));
        spinBox_money = new QSpinBox(groupBox_4);
        spinBox_money->setObjectName(QString::fromUtf8("spinBox_money"));
        spinBox_money->setGeometry(QRect(81, 190, 248, 19));
        spinBox_money->setMaximum(100000);
        lineEdit_part = new QLineEdit(groupBox_4);
        lineEdit_part->setObjectName(QString::fromUtf8("lineEdit_part"));
        lineEdit_part->setGeometry(QRect(81, 137, 248, 20));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(13, 165, 60, 17));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(13, 138, 60, 18));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(13, 112, 60, 17));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(13, 85, 60, 18));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(13, 59, 60, 17));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(7);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(13, 32, 60, 18));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 190, 69, 19));
        pushButton_submit = new QPushButton(EditDialog);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(20, 240, 351, 28));
        pushButton_cancel = new QPushButton(EditDialog);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(20, 280, 351, 28));

        retranslateUi(EditDialog);
        QObject::connect(pushButton_cancel, &QPushButton::clicked, EditDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Dialog", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("EditDialog", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        label_7->setText(QCoreApplication::translate("EditDialog", "\351\203\250\351\227\250", nullptr));
        label_6->setText(QCoreApplication::translate("EditDialog", "\345\207\272\347\224\237\345\234\260", nullptr));
        label_5->setText(QCoreApplication::translate("EditDialog", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_4->setText(QCoreApplication::translate("EditDialog", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QCoreApplication::translate("EditDialog", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("EditDialog", "\345\267\245\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("EditDialog", "\345\267\245\350\265\204", nullptr));
        pushButton_submit->setText(QCoreApplication::translate("EditDialog", "\346\217\220\344\272\244", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("EditDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'editform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFORM_H
#define UI_EDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editForm
{
public:
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
    QPushButton *pushButton_submmit;

    void setupUi(QWidget *editForm)
    {
        if (editForm->objectName().isEmpty())
            editForm->setObjectName(QString::fromUtf8("editForm"));
        editForm->resize(369, 420);
        groupBox_4 = new QGroupBox(editForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 351, 231));
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

        plainTextEdit = new QPlainTextEdit(editForm);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 250, 351, 87));
        pushButton_submmit = new QPushButton(editForm);
        pushButton_submmit->setObjectName(QString::fromUtf8("pushButton_submmit"));
        pushButton_submmit->setGeometry(QRect(10, 360, 351, 28));

        retranslateUi(editForm);

        QMetaObject::connectSlotsByName(editForm);
    } // setupUi

    void retranslateUi(QWidget *editForm)
    {
        editForm->setWindowTitle(QCoreApplication::translate("editForm", "Form", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("editForm", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("editForm", "\345\267\245\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("editForm", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("editForm", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("editForm", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("editForm", "\345\207\272\347\224\237\345\234\260", nullptr));
        label_7->setText(QCoreApplication::translate("editForm", "\351\203\250\351\227\250", nullptr));
        label_8->setText(QCoreApplication::translate("editForm", "\345\267\245\350\265\204", nullptr));
        pushButton_submmit->setText(QCoreApplication::translate("editForm", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editForm: public Ui_editForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFORM_H

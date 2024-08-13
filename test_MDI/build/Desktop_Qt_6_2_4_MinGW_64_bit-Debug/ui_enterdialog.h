/********************************************************************************
** Form generated from reading UI file 'enterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERDIALOG_H
#define UI_ENTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnterDialog
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QLabel *label_3;
    QLineEdit *lineEdit_userpwd;
    QCheckBox *checkBox_savepwd;
    QPushButton *pushButton_accpect;
    QPushButton *pushButton_reject;

    void setupUi(QDialog *EnterDialog)
    {
        if (EnterDialog->objectName().isEmpty())
            EnterDialog->setObjectName(QString::fromUtf8("EnterDialog"));
        EnterDialog->resize(782, 292);
        label = new QLabel(EnterDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 741, 191));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/image.jpg")));
        label->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(EnterDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 230, 761, 51));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 749, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        horizontalLayout->addWidget(lineEdit_username);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_userpwd = new QLineEdit(widget);
        lineEdit_userpwd->setObjectName(QString::fromUtf8("lineEdit_userpwd"));

        horizontalLayout->addWidget(lineEdit_userpwd);

        checkBox_savepwd = new QCheckBox(widget);
        checkBox_savepwd->setObjectName(QString::fromUtf8("checkBox_savepwd"));

        horizontalLayout->addWidget(checkBox_savepwd);

        pushButton_accpect = new QPushButton(widget);
        pushButton_accpect->setObjectName(QString::fromUtf8("pushButton_accpect"));

        horizontalLayout->addWidget(pushButton_accpect);

        pushButton_reject = new QPushButton(widget);
        pushButton_reject->setObjectName(QString::fromUtf8("pushButton_reject"));

        horizontalLayout->addWidget(pushButton_reject);


        retranslateUi(EnterDialog);
        QObject::connect(pushButton_reject, &QPushButton::clicked, EnterDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EnterDialog);
    } // setupUi

    void retranslateUi(QDialog *EnterDialog)
    {
        EnterDialog->setWindowTitle(QCoreApplication::translate("EnterDialog", "Dialog", nullptr));
        label->setText(QString());
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("EnterDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("EnterDialog", "\345\257\206\347\240\201", nullptr));
        checkBox_savepwd->setText(QCoreApplication::translate("EnterDialog", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton_accpect->setText(QCoreApplication::translate("EnterDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_reject->setText(QCoreApplication::translate("EnterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterDialog: public Ui_EnterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERDIALOG_H

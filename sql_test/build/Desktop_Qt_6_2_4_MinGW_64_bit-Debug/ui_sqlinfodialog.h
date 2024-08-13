/********************************************************************************
** Form generated from reading UI file 'sqlinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLINFODIALOG_H
#define UI_SQLINFODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sqlInfoDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_databasedrive;
    QLabel *label_2;
    QLineEdit *lineEdit_databaseconnect;
    QLabel *label_3;
    QLineEdit *lineEdit_hostname;
    QLabel *label_4;
    QLineEdit *lineEdit_username;
    QLabel *label_5;
    QLineEdit *lineEdit_databasename;
    QLabel *label_6;
    QLineEdit *lineEdit_tablename;
    QLabel *label_7;
    QLineEdit *lineEdit_password;
    QCheckBox *checkBox_savetable;
    QPushButton *pushButton_accecpt;
    QPushButton *pushButton_cancel;
    QCheckBox *checkBox_savedatabase;

    void setupUi(QDialog *sqlInfoDialog)
    {
        if (sqlInfoDialog->objectName().isEmpty())
            sqlInfoDialog->setObjectName(QString::fromUtf8("sqlInfoDialog"));
        sqlInfoDialog->resize(400, 344);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image1/copy-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        sqlInfoDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(sqlInfoDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(sqlInfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_databasedrive = new QComboBox(sqlInfoDialog);
        comboBox_databasedrive->setObjectName(QString::fromUtf8("comboBox_databasedrive"));

        gridLayout->addWidget(comboBox_databasedrive, 0, 1, 1, 2);

        label_2 = new QLabel(sqlInfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_databaseconnect = new QLineEdit(sqlInfoDialog);
        lineEdit_databaseconnect->setObjectName(QString::fromUtf8("lineEdit_databaseconnect"));

        gridLayout->addWidget(lineEdit_databaseconnect, 1, 1, 1, 2);

        label_3 = new QLabel(sqlInfoDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_hostname = new QLineEdit(sqlInfoDialog);
        lineEdit_hostname->setObjectName(QString::fromUtf8("lineEdit_hostname"));

        gridLayout->addWidget(lineEdit_hostname, 2, 1, 1, 2);

        label_4 = new QLabel(sqlInfoDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_username = new QLineEdit(sqlInfoDialog);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        gridLayout->addWidget(lineEdit_username, 3, 1, 1, 2);

        label_5 = new QLabel(sqlInfoDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_databasename = new QLineEdit(sqlInfoDialog);
        lineEdit_databasename->setObjectName(QString::fromUtf8("lineEdit_databasename"));

        gridLayout->addWidget(lineEdit_databasename, 4, 1, 1, 2);

        label_6 = new QLabel(sqlInfoDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_tablename = new QLineEdit(sqlInfoDialog);
        lineEdit_tablename->setObjectName(QString::fromUtf8("lineEdit_tablename"));

        gridLayout->addWidget(lineEdit_tablename, 5, 1, 1, 2);

        label_7 = new QLabel(sqlInfoDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lineEdit_password = new QLineEdit(sqlInfoDialog);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        gridLayout->addWidget(lineEdit_password, 6, 1, 1, 2);

        checkBox_savetable = new QCheckBox(sqlInfoDialog);
        checkBox_savetable->setObjectName(QString::fromUtf8("checkBox_savetable"));

        gridLayout->addWidget(checkBox_savetable, 9, 2, 1, 1);

        pushButton_accecpt = new QPushButton(sqlInfoDialog);
        pushButton_accecpt->setObjectName(QString::fromUtf8("pushButton_accecpt"));

        gridLayout->addWidget(pushButton_accecpt, 7, 0, 1, 3);

        pushButton_cancel = new QPushButton(sqlInfoDialog);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        gridLayout->addWidget(pushButton_cancel, 8, 0, 1, 3);

        checkBox_savedatabase = new QCheckBox(sqlInfoDialog);
        checkBox_savedatabase->setObjectName(QString::fromUtf8("checkBox_savedatabase"));

        gridLayout->addWidget(checkBox_savedatabase, 9, 0, 1, 2);


        retranslateUi(sqlInfoDialog);
        QObject::connect(pushButton_cancel, &QPushButton::clicked, sqlInfoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(sqlInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *sqlInfoDialog)
    {
        sqlInfoDialog->setWindowTitle(QCoreApplication::translate("sqlInfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sqlInfoDialog", "\351\200\211\346\213\251\346\225\260\346\215\256\345\272\223\351\251\261\345\212\250", nullptr));
        label_2->setText(QCoreApplication::translate("sqlInfoDialog", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("sqlInfoDialog", "hostname", nullptr));
        label_4->setText(QCoreApplication::translate("sqlInfoDialog", "username", nullptr));
        label_5->setText(QCoreApplication::translate("sqlInfoDialog", "\346\225\260\346\215\256\345\272\223\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("sqlInfoDialog", "\350\241\250\345\220\215", nullptr));
        label_7->setText(QCoreApplication::translate("sqlInfoDialog", "password", nullptr));
        checkBox_savetable->setText(QCoreApplication::translate("sqlInfoDialog", "\350\256\260\344\275\217\346\225\260\346\215\256\345\272\223\350\241\250\345\220\215", nullptr));
        pushButton_accecpt->setText(QCoreApplication::translate("sqlInfoDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("sqlInfoDialog", "\345\217\226\346\266\210", nullptr));
        checkBox_savedatabase->setText(QCoreApplication::translate("sqlInfoDialog", "\350\256\260\344\275\217\346\225\260\346\215\256\345\272\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sqlInfoDialog: public Ui_sqlInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLINFODIALOG_H

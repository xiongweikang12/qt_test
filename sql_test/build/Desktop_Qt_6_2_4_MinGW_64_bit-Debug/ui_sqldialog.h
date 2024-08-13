/********************************************************************************
** Form generated from reading UI file 'sqldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLDIALOG_H
#define UI_SQLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SqlDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_database;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton;

    void setupUi(QDialog *SqlDialog)
    {
        if (SqlDialog->objectName().isEmpty())
            SqlDialog->setObjectName(QString::fromUtf8("SqlDialog"));
        SqlDialog->resize(300, 95);
        widget = new QWidget(SqlDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 11, 151, 63));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox_database = new QComboBox(widget);
        comboBox_database->setObjectName(QString::fromUtf8("comboBox_database"));

        horizontalLayout->addWidget(comboBox_database);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(SqlDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 30, 93, 28));

        retranslateUi(SqlDialog);

        QMetaObject::connectSlotsByName(SqlDialog);
    } // setupUi

    void retranslateUi(QDialog *SqlDialog)
    {
        SqlDialog->setWindowTitle(QCoreApplication::translate("SqlDialog", "\351\200\211\346\213\251\347\233\270\345\205\263\346\225\260\346\215\256\345\272\223\345\222\214\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("SqlDialog", "\346\225\260\346\215\256\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("SqlDialog", "\350\241\250\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("SqlDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SqlDialog: public Ui_SqlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLDIALOG_H

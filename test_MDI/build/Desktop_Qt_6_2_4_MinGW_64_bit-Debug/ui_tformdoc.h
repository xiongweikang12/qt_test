/********************************************************************************
** Form generated from reading UI file 'tformdoc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFORMDOC_H
#define UI_TFORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFormdoc
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *TFormdoc)
    {
        if (TFormdoc->objectName().isEmpty())
            TFormdoc->setObjectName(QString::fromUtf8("TFormdoc"));
        TFormdoc->resize(400, 300);
        horizontalLayout = new QHBoxLayout(TFormdoc);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        plainTextEdit = new QPlainTextEdit(TFormdoc);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);


        retranslateUi(TFormdoc);

        QMetaObject::connectSlotsByName(TFormdoc);
    } // setupUi

    void retranslateUi(QWidget *TFormdoc)
    {
        TFormdoc->setWindowTitle(QCoreApplication::translate("TFormdoc", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TFormdoc: public Ui_TFormdoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMDOC_H

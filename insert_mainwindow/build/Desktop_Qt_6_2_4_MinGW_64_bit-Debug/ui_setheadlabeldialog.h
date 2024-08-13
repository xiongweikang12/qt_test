/********************************************************************************
** Form generated from reading UI file 'setheadlabeldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETHEADLABELDIALOG_H
#define UI_SETHEADLABELDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setHeadlabelDialog
{
public:
    QGroupBox *groupBox;
    QListView *listView_setheadlist;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_ok;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_cancel;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *setHeadlabelDialog)
    {
        if (setHeadlabelDialog->objectName().isEmpty())
            setHeadlabelDialog->setObjectName(QString::fromUtf8("setHeadlabelDialog"));
        setHeadlabelDialog->resize(485, 386);
        groupBox = new QGroupBox(setHeadlabelDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 291, 361));
        listView_setheadlist = new QListView(groupBox);
        listView_setheadlist->setObjectName(QString::fromUtf8("listView_setheadlist"));
        listView_setheadlist->setGeometry(QRect(10, 20, 271, 331));
        groupBox_2 = new QGroupBox(setHeadlabelDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 20, 161, 351));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 10, 95, 332));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_ok = new QPushButton(widget);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));

        verticalLayout->addWidget(pushButton_ok);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_cancel = new QPushButton(widget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        verticalLayout->addWidget(pushButton_cancel);

        verticalSpacer_3 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(setHeadlabelDialog);
        QObject::connect(pushButton_ok, &QPushButton::clicked, setHeadlabelDialog, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_cancel, &QPushButton::clicked, setHeadlabelDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(setHeadlabelDialog);
    } // setupUi

    void retranslateUi(QDialog *setHeadlabelDialog)
    {
        setHeadlabelDialog->setWindowTitle(QCoreApplication::translate("setHeadlabelDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("setHeadlabelDialog", "\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_ok->setText(QCoreApplication::translate("setHeadlabelDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("setHeadlabelDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setHeadlabelDialog: public Ui_setHeadlabelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETHEADLABELDIALOG_H

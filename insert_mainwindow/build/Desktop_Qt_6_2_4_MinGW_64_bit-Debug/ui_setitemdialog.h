/********************************************************************************
** Form generated from reading UI file 'setitemdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETITEMDIALOG_H
#define UI_SETITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setitemDialog
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_colindex;
    QCheckBox *checkBox_colnum_increase;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_rowindex;
    QCheckBox *checkBox_rownum_increase;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_itemtext;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_setText;
    QPushButton *pushButton_close;

    void setupUi(QDialog *setitemDialog)
    {
        if (setitemDialog->objectName().isEmpty())
            setitemDialog->setObjectName(QString::fromUtf8("setitemDialog"));
        setitemDialog->resize(406, 208);
        groupBox = new QGroupBox(setitemDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 231, 181));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 212, 97));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox_colindex = new QSpinBox(widget);
        spinBox_colindex->setObjectName(QString::fromUtf8("spinBox_colindex"));

        horizontalLayout->addWidget(spinBox_colindex);

        checkBox_colnum_increase = new QCheckBox(widget);
        checkBox_colnum_increase->setObjectName(QString::fromUtf8("checkBox_colnum_increase"));

        horizontalLayout->addWidget(checkBox_colnum_increase);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox_rowindex = new QSpinBox(widget);
        spinBox_rowindex->setObjectName(QString::fromUtf8("spinBox_rowindex"));

        horizontalLayout_2->addWidget(spinBox_rowindex);

        checkBox_rownum_increase = new QCheckBox(widget);
        checkBox_rownum_increase->setObjectName(QString::fromUtf8("checkBox_rownum_increase"));

        horizontalLayout_2->addWidget(checkBox_rownum_increase);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_itemtext = new QLineEdit(widget);
        lineEdit_itemtext->setObjectName(QString::fromUtf8("lineEdit_itemtext"));

        horizontalLayout_3->addWidget(lineEdit_itemtext);


        verticalLayout->addLayout(horizontalLayout_3);

        widget1 = new QWidget(setitemDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(250, 10, 141, 181));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_setText = new QPushButton(widget1);
        pushButton_setText->setObjectName(QString::fromUtf8("pushButton_setText"));

        verticalLayout_2->addWidget(pushButton_setText);

        pushButton_close = new QPushButton(widget1);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));

        verticalLayout_2->addWidget(pushButton_close);


        retranslateUi(setitemDialog);
        QObject::connect(pushButton_close, &QPushButton::clicked, setitemDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(setitemDialog);
    } // setupUi

    void retranslateUi(QDialog *setitemDialog)
    {
        setitemDialog->setWindowTitle(QCoreApplication::translate("setitemDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("setitemDialog", "\345\210\227\347\264\242\345\274\225", nullptr));
        checkBox_colnum_increase->setText(QCoreApplication::translate("setitemDialog", "\345\210\227\345\242\236", nullptr));
        label_2->setText(QCoreApplication::translate("setitemDialog", "\350\241\214\347\264\242\345\274\225", nullptr));
        checkBox_rownum_increase->setText(QCoreApplication::translate("setitemDialog", "\350\241\214\345\242\236", nullptr));
        label_3->setText(QCoreApplication::translate("setitemDialog", "\346\226\207\345\255\227", nullptr));
        pushButton_setText->setText(QCoreApplication::translate("setitemDialog", "\350\256\276\347\275\256\346\226\207\345\255\227", nullptr));
        pushButton_close->setText(QCoreApplication::translate("setitemDialog", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setitemDialog: public Ui_setitemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETITEMDIALOG_H

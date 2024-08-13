/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QLabel *label_inputstring;
    QLineEdit *lineEdit_inputstring;
    QPushButton *pushButton_foreach;
    QPushButton *pushButton_getitem;
    QLineEdit *lineEdit_inputchar;
    QLabel *label;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_test1;
    QPushButton *pushButton_test2;
    QGroupBox *groupBox_check;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit_outputs;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_isDigit;
    QCheckBox *checkBox_isLetter;
    QCheckBox *checkBox_isUpper;
    QCheckBox *checkBox_isLower;
    QCheckBox *checkBox_isMark;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 20, 445, 91));
        label_inputstring = new QLabel(groupBox);
        label_inputstring->setObjectName(QString::fromUtf8("label_inputstring"));
        label_inputstring->setGeometry(QRect(13, 13, 75, 19));
        lineEdit_inputstring = new QLineEdit(groupBox);
        lineEdit_inputstring->setObjectName(QString::fromUtf8("lineEdit_inputstring"));
        lineEdit_inputstring->setGeometry(QRect(110, 10, 171, 25));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_inputstring->sizePolicy().hasHeightForWidth());
        lineEdit_inputstring->setSizePolicy(sizePolicy);
        pushButton_foreach = new QPushButton(groupBox);
        pushButton_foreach->setObjectName(QString::fromUtf8("pushButton_foreach"));
        pushButton_foreach->setGeometry(QRect(290, 10, 145, 28));
        pushButton_getitem = new QPushButton(groupBox);
        pushButton_getitem->setObjectName(QString::fromUtf8("pushButton_getitem"));
        pushButton_getitem->setGeometry(QRect(288, 50, 144, 28));
        lineEdit_inputchar = new QLineEdit(groupBox);
        lineEdit_inputchar->setObjectName(QString::fromUtf8("lineEdit_inputchar"));
        lineEdit_inputchar->setGeometry(QRect(110, 51, 171, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(13, 50, 90, 19));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 110, 441, 91));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_test1 = new QPushButton(groupBox_2);
        pushButton_test1->setObjectName(QString::fromUtf8("pushButton_test1"));

        horizontalLayout->addWidget(pushButton_test1);

        pushButton_test2 = new QPushButton(groupBox_2);
        pushButton_test2->setObjectName(QString::fromUtf8("pushButton_test2"));

        horizontalLayout->addWidget(pushButton_test2);

        groupBox_check = new QGroupBox(Widget);
        groupBox_check->setObjectName(QString::fromUtf8("groupBox_check"));
        groupBox_check->setGeometry(QRect(180, 220, 441, 331));
        groupBox_3 = new QGroupBox(groupBox_check);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 291, 311));
        textEdit_outputs = new QTextEdit(groupBox_3);
        textEdit_outputs->setObjectName(QString::fromUtf8("textEdit_outputs"));
        textEdit_outputs->setGeometry(QRect(10, 30, 261, 261));
        widget = new QWidget(groupBox_check);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(310, 20, 91, 291));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_isDigit = new QCheckBox(widget);
        checkBox_isDigit->setObjectName(QString::fromUtf8("checkBox_isDigit"));

        verticalLayout->addWidget(checkBox_isDigit);

        checkBox_isLetter = new QCheckBox(widget);
        checkBox_isLetter->setObjectName(QString::fromUtf8("checkBox_isLetter"));

        verticalLayout->addWidget(checkBox_isLetter);

        checkBox_isUpper = new QCheckBox(widget);
        checkBox_isUpper->setObjectName(QString::fromUtf8("checkBox_isUpper"));

        verticalLayout->addWidget(checkBox_isUpper);

        checkBox_isLower = new QCheckBox(widget);
        checkBox_isLower->setObjectName(QString::fromUtf8("checkBox_isLower"));

        verticalLayout->addWidget(checkBox_isLower);

        checkBox_isMark = new QCheckBox(widget);
        checkBox_isMark->setObjectName(QString::fromUtf8("checkBox_isMark"));

        verticalLayout->addWidget(checkBox_isMark);


        retranslateUi(Widget);
        QObject::connect(pushButton_test2, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        label_inputstring->setText(QCoreApplication::translate("Widget", "<html><head/><body><p>\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262</p></body></html>", nullptr));
        pushButton_foreach->setText(QCoreApplication::translate("Widget", "\346\257\217\344\270\252\345\255\227\347\254\246\347\232\204Unicode", nullptr));
        pushButton_getitem->setText(QCoreApplication::translate("Widget", "\345\215\225\344\270\252\345\255\227\347\254\246\347\232\204\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p>\350\276\223\345\205\245\345\215\225\344\270\252\345\255\227\347\254\246</p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\205\266\344\273\226\346\265\213\350\257\225\345\222\214\345\212\237\350\203\275", nullptr));
        pushButton_test1->setText(QCoreApplication::translate("Widget", "PushButton_test1", nullptr));
        pushButton_test2->setText(QCoreApplication::translate("Widget", "PushButton_test2", nullptr));
        groupBox_check->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\347\273\223\346\236\234", nullptr));
        checkBox_isDigit->setText(QCoreApplication::translate("Widget", "isDigit", nullptr));
        checkBox_isLetter->setText(QCoreApplication::translate("Widget", "isLetter", nullptr));
        checkBox_isUpper->setText(QCoreApplication::translate("Widget", "isUpper", nullptr));
        checkBox_isLower->setText(QCoreApplication::translate("Widget", "isLower", nullptr));
        checkBox_isMark->setText(QCoreApplication::translate("Widget", "is_Mark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QPushButton *pushButton_readtime;
    QLabel *label;
    QLabel *label_2;
    QTimeEdit *timeEdit_time;
    QLineEdit *lineEdit_time;
    QPushButton *pushButton_qdebugtime;
    QPushButton *pushButton_settime;
    QLabel *label_3;
    QDateEdit *dateEdit_data;
    QLineEdit *lineEdit_date;
    QFrame *line;
    QPushButton *pushButton_qDeugdate;
    QPushButton *pushButton_setdate;
    QFrame *line_2;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit_dataTime;
    QLineEdit *lineEdit_timedate;
    QPushButton *pushButton_qDebugtimedate;
    QPushButton *pushButton_settimedate;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(951, 326);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        pushButton_readtime = new QPushButton(groupBox);
        pushButton_readtime->setObjectName(QString::fromUtf8("pushButton_readtime"));
        pushButton_readtime->setGeometry(QRect(100, 30, 171, 21));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 30, 91, 19));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 69, 19));
        timeEdit_time = new QTimeEdit(groupBox);
        timeEdit_time->setObjectName(QString::fromUtf8("timeEdit_time"));
        timeEdit_time->setGeometry(QRect(100, 60, 171, 25));
        lineEdit_time = new QLineEdit(groupBox);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));
        lineEdit_time->setGeometry(QRect(300, 60, 121, 25));
        pushButton_qdebugtime = new QPushButton(groupBox);
        pushButton_qdebugtime->setObjectName(QString::fromUtf8("pushButton_qdebugtime"));
        pushButton_qdebugtime->setGeometry(QRect(100, 90, 171, 28));
        pushButton_settime = new QPushButton(groupBox);
        pushButton_settime->setObjectName(QString::fromUtf8("pushButton_settime"));
        pushButton_settime->setGeometry(QRect(300, 90, 121, 28));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 150, 69, 19));
        dateEdit_data = new QDateEdit(groupBox);
        dateEdit_data->setObjectName(QString::fromUtf8("dateEdit_data"));
        dateEdit_data->setGeometry(QRect(100, 150, 171, 25));
        lineEdit_date = new QLineEdit(groupBox);
        lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(300, 150, 121, 25));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 130, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_qDeugdate = new QPushButton(groupBox);
        pushButton_qDeugdate->setObjectName(QString::fromUtf8("pushButton_qDeugdate"));
        pushButton_qDeugdate->setGeometry(QRect(100, 180, 171, 28));
        pushButton_setdate = new QPushButton(groupBox);
        pushButton_setdate->setObjectName(QString::fromUtf8("pushButton_setdate"));
        pushButton_setdate->setGeometry(QRect(300, 180, 121, 28));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 210, 411, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 240, 69, 19));
        dateTimeEdit_dataTime = new QDateTimeEdit(groupBox);
        dateTimeEdit_dataTime->setObjectName(QString::fromUtf8("dateTimeEdit_dataTime"));
        dateTimeEdit_dataTime->setGeometry(QRect(90, 240, 191, 25));
        lineEdit_timedate = new QLineEdit(groupBox);
        lineEdit_timedate->setObjectName(QString::fromUtf8("lineEdit_timedate"));
        lineEdit_timedate->setGeometry(QRect(300, 240, 121, 25));
        pushButton_qDebugtimedate = new QPushButton(groupBox);
        pushButton_qDebugtimedate->setObjectName(QString::fromUtf8("pushButton_qDebugtimedate"));
        pushButton_qDebugtimedate->setGeometry(QRect(90, 270, 191, 28));
        pushButton_settimedate = new QPushButton(groupBox);
        pushButton_settimedate->setObjectName(QString::fromUtf8("pushButton_settimedate"));
        pushButton_settimedate->setGeometry(QRect(300, 270, 121, 28));

        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 30, 69, 19));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 30, 191, 25));
        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(90, 70, 296, 229));

        horizontalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        pushButton_readtime->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264", nullptr));
        timeEdit_time->setDisplayFormat(QCoreApplication::translate("Widget", "H:mm:ss", nullptr));
        lineEdit_time->setInputMask(QCoreApplication::translate("Widget", "99:99:99;_", nullptr));
        pushButton_qdebugtime->setText(QCoreApplication::translate("Widget", "qDebug", nullptr));
        pushButton_settime->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237", nullptr));
        lineEdit_date->setInputMask(QCoreApplication::translate("Widget", "9999:99:99", nullptr));
        pushButton_qDeugdate->setText(QCoreApplication::translate("Widget", "qDebug", nullptr));
        pushButton_setdate->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        dateTimeEdit_dataTime->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy/M/d H:mm:ss", nullptr));
        lineEdit_timedate->setInputMask(QCoreApplication::translate("Widget", "9999-99-99 99:99:99", nullptr));
        pushButton_qDebugtimedate->setText(QCoreApplication::translate("Widget", "qDebug", nullptr));
        pushButton_settimedate->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264\346\227\245\346\234\237", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\346\227\245\346\234\237\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

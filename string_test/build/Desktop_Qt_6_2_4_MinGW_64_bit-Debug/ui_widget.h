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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGroupBox *groupBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Pushbutton_frontback;
    QPushButton *pushButton_leftright;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_fristlast;
    QPushButton *pushButton_section;
    QGroupBox *groupBox_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_Nullempty;
    QPushButton *pushButton_resize;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_size;
    QPushButton *pushButton_fill;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_index;
    QPushButton *pushButton_contains;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_endstrtswith;
    QPushButton *pushButton_count;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_trimmed;
    QPushButton *pushButton_inserts;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_replace;
    QFrame *frame_2;
    QGroupBox *groupBox_5;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_str1;
    QComboBox *comboBox_str2;
    QSpinBox *spinBox_num;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_clear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(799, 545);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 10, 691, 511));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 301, 101));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 20, 291, 71));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Pushbutton_frontback = new QPushButton(widget1);
        Pushbutton_frontback->setObjectName(QString::fromUtf8("Pushbutton_frontback"));

        horizontalLayout_2->addWidget(Pushbutton_frontback);

        pushButton_leftright = new QPushButton(widget1);
        pushButton_leftright->setObjectName(QString::fromUtf8("pushButton_leftright"));

        horizontalLayout_2->addWidget(pushButton_leftright);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_fristlast = new QPushButton(widget1);
        pushButton_fristlast->setObjectName(QString::fromUtf8("pushButton_fristlast"));

        horizontalLayout_3->addWidget(pushButton_fristlast);

        pushButton_section = new QPushButton(widget1);
        pushButton_section->setObjectName(QString::fromUtf8("pushButton_section"));

        horizontalLayout_3->addWidget(pushButton_section);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 130, 301, 111));
        widget2 = new QWidget(groupBox_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 20, 281, 71));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_Nullempty = new QPushButton(widget2);
        pushButton_Nullempty->setObjectName(QString::fromUtf8("pushButton_Nullempty"));

        horizontalLayout_4->addWidget(pushButton_Nullempty);

        pushButton_resize = new QPushButton(widget2);
        pushButton_resize->setObjectName(QString::fromUtf8("pushButton_resize"));

        horizontalLayout_4->addWidget(pushButton_resize);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_size = new QPushButton(widget2);
        pushButton_size->setObjectName(QString::fromUtf8("pushButton_size"));

        horizontalLayout_5->addWidget(pushButton_size);

        pushButton_fill = new QPushButton(widget2);
        pushButton_fill->setObjectName(QString::fromUtf8("pushButton_fill"));

        horizontalLayout_5->addWidget(pushButton_fill);


        verticalLayout_2->addLayout(horizontalLayout_5);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 250, 301, 111));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 281, 81));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_index = new QPushButton(layoutWidget);
        pushButton_index->setObjectName(QString::fromUtf8("pushButton_index"));

        horizontalLayout_6->addWidget(pushButton_index);

        pushButton_contains = new QPushButton(layoutWidget);
        pushButton_contains->setObjectName(QString::fromUtf8("pushButton_contains"));

        horizontalLayout_6->addWidget(pushButton_contains);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_endstrtswith = new QPushButton(layoutWidget);
        pushButton_endstrtswith->setObjectName(QString::fromUtf8("pushButton_endstrtswith"));

        horizontalLayout_7->addWidget(pushButton_endstrtswith);

        pushButton_count = new QPushButton(layoutWidget);
        pushButton_count->setObjectName(QString::fromUtf8("pushButton_count"));

        horizontalLayout_7->addWidget(pushButton_count);


        verticalLayout_3->addLayout(horizontalLayout_7);

        groupBox_4 = new QGroupBox(frame);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 370, 301, 111));
        layoutWidget_2 = new QWidget(groupBox_4);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 281, 81));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_trimmed = new QPushButton(layoutWidget_2);
        pushButton_trimmed->setObjectName(QString::fromUtf8("pushButton_trimmed"));

        horizontalLayout_8->addWidget(pushButton_trimmed);

        pushButton_inserts = new QPushButton(layoutWidget_2);
        pushButton_inserts->setObjectName(QString::fromUtf8("pushButton_inserts"));

        horizontalLayout_8->addWidget(pushButton_inserts);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_remove = new QPushButton(layoutWidget_2);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));

        horizontalLayout_9->addWidget(pushButton_remove);

        pushButton_replace = new QPushButton(layoutWidget_2);
        pushButton_replace->setObjectName(QString::fromUtf8("pushButton_replace"));

        horizontalLayout_9->addWidget(pushButton_replace);


        verticalLayout_4->addLayout(horizontalLayout_9);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(340, 30, 331, 451));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        groupBox_5 = new QGroupBox(frame_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 311, 111));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 69, 19));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 69, 19));
        comboBox_str1 = new QComboBox(groupBox_5);
        comboBox_str1->addItem(QString());
        comboBox_str1->setObjectName(QString::fromUtf8("comboBox_str1"));
        comboBox_str1->setGeometry(QRect(90, 20, 201, 21));
        comboBox_str2 = new QComboBox(groupBox_5);
        comboBox_str2->addItem(QString());
        comboBox_str2->setObjectName(QString::fromUtf8("comboBox_str2"));
        comboBox_str2->setGeometry(QRect(90, 60, 87, 25));
        spinBox_num = new QSpinBox(groupBox_5);
        spinBox_num->setObjectName(QString::fromUtf8("spinBox_num"));
        spinBox_num->setGeometry(QRect(250, 60, 44, 25));
        groupBox_6 = new QGroupBox(frame_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 130, 311, 311));
        pushButton_clear = new QPushButton(groupBox_6);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(10, 20, 281, 31));
        plainTextEdit = new QPlainTextEdit(groupBox_6);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 60, 281, 241));

        horizontalLayout->addWidget(frame);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\210\252\345\217\226", nullptr));
        Pushbutton_frontback->setText(QCoreApplication::translate("Widget", "front&back", nullptr));
        pushButton_leftright->setText(QCoreApplication::translate("Widget", "leftright", nullptr));
        pushButton_fristlast->setText(QCoreApplication::translate("Widget", "firstlast", nullptr));
        pushButton_section->setText(QCoreApplication::translate("Widget", "section*", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\255\230\345\202\250\347\233\270\345\205\263", nullptr));
        pushButton_Nullempty->setText(QCoreApplication::translate("Widget", "isNULLorempty", nullptr));
        pushButton_resize->setText(QCoreApplication::translate("Widget", "resize", nullptr));
        pushButton_size->setText(QCoreApplication::translate("Widget", "sizeandlen", nullptr));
        pushButton_fill->setText(QCoreApplication::translate("Widget", "fill", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\220\234\347\264\242\344\270\216\345\210\244\346\226\255", nullptr));
        pushButton_index->setText(QCoreApplication::translate("Widget", "index", nullptr));
        pushButton_contains->setText(QCoreApplication::translate("Widget", "contains", nullptr));
        pushButton_endstrtswith->setText(QCoreApplication::translate("Widget", "endwith||startswith", nullptr));
        pushButton_count->setText(QCoreApplication::translate("Widget", "count", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\345\222\214\344\277\256\346\224\271", nullptr));
        pushButton_trimmed->setText(QCoreApplication::translate("Widget", "trimmed", nullptr));
        pushButton_inserts->setText(QCoreApplication::translate("Widget", "inserts", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        pushButton_replace->setText(QCoreApplication::translate("Widget", "replace", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "str1", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "str2", nullptr));
        comboBox_str1->setItemText(0, QCoreApplication::translate("Widget", "C:\\QT82625\\xaom.md", nullptr));

        comboBox_str2->setItemText(0, QCoreApplication::translate("Widget", "\\", nullptr));

        groupBox_6->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Widget", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

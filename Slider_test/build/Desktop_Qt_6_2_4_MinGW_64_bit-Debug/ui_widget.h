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
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QSlider *horizontalSlider;
    QScrollBar *horizontalScrollBar;
    QLabel *label;
    QLabel *label_2;
    QDial *dial;
    QGroupBox *groupBox_2;
    QProgressBar *progressBar;
    QLabel *label_3;
    QCheckBox *checkBox_textvisible;
    QCheckBox *checkBox_inverteappearance;
    QRadioButton *radioButton_prefence;
    QRadioButton *radioButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(679, 329);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(240, 30, 331, 22));
        horizontalSlider->setSliderPosition(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalScrollBar = new QScrollBar(groupBox);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(240, 80, 331, 20));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 30, 69, 19));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 80, 69, 19));
        dial = new QDial(groupBox);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(20, 40, 121, 81));
        dial->setNotchesVisible(true);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(120, 50, 481, 23));
        progressBar->setValue(24);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 50, 69, 19));
        checkBox_textvisible = new QCheckBox(groupBox_2);
        checkBox_textvisible->setObjectName(QString::fromUtf8("checkBox_textvisible"));
        checkBox_textvisible->setGeometry(QRect(70, 90, 98, 23));
        checkBox_inverteappearance = new QCheckBox(groupBox_2);
        checkBox_inverteappearance->setObjectName(QString::fromUtf8("checkBox_inverteappearance"));
        checkBox_inverteappearance->setGeometry(QRect(460, 90, 161, 23));
        radioButton_prefence = new QRadioButton(groupBox_2);
        radioButton_prefence->setObjectName(QString::fromUtf8("radioButton_prefence"));
        radioButton_prefence->setGeometry(QRect(70, 120, 118, 23));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(460, 120, 118, 23));

        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\346\235\241", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\267\346\273\232\346\235\241", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "QprogressBar\347\232\204\346\230\276\347\244\272\345\222\214\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\233\345\272\246\346\235\241", nullptr));
        checkBox_textvisible->setText(QCoreApplication::translate("Widget", "textvisible", nullptr));
        checkBox_inverteappearance->setText(QCoreApplication::translate("Widget", "inverteappearance", nullptr));
        radioButton_prefence->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\347\231\276\345\210\206\346\257\224", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\345\275\223\345\211\215\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

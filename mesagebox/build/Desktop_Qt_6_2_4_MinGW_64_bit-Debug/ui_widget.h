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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton_openfile;
    QPushButton *pushButton_openfiles;
    QPushButton *pushButton_choosedir;
    QPushButton *pushButton_savefile;
    QPushButton *pushButton_choosecolor;
    QPushButton *pushButton_choosefont;
    QPushButton *pushButton_process;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_question;
    QPushButton *pushButton_information;
    QPushButton *pushButton_warning;
    QPushButton *pushButton_critical;
    QPushButton *pushButton_about;
    QPushButton *pushButton_aboutQt;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_inputString;
    QPushButton *pushButton_inputInt;
    QPushButton *pushButton_inputfloat;
    QPushButton *pushButton_chooseItems;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_clearcontent;
    QPushButton *pushButton_quit;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        gridLayout_5 = new QGridLayout(Widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_openfile = new QPushButton(groupBox);
        pushButton_openfile->setObjectName(QString::fromUtf8("pushButton_openfile"));

        gridLayout->addWidget(pushButton_openfile, 0, 0, 1, 1);

        pushButton_openfiles = new QPushButton(groupBox);
        pushButton_openfiles->setObjectName(QString::fromUtf8("pushButton_openfiles"));

        gridLayout->addWidget(pushButton_openfiles, 0, 1, 1, 1);

        pushButton_choosedir = new QPushButton(groupBox);
        pushButton_choosedir->setObjectName(QString::fromUtf8("pushButton_choosedir"));

        gridLayout->addWidget(pushButton_choosedir, 1, 0, 1, 1);

        pushButton_savefile = new QPushButton(groupBox);
        pushButton_savefile->setObjectName(QString::fromUtf8("pushButton_savefile"));

        gridLayout->addWidget(pushButton_savefile, 1, 1, 1, 1);

        pushButton_choosecolor = new QPushButton(groupBox);
        pushButton_choosecolor->setObjectName(QString::fromUtf8("pushButton_choosecolor"));

        gridLayout->addWidget(pushButton_choosecolor, 2, 0, 1, 1);

        pushButton_choosefont = new QPushButton(groupBox);
        pushButton_choosefont->setObjectName(QString::fromUtf8("pushButton_choosefont"));

        gridLayout->addWidget(pushButton_choosefont, 2, 1, 1, 1);

        pushButton_process = new QPushButton(groupBox);
        pushButton_process->setObjectName(QString::fromUtf8("pushButton_process"));

        gridLayout->addWidget(pushButton_process, 3, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_question = new QPushButton(groupBox_2);
        pushButton_question->setObjectName(QString::fromUtf8("pushButton_question"));

        gridLayout_2->addWidget(pushButton_question, 0, 0, 1, 1);

        pushButton_information = new QPushButton(groupBox_2);
        pushButton_information->setObjectName(QString::fromUtf8("pushButton_information"));

        gridLayout_2->addWidget(pushButton_information, 0, 1, 1, 1);

        pushButton_warning = new QPushButton(groupBox_2);
        pushButton_warning->setObjectName(QString::fromUtf8("pushButton_warning"));

        gridLayout_2->addWidget(pushButton_warning, 1, 0, 1, 1);

        pushButton_critical = new QPushButton(groupBox_2);
        pushButton_critical->setObjectName(QString::fromUtf8("pushButton_critical"));

        gridLayout_2->addWidget(pushButton_critical, 1, 1, 1, 1);

        pushButton_about = new QPushButton(groupBox_2);
        pushButton_about->setObjectName(QString::fromUtf8("pushButton_about"));

        gridLayout_2->addWidget(pushButton_about, 2, 0, 1, 1);

        pushButton_aboutQt = new QPushButton(groupBox_2);
        pushButton_aboutQt->setObjectName(QString::fromUtf8("pushButton_aboutQt"));

        gridLayout_2->addWidget(pushButton_aboutQt, 2, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_inputString = new QPushButton(groupBox_3);
        pushButton_inputString->setObjectName(QString::fromUtf8("pushButton_inputString"));

        gridLayout_3->addWidget(pushButton_inputString, 0, 0, 1, 1);

        pushButton_inputInt = new QPushButton(groupBox_3);
        pushButton_inputInt->setObjectName(QString::fromUtf8("pushButton_inputInt"));

        gridLayout_3->addWidget(pushButton_inputInt, 0, 1, 1, 1);

        pushButton_inputfloat = new QPushButton(groupBox_3);
        pushButton_inputfloat->setObjectName(QString::fromUtf8("pushButton_inputfloat"));

        gridLayout_3->addWidget(pushButton_inputfloat, 1, 0, 1, 1);

        pushButton_chooseItems = new QPushButton(groupBox_3);
        pushButton_chooseItems->setObjectName(QString::fromUtf8("pushButton_chooseItems"));

        gridLayout_3->addWidget(pushButton_chooseItems, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_clearcontent = new QPushButton(groupBox_4);
        pushButton_clearcontent->setObjectName(QString::fromUtf8("pushButton_clearcontent"));

        gridLayout_4->addWidget(pushButton_clearcontent, 0, 0, 1, 1);

        pushButton_quit = new QPushButton(groupBox_4);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));

        gridLayout_4->addWidget(pushButton_quit, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_5->addWidget(plainTextEdit, 2, 0, 1, 2);


        retranslateUi(Widget);
        QObject::connect(pushButton_quit, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\240\207\345\207\206\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_openfile->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        pushButton_openfiles->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", nullptr));
        pushButton_choosedir->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\345\267\262\346\234\211\347\233\256\345\275\225", nullptr));
        pushButton_savefile->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        pushButton_choosecolor->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        pushButton_choosefont->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\345\255\227\344\275\223", nullptr));
        pushButton_process->setText(QCoreApplication::translate("Widget", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\240\207\345\207\206\346\266\210\346\201\257\346\241\206QMessageBox", nullptr));
        pushButton_question->setText(QCoreApplication::translate("Widget", "question", nullptr));
        pushButton_information->setText(QCoreApplication::translate("Widget", "information", nullptr));
        pushButton_warning->setText(QCoreApplication::translate("Widget", "warning", nullptr));
        pushButton_critical->setText(QCoreApplication::translate("Widget", "critical", nullptr));
        pushButton_about->setText(QCoreApplication::translate("Widget", "about", nullptr));
        pushButton_aboutQt->setText(QCoreApplication::translate("Widget", "aboutQt", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\240\207\345\207\206\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206QinputDialog", nullptr));
        pushButton_inputString->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        pushButton_inputInt->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\346\225\264\346\225\260", nullptr));
        pushButton_inputfloat->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\346\265\256\347\202\271\346\225\260", nullptr));
        pushButton_chooseItems->setText(QCoreApplication::translate("Widget", "\346\235\241\347\233\256\351\200\211\346\213\251\350\276\223\345\205\245", nullptr));
        groupBox_4->setTitle(QString());
        pushButton_clearcontent->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

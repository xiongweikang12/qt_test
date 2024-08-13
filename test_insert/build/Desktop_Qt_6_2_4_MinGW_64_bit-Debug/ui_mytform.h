/********************************************************************************
** Form generated from reading UI file 'mytform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTFORM_H
#define UI_MYTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTForm
{
public:
    QAction *actionopen;
    QAction *actionsetfont;
    QAction *actioncut;
    QAction *actioncopy;
    QAction *actionredo;
    QAction *actioncancel;
    QAction *actionclose_widget;
    QAction *actionpaser;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *MyTForm)
    {
        if (MyTForm->objectName().isEmpty())
            MyTForm->setObjectName(QString::fromUtf8("MyTForm"));
        MyTForm->resize(494, 332);
        actionopen = new QAction(MyTForm);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionopen->setMenuRole(QAction::NoRole);
        actionsetfont = new QAction(MyTForm);
        actionsetfont->setObjectName(QString::fromUtf8("actionsetfont"));
        actionsetfont->setMenuRole(QAction::NoRole);
        actioncut = new QAction(MyTForm);
        actioncut->setObjectName(QString::fromUtf8("actioncut"));
        actioncut->setMenuRole(QAction::NoRole);
        actioncopy = new QAction(MyTForm);
        actioncopy->setObjectName(QString::fromUtf8("actioncopy"));
        actioncopy->setMenuRole(QAction::NoRole);
        actionredo = new QAction(MyTForm);
        actionredo->setObjectName(QString::fromUtf8("actionredo"));
        actionredo->setMenuRole(QAction::NoRole);
        actioncancel = new QAction(MyTForm);
        actioncancel->setObjectName(QString::fromUtf8("actioncancel"));
        actioncancel->setMenuRole(QAction::NoRole);
        actionclose_widget = new QAction(MyTForm);
        actionclose_widget->setObjectName(QString::fromUtf8("actionclose_widget"));
        actionclose_widget->setMenuRole(QAction::NoRole);
        actionpaser = new QAction(MyTForm);
        actionpaser->setObjectName(QString::fromUtf8("actionpaser"));
        actionpaser->setMenuRole(QAction::NoRole);
        plainTextEdit = new QPlainTextEdit(MyTForm);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 40, 471, 281));

        retranslateUi(MyTForm);
        QObject::connect(actioncut, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::cut));
        QObject::connect(actioncopy, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::copy));
        QObject::connect(actioncancel, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::undo));
        QObject::connect(actionpaser, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::paste));
        QObject::connect(actionredo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::redo));
        QObject::connect(actionclose_widget, &QAction::triggered, MyTForm, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(MyTForm);
    } // setupUi

    void retranslateUi(QWidget *MyTForm)
    {
        MyTForm->setWindowTitle(QCoreApplication::translate("MyTForm", "Form", nullptr));
        actionopen->setText(QCoreApplication::translate("MyTForm", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actionsetfont->setText(QCoreApplication::translate("MyTForm", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        actioncut->setText(QCoreApplication::translate("MyTForm", "\345\211\252\345\210\207", nullptr));
        actioncopy->setText(QCoreApplication::translate("MyTForm", "\345\244\215\345\210\266", nullptr));
        actionredo->setText(QCoreApplication::translate("MyTForm", "\351\207\215\345\244\215", nullptr));
        actioncancel->setText(QCoreApplication::translate("MyTForm", "\346\222\244\351\224\200", nullptr));
        actionclose_widget->setText(QCoreApplication::translate("MyTForm", "\345\205\263\351\227\255", nullptr));
        actionpaser->setText(QCoreApplication::translate("MyTForm", "\351\273\217\350\264\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTForm: public Ui_MyTForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTFORM_H

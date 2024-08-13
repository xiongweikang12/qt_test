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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QAction *actionclear_edit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_setlinenum;
    QSpinBox *spinBox_linenum;
    QPushButton *pushButton_inittabledata;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_insertline;
    QPushButton *pushButton_addline;
    QPushButton *pushButton_delectline;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_autolineH;
    QPushButton *pushButton_autorowW;
    QPushButton *pushButton_readtoText;
    QCheckBox *checkBox_tableeditable;
    QCheckBox *checkBox_linebgcolor;
    QCheckBox *checkBox_HshowtableHeader;
    QCheckBox *checkBox_VshowtableHeader;
    QRadioButton *radioButton_chooseline;
    QRadioButton *radioButton_choosetableitem;
    QPushButton *pushButton_settableHeader;
    QPushButton *pushButton_clearplainedit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget_status;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(771, 565);
        actionclear_edit = new QAction(Widget);
        actionclear_edit->setObjectName(QString::fromUtf8("actionclear_edit"));
        actionclear_edit->setMenuRole(QAction::NoRole);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 271, 471));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_setlinenum = new QPushButton(groupBox);
        pushButton_setlinenum->setObjectName(QString::fromUtf8("pushButton_setlinenum"));

        horizontalLayout->addWidget(pushButton_setlinenum);

        spinBox_linenum = new QSpinBox(groupBox);
        spinBox_linenum->setObjectName(QString::fromUtf8("spinBox_linenum"));

        horizontalLayout->addWidget(spinBox_linenum);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        pushButton_inittabledata = new QPushButton(groupBox);
        pushButton_inittabledata->setObjectName(QString::fromUtf8("pushButton_inittabledata"));

        gridLayout->addWidget(pushButton_inittabledata, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_insertline = new QPushButton(groupBox);
        pushButton_insertline->setObjectName(QString::fromUtf8("pushButton_insertline"));

        horizontalLayout_2->addWidget(pushButton_insertline);

        pushButton_addline = new QPushButton(groupBox);
        pushButton_addline->setObjectName(QString::fromUtf8("pushButton_addline"));

        horizontalLayout_2->addWidget(pushButton_addline);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        pushButton_delectline = new QPushButton(groupBox);
        pushButton_delectline->setObjectName(QString::fromUtf8("pushButton_delectline"));

        gridLayout->addWidget(pushButton_delectline, 4, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_autolineH = new QPushButton(groupBox);
        pushButton_autolineH->setObjectName(QString::fromUtf8("pushButton_autolineH"));

        horizontalLayout_3->addWidget(pushButton_autolineH);

        pushButton_autorowW = new QPushButton(groupBox);
        pushButton_autorowW->setObjectName(QString::fromUtf8("pushButton_autorowW"));

        horizontalLayout_3->addWidget(pushButton_autorowW);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 2);

        pushButton_readtoText = new QPushButton(groupBox);
        pushButton_readtoText->setObjectName(QString::fromUtf8("pushButton_readtoText"));

        gridLayout->addWidget(pushButton_readtoText, 6, 0, 1, 2);

        checkBox_tableeditable = new QCheckBox(groupBox);
        checkBox_tableeditable->setObjectName(QString::fromUtf8("checkBox_tableeditable"));

        gridLayout->addWidget(checkBox_tableeditable, 7, 0, 1, 1);

        checkBox_linebgcolor = new QCheckBox(groupBox);
        checkBox_linebgcolor->setObjectName(QString::fromUtf8("checkBox_linebgcolor"));

        gridLayout->addWidget(checkBox_linebgcolor, 7, 1, 1, 1);

        checkBox_HshowtableHeader = new QCheckBox(groupBox);
        checkBox_HshowtableHeader->setObjectName(QString::fromUtf8("checkBox_HshowtableHeader"));

        gridLayout->addWidget(checkBox_HshowtableHeader, 8, 0, 1, 1);

        checkBox_VshowtableHeader = new QCheckBox(groupBox);
        checkBox_VshowtableHeader->setObjectName(QString::fromUtf8("checkBox_VshowtableHeader"));

        gridLayout->addWidget(checkBox_VshowtableHeader, 8, 1, 1, 1);

        radioButton_chooseline = new QRadioButton(groupBox);
        radioButton_chooseline->setObjectName(QString::fromUtf8("radioButton_chooseline"));

        gridLayout->addWidget(radioButton_chooseline, 9, 0, 1, 1);

        radioButton_choosetableitem = new QRadioButton(groupBox);
        radioButton_choosetableitem->setObjectName(QString::fromUtf8("radioButton_choosetableitem"));

        gridLayout->addWidget(radioButton_choosetableitem, 9, 1, 1, 1);

        pushButton_settableHeader = new QPushButton(groupBox);
        pushButton_settableHeader->setObjectName(QString::fromUtf8("pushButton_settableHeader"));

        gridLayout->addWidget(pushButton_settableHeader, 0, 0, 1, 1);

        pushButton_clearplainedit = new QPushButton(groupBox);
        pushButton_clearplainedit->setObjectName(QString::fromUtf8("pushButton_clearplainedit"));

        gridLayout->addWidget(pushButton_clearplainedit, 0, 1, 1, 1);

        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 20, 431, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(layoutWidget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        widget_status = new QWidget(Widget);
        widget_status->setObjectName(QString::fromUtf8("widget_status"));
        widget_status->setGeometry(QRect(30, 509, 711, 71));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        actionclear_edit->setText(QCoreApplication::translate("Widget", "clear_edit", nullptr));
        groupBox->setTitle(QString());
        pushButton_setlinenum->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\350\241\214\346\225\260", nullptr));
        pushButton_inittabledata->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        pushButton_insertline->setText(QCoreApplication::translate("Widget", "\346\217\222\345\205\245\350\241\214", nullptr));
        pushButton_addline->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\350\241\214", nullptr));
        pushButton_delectline->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
        pushButton_autolineH->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", nullptr));
        pushButton_autorowW->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", nullptr));
        pushButton_readtoText->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", nullptr));
        checkBox_tableeditable->setText(QCoreApplication::translate("Widget", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        checkBox_linebgcolor->setText(QCoreApplication::translate("Widget", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", nullptr));
        checkBox_HshowtableHeader->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\260\264\345\271\263\350\241\250\345\244\264", nullptr));
        checkBox_VshowtableHeader->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\345\236\202\347\233\264\350\241\250\345\244\264", nullptr));
        radioButton_chooseline->setText(QCoreApplication::translate("Widget", "\350\241\214\351\200\211\346\213\251", nullptr));
        radioButton_choosetableitem->setText(QCoreApplication::translate("Widget", "\345\215\225\345\205\203\351\200\211\346\213\251", nullptr));
        pushButton_settableHeader->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\260\264\345\271\263\350\241\250\345\244\264", nullptr));
        pushButton_clearplainedit->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Widget", "\346\226\260\345\273\272\345\210\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

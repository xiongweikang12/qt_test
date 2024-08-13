/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <listwidget_test.h>
#include <qplainedit_test.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *act_listinit;
    QAction *actlist_clear;
    QAction *actlist_insert;
    QAction *actlist_add;
    QAction *actlist_delete;
    QAction *actionsecl_all;
    QAction *actionsec_singal;
    QAction *actionsecl_None;
    QAction *actionclear_plaintext;
    QAction *actionappend_plaintext;
    QAction *actionclear_linedit;
    QWidget *centralwidget;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QToolButton *tBtnListinit;
    QToolButton *tBtnListclear;
    QToolButton *tBtnListInsert;
    QToolButton *tBtnListadd;
    QWidget *widget;
    QToolButton *toolButton_upsort;
    QToolButton *toolButton_downsort;
    QCheckBox *checkBox;
    QWidget *page_2;
    QToolBox *toolBox_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget1;
    QToolButton *toolButton_upsort_2;
    QToolButton *toolButton_4;
    QCheckBox *checkBox_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_cleartext;
    QToolButton *toolButton_addline;
    QPlainedit_test *plainTextEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Change;
    QCheckBox *checkBox_enabledit;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_selectitem;
    QToolButton *toolButton_selAll;
    QToolButton *toolButton_selNone;
    ListWidget_test *listWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(722, 457);
        act_listinit = new QAction(MainWindow);
        act_listinit->setObjectName(QString::fromUtf8("act_listinit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image1/heart-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_listinit->setIcon(icon);
        act_listinit->setMenuRole(QAction::NoRole);
        actlist_clear = new QAction(MainWindow);
        actlist_clear->setObjectName(QString::fromUtf8("actlist_clear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/image1/scan-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actlist_clear->setIcon(icon1);
        actlist_clear->setMenuRole(QAction::NoRole);
        actlist_insert = new QAction(MainWindow);
        actlist_insert->setObjectName(QString::fromUtf8("actlist_insert"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/image1/down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actlist_insert->setIcon(icon2);
        actlist_insert->setMenuRole(QAction::NoRole);
        actlist_add = new QAction(MainWindow);
        actlist_add->setObjectName(QString::fromUtf8("actlist_add"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/image1/up-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actlist_add->setIcon(icon3);
        actlist_add->setMenuRole(QAction::NoRole);
        actlist_delete = new QAction(MainWindow);
        actlist_delete->setObjectName(QString::fromUtf8("actlist_delete"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/image1/notice-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actlist_delete->setIcon(icon4);
        actlist_delete->setMenuRole(QAction::NoRole);
        actionsecl_all = new QAction(MainWindow);
        actionsecl_all->setObjectName(QString::fromUtf8("actionsecl_all"));
        actionsecl_all->setMenuRole(QAction::NoRole);
        actionsec_singal = new QAction(MainWindow);
        actionsec_singal->setObjectName(QString::fromUtf8("actionsec_singal"));
        actionsec_singal->setMenuRole(QAction::NoRole);
        actionsecl_None = new QAction(MainWindow);
        actionsecl_None->setObjectName(QString::fromUtf8("actionsecl_None"));
        actionsecl_None->setMenuRole(QAction::NoRole);
        actionclear_plaintext = new QAction(MainWindow);
        actionclear_plaintext->setObjectName(QString::fromUtf8("actionclear_plaintext"));
        QFont font;
        font.setPointSize(8);
        actionclear_plaintext->setFont(font);
        actionclear_plaintext->setMenuRole(QAction::NoRole);
        actionappend_plaintext = new QAction(MainWindow);
        actionappend_plaintext->setObjectName(QString::fromUtf8("actionappend_plaintext"));
        actionappend_plaintext->setFont(font);
        actionappend_plaintext->setMenuRole(QAction::NoRole);
        actionclear_linedit = new QAction(MainWindow);
        actionclear_linedit->setObjectName(QString::fromUtf8("actionclear_linedit"));
        actionclear_linedit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setEnabled(true);
        toolBox->setGeometry(QRect(10, 6, 201, 381));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 201, 279));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tBtnListinit = new QToolButton(page);
        tBtnListinit->setObjectName(QString::fromUtf8("tBtnListinit"));
        QFont font1;
        font1.setPointSize(10);
        tBtnListinit->setFont(font1);
        tBtnListinit->setIcon(icon);
        tBtnListinit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListinit->setAutoRaise(true);

        verticalLayout_2->addWidget(tBtnListinit);

        tBtnListclear = new QToolButton(page);
        tBtnListclear->setObjectName(QString::fromUtf8("tBtnListclear"));
        tBtnListclear->setFont(font1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("image1/scan-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBtnListclear->setIcon(icon5);
        tBtnListclear->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListclear->setAutoRaise(true);

        verticalLayout_2->addWidget(tBtnListclear);

        tBtnListInsert = new QToolButton(page);
        tBtnListInsert->setObjectName(QString::fromUtf8("tBtnListInsert"));
        tBtnListInsert->setFont(font1);
        tBtnListInsert->setIcon(icon2);
        tBtnListInsert->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListInsert->setAutoRaise(true);

        verticalLayout_2->addWidget(tBtnListInsert);

        tBtnListadd = new QToolButton(page);
        tBtnListadd->setObjectName(QString::fromUtf8("tBtnListadd"));
        tBtnListadd->setFont(font1);
        tBtnListadd->setIcon(icon3);
        tBtnListadd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tBtnListadd->setAutoRaise(true);

        verticalLayout_2->addWidget(tBtnListadd);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/image1/expand-line-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon6, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234"));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 201, 279));
        toolButton_upsort = new QToolButton(widget);
        toolButton_upsort->setObjectName(QString::fromUtf8("toolButton_upsort"));
        toolButton_upsort->setEnabled(false);
        toolButton_upsort->setGeometry(QRect(30, 10, 121, 25));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        toolButton_upsort->setFont(font2);
        toolButton_upsort->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_upsort->setAutoRaise(false);
        toolButton_upsort->setArrowType(Qt::UpArrow);
        toolButton_downsort = new QToolButton(widget);
        toolButton_downsort->setObjectName(QString::fromUtf8("toolButton_downsort"));
        toolButton_downsort->setEnabled(false);
        toolButton_downsort->setGeometry(QRect(30, 50, 121, 25));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        toolButton_downsort->setFont(font3);
        toolButton_downsort->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_downsort->setArrowType(Qt::DownArrow);
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(37, 90, 111, 23));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/image1/enter-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(widget, icon7, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\216\222\345\272\217"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 201, 279));
        toolBox_2 = new QToolBox(page_2);
        toolBox_2->setObjectName(QString::fromUtf8("toolBox_2"));
        toolBox_2->setEnabled(true);
        toolBox_2->setGeometry(QRect(0, -110, 201, 381));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        toolBox_2->addItem(page_3, icon6, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234"));
        widget1 = new QWidget();
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 0, 100, 30));
        toolButton_upsort_2 = new QToolButton(widget1);
        toolButton_upsort_2->setObjectName(QString::fromUtf8("toolButton_upsort_2"));
        toolButton_upsort_2->setEnabled(false);
        toolButton_upsort_2->setGeometry(QRect(30, 10, 121, 25));
        toolButton_upsort_2->setFont(font2);
        toolButton_upsort_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_upsort_2->setAutoRaise(false);
        toolButton_upsort_2->setArrowType(Qt::UpArrow);
        toolButton_4 = new QToolButton(widget1);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setEnabled(false);
        toolButton_4->setGeometry(QRect(30, 50, 121, 25));
        toolButton_4->setFont(font3);
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_4->setArrowType(Qt::DownArrow);
        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(37, 90, 111, 23));
        toolBox_2->addItem(widget1, icon7, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\216\222\345\272\217"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 201, 279));
        verticalLayout_5 = new QVBoxLayout(page_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        toolButton_cleartext = new QToolButton(page_4);
        toolButton_cleartext->setObjectName(QString::fromUtf8("toolButton_cleartext"));
        toolButton_cleartext->setFont(font);

        horizontalLayout_3->addWidget(toolButton_cleartext);

        toolButton_addline = new QToolButton(page_4);
        toolButton_addline->setObjectName(QString::fromUtf8("toolButton_addline"));
        toolButton_addline->setFont(font);

        horizontalLayout_3->addWidget(toolButton_addline);


        verticalLayout_5->addLayout(horizontalLayout_3);

        plainTextEdit = new QPlainedit_test(page_4);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_5->addWidget(plainTextEdit);

        toolBox_2->addItem(page_4, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));
        toolBox->addItem(page_2, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(220, 10, 491, 381));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Change = new QLineEdit(groupBox);
        lineEdit_Change->setObjectName(QString::fromUtf8("lineEdit_Change"));

        horizontalLayout->addWidget(lineEdit_Change);

        checkBox_enabledit = new QCheckBox(groupBox);
        checkBox_enabledit->setObjectName(QString::fromUtf8("checkBox_enabledit"));

        horizontalLayout->addWidget(checkBox_enabledit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        toolButton_selectitem = new QToolButton(groupBox);
        toolButton_selectitem->setObjectName(QString::fromUtf8("toolButton_selectitem"));
        toolButton_selectitem->setIconSize(QSize(40, 20));
        toolButton_selectitem->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout_2->addWidget(toolButton_selectitem);

        toolButton_selAll = new QToolButton(groupBox);
        toolButton_selAll->setObjectName(QString::fromUtf8("toolButton_selAll"));

        horizontalLayout_2->addWidget(toolButton_selAll);

        toolButton_selNone = new QToolButton(groupBox);
        toolButton_selNone->setObjectName(QString::fromUtf8("toolButton_selNone"));

        horizontalLayout_2->addWidget(toolButton_selNone);


        verticalLayout->addLayout(horizontalLayout_2);

        listWidget = new ListWidget_test(groupBox);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout->addWidget(listWidget);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(act_listinit);
        toolBar->addSeparator();
        toolBar->addAction(actlist_clear);
        toolBar->addSeparator();
        toolBar->addAction(actlist_insert);
        toolBar->addSeparator();
        toolBar->addAction(actlist_add);
        toolBar->addSeparator();
        toolBar->addAction(actlist_delete);
        toolBar->addAction(actionclear_linedit);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(2);
        toolBox_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        act_listinit->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226", nullptr));
        actlist_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        actlist_insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        actlist_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        actlist_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        actionsecl_all->setText(QCoreApplication::translate("MainWindow", "secl_all", nullptr));
        actionsec_singal->setText(QCoreApplication::translate("MainWindow", "sec_singal", nullptr));
        actionsecl_None->setText(QCoreApplication::translate("MainWindow", "secl_None", nullptr));
        actionclear_plaintext->setText(QCoreApplication::translate("MainWindow", "clear_plaintext", nullptr));
        actionappend_plaintext->setText(QCoreApplication::translate("MainWindow", "append_plaintext", nullptr));
        actionclear_linedit->setText(QCoreApplication::translate("MainWindow", "clear_linedit", nullptr));
#if QT_CONFIG(tooltip)
        actionclear_linedit->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\270\205\351\231\244\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226\344\270\255\347\232\204\346\226\207\346\234\254</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tBtnListinit->setText(QCoreApplication::translate("MainWindow", "tBtnListinit", nullptr));
        tBtnListclear->setText(QCoreApplication::translate("MainWindow", "tBtnListclear", nullptr));
        tBtnListInsert->setText(QCoreApplication::translate("MainWindow", "tBtnListInsert", nullptr));
        tBtnListadd->setText(QCoreApplication::translate("MainWindow", "tBtnListadd", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234", nullptr));
        toolButton_upsort->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        toolButton_downsort->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(widget), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\216\222\345\272\217", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_3), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234", nullptr));
        toolButton_upsort_2->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        toolButton_4->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(widget1), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\216\222\345\272\217", nullptr));
        toolButton_cleartext->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\226\207\346\234\254", nullptr));
        toolButton_addline->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\251\272\350\241\214", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        checkBox_enabledit->setText(QCoreApplication::translate("MainWindow", "\351\241\271\345\217\257\347\274\226\350\276\221", nullptr));
        toolButton_selectitem->setText(QCoreApplication::translate("MainWindow", "toolButton_selectitem", nullptr));
        toolButton_selAll->setText(QCoreApplication::translate("MainWindow", "toolButton_selAll", nullptr));
        toolButton_selNone->setText(QCoreApplication::translate("MainWindow", "toolButton_selNone", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "jixnanx", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "axaxmnakxm", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

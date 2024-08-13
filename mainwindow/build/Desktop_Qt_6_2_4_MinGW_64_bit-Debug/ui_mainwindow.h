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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actFile_New;
    QAction *actFile_open;
    QAction *actFile_save;
    QAction *actFile_cut;
    QAction *actedit_cancel;
    QAction *actformat_bold;
    QAction *actfont_zn;
    QAction *actfont_en;
    QAction *action_close;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_M;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(809, 557);
        actFile_New = new QAction(MainWindow);
        actFile_New->setObjectName(QString::fromUtf8("actFile_New"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image1/copy-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_New->setIcon(icon);
        actFile_New->setMenuRole(QAction::NoRole);
        actFile_open = new QAction(MainWindow);
        actFile_open->setObjectName(QString::fromUtf8("actFile_open"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/image1/scan-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_open->setIcon(icon1);
        actFile_open->setMenuRole(QAction::NoRole);
        actFile_save = new QAction(MainWindow);
        actFile_save->setObjectName(QString::fromUtf8("actFile_save"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/image1/heart-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_save->setIcon(icon2);
        actFile_save->setMenuRole(QAction::NoRole);
        actFile_cut = new QAction(MainWindow);
        actFile_cut->setObjectName(QString::fromUtf8("actFile_cut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/image1/enter-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_cut->setIcon(icon3);
        actFile_cut->setMenuRole(QAction::NoRole);
        actedit_cancel = new QAction(MainWindow);
        actedit_cancel->setObjectName(QString::fromUtf8("actedit_cancel"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/image1/expand-line-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actedit_cancel->setIcon(icon4);
        actedit_cancel->setMenuRole(QAction::NoRole);
        actformat_bold = new QAction(MainWindow);
        actformat_bold->setObjectName(QString::fromUtf8("actformat_bold"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/image1/notice-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actformat_bold->setIcon(icon5);
        actformat_bold->setMenuRole(QAction::NoRole);
        actfont_zn = new QAction(MainWindow);
        actfont_zn->setObjectName(QString::fromUtf8("actfont_zn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/image1/down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actfont_zn->setIcon(icon6);
        actfont_zn->setMenuRole(QAction::NoRole);
        actfont_en = new QAction(MainWindow);
        actfont_en->setObjectName(QString::fromUtf8("actfont_en"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/image1/up-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actfont_en->setIcon(icon7);
        actfont_en->setMenuRole(QAction::NoRole);
        action_close = new QAction(MainWindow);
        action_close->setObjectName(QString::fromUtf8("action_close"));
        action_close->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QFont font;
        font.setBold(false);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 809, 25));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_M = new QMenu(menubar);
        menu_M->setObjectName(QString::fromUtf8("menu_M"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_M->menuAction());
        menu_F->addAction(actFile_New);
        menu_F->addSeparator();
        menu_F->addAction(actFile_open);
        menu_F->addSeparator();
        menu_F->addAction(actFile_save);
        menu_E->addAction(actFile_cut);
        menu_E->addAction(actedit_cancel);
        menu_E->addSeparator();
        menu_M->addAction(actformat_bold);
        toolBar->addAction(actFile_New);
        toolBar->addAction(actFile_open);
        toolBar->addAction(actFile_save);
        toolBar->addSeparator();
        toolBar->addAction(actFile_cut);
        toolBar->addAction(actedit_cancel);
        toolBar->addSeparator();
        toolBar->addAction(actformat_bold);
        toolBar->addSeparator();
        toolBar->addAction(actfont_zn);
        toolBar->addAction(actfont_en);
        toolBar->addAction(action_close);

        retranslateUi(MainWindow);
        QObject::connect(actFile_cut, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::cut));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actFile_New->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actFile_New->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actFile_New->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(shortcut)
        actFile_open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(shortcut)
        actFile_save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actFile_cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
        actedit_cancel->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        actformat_bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
        actfont_zn->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
        actfont_en->setText(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
        action_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", " QDateTime current_time=QDateTime::currentDateTime(); \n"
"      //\350\216\267\345\217\226\345\275\223\345\211\215\346\227\266\351\227\264\n"
"    QTime time_1(13,24,5);\n"
"    //\345\257\271\345\272\224\347\232\204\346\236\204\351\200\240\345\207\275\346\225\260 \346\227\266-\345\210\206-\347\247\222\n"
"    QString str=time_1.toString(\"hh:mm:ss\");\n"
"    //\350\275\254\346\215\242\346\210\220\345\257\271\345\272\224\345\255\227\347\254\246\344\270\262\347\232\204\346\210\220\345\221\230\345\207\275\346\225\260toString(const char* format) //\345\257\271\345\272\224\346\240\274\345\274\217\n"
"    ui->timeEdit_time->setTime(current_time.time());\n"
"    ui->dateEdit_data->setDate(current_time.date());\n"
"    //\351\200\232\350\277\207\345\205\266\345\257\271\350\261\241\345\217\257\344\273\245\350\260\203\347\224\250\350\216\267\345\276\227datatime->,data time ,datatime ,time->hour,mintus...\n"
"    \n"
"    //\345\205\266\345\257\271\345\272\224\347\232\204\346\216\247\344\273\266\346\216\245\345\217\227"
                        "\345\257\271\345\272\224\347\232\204\347\261\273\n"
"    //\350\200\214lineedit \345\217\252\346\216\245\346\224\266QString\347\261\273\345\236\213\347\232\204\n"
"    ui->lineEdit_timedate->setText(current_time.toString(\"yyyy-MM-dd hh:mm:ss\"));\n"
"\n"
"    qDebug(\"Dtime1.time()=%s\",str.toLocal8Bit().data()); //\350\275\254\346\215\242\344\270\272Qbtyearry->data\n"
"    Qstring ->tolocal8bit->Qbtyearry\n"
"\n"
"     QString str=ui->calendarWidget->selectedDate().toString(\"yyyy\345\271\264M\346\234\210dd\346\227\245\");\n"
"     //calendarWidget\347\232\204\345\261\236\346\200\247,\350\277\224\345\233\236\351\200\211\346\213\251\347\232\204Qdata \347\261\273\344\274\274\344\272\216value \n"
"", nullptr));
        label->setText(QString());
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210&E\357\274\211", nullptr));
        menu_M->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217\357\274\210&M\357\274\211", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

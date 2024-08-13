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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QToolBox *toolBox_QCoreApplication;
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Dirpath;
    QPushButton *pushButton_FilePath;
    QPushButton *pushButton_appName;
    QPushButton *pushButton_setappName;
    QPushButton *pushButton_librayPaths;
    QPushButton *pushButton_organizationName;
    QPushButton *pushButton_exit;
    QWidget *page_2;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *pushButton_copys;
    QPushButton *pushButton_existss;
    QPushButton *pushButton_removes;
    QPushButton *pushButton_renames;
    QPushButton *pushButton_moveToTrashs;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_copy;
    QPushButton *pushButton_exists;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_rename;
    QPushButton *pushButton_moveToTrash;
    QWidget *page_3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_absoluteFilepath;
    QPushButton *pushButton_absolutePath;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_fileName;
    QPushButton *pushButton_filepath;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_size;
    QPushButton *pushButton_path;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_baseName;
    QPushButton *pushButton_completeBaseName;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_suffix;
    QPushButton *pushButton_completeBaseName_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_isDir;
    QPushButton *pushButton_isFile;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_isExecutable;
    QPushButton *pushButton_birthTime;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_lastModified;
    QPushButton *pushButton_lastRead;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_exists_s;
    QPushButton *pushButton_exists_2;
    QWidget *page;
    QGroupBox *groupBox_6;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_tempPath;
    QPushButton *pushButton_rootPath;
    QPushButton *pushButton_homepath;
    QPushButton *pushButton_drives;
    QPushButton *pushButton_currentPath;
    QPushButton *pushButton_setCurrent;
    QGroupBox *groupBox_7;
    QWidget *widget2;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_mkdir;
    QPushButton *pushButton_rmdir;
    QPushButton *pushButton_remove_2;
    QPushButton *pushButton_rename_2;
    QPushButton *pushButton_SetPath;
    QPushButton *pushButton_removeRecursively;
    QWidget *page_4;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_temptemp;
    QPushButton *pushButton_diytemp;
    QPushButton *pushButton_currenttemp;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_add;
    QPushButton *pushButton_remove_3;
    QPushButton *pushButton_direct;
    QPushButton *pushButton_files;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_openfile;
    QPushButton *pushButton_openDir;
    QPushButton *pushButton_cleartext;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_dirpath;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_filepath;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(788, 597);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 581));
        toolBox_QCoreApplication = new QToolBox(groupBox);
        toolBox_QCoreApplication->setObjectName(QString::fromUtf8("toolBox_QCoreApplication"));
        toolBox_QCoreApplication->setGeometry(QRect(10, 10, 281, 531));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 281, 293));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 271, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Dirpath = new QPushButton(layoutWidget);
        pushButton_Dirpath->setObjectName(QString::fromUtf8("pushButton_Dirpath"));

        verticalLayout->addWidget(pushButton_Dirpath);

        pushButton_FilePath = new QPushButton(layoutWidget);
        pushButton_FilePath->setObjectName(QString::fromUtf8("pushButton_FilePath"));

        verticalLayout->addWidget(pushButton_FilePath);

        pushButton_appName = new QPushButton(layoutWidget);
        pushButton_appName->setObjectName(QString::fromUtf8("pushButton_appName"));

        verticalLayout->addWidget(pushButton_appName);

        pushButton_setappName = new QPushButton(layoutWidget);
        pushButton_setappName->setObjectName(QString::fromUtf8("pushButton_setappName"));

        verticalLayout->addWidget(pushButton_setappName);

        pushButton_librayPaths = new QPushButton(layoutWidget);
        pushButton_librayPaths->setObjectName(QString::fromUtf8("pushButton_librayPaths"));

        verticalLayout->addWidget(pushButton_librayPaths);

        pushButton_organizationName = new QPushButton(layoutWidget);
        pushButton_organizationName->setObjectName(QString::fromUtf8("pushButton_organizationName"));

        verticalLayout->addWidget(pushButton_organizationName);

        pushButton_exit = new QPushButton(layoutWidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        verticalLayout->addWidget(pushButton_exit);

        toolBox_QCoreApplication->addItem(widget, QString::fromUtf8("QCoreApplication"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 281, 293));
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 281, 141));
        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 261, 111));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_copys = new QPushButton(layoutWidget1);
        pushButton_copys->setObjectName(QString::fromUtf8("pushButton_copys"));

        gridLayout->addWidget(pushButton_copys, 0, 0, 1, 1);

        pushButton_existss = new QPushButton(layoutWidget1);
        pushButton_existss->setObjectName(QString::fromUtf8("pushButton_existss"));

        gridLayout->addWidget(pushButton_existss, 0, 1, 1, 1);

        pushButton_removes = new QPushButton(layoutWidget1);
        pushButton_removes->setObjectName(QString::fromUtf8("pushButton_removes"));

        gridLayout->addWidget(pushButton_removes, 1, 0, 1, 1);

        pushButton_renames = new QPushButton(layoutWidget1);
        pushButton_renames->setObjectName(QString::fromUtf8("pushButton_renames"));

        gridLayout->addWidget(pushButton_renames, 1, 1, 1, 1);

        pushButton_moveToTrashs = new QPushButton(layoutWidget1);
        pushButton_moveToTrashs->setObjectName(QString::fromUtf8("pushButton_moveToTrashs"));

        gridLayout->addWidget(pushButton_moveToTrashs, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 150, 281, 161));
        layoutWidget2 = new QWidget(groupBox_5);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 261, 111));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_copy = new QPushButton(layoutWidget2);
        pushButton_copy->setObjectName(QString::fromUtf8("pushButton_copy"));

        gridLayout_2->addWidget(pushButton_copy, 0, 0, 1, 1);

        pushButton_exists = new QPushButton(layoutWidget2);
        pushButton_exists->setObjectName(QString::fromUtf8("pushButton_exists"));

        gridLayout_2->addWidget(pushButton_exists, 0, 1, 1, 1);

        pushButton_remove = new QPushButton(layoutWidget2);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));

        gridLayout_2->addWidget(pushButton_remove, 1, 0, 1, 1);

        pushButton_rename = new QPushButton(layoutWidget2);
        pushButton_rename->setObjectName(QString::fromUtf8("pushButton_rename"));

        gridLayout_2->addWidget(pushButton_rename, 1, 1, 1, 1);

        pushButton_moveToTrash = new QPushButton(layoutWidget2);
        pushButton_moveToTrash->setObjectName(QString::fromUtf8("pushButton_moveToTrash"));

        gridLayout_2->addWidget(pushButton_moveToTrash, 2, 0, 1, 1);

        toolBox_QCoreApplication->addItem(page_2, QString::fromUtf8("QFile"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 281, 293));
        layoutWidget3 = new QWidget(page_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 281, 328));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_absoluteFilepath = new QPushButton(layoutWidget3);
        pushButton_absoluteFilepath->setObjectName(QString::fromUtf8("pushButton_absoluteFilepath"));

        horizontalLayout_5->addWidget(pushButton_absoluteFilepath);

        pushButton_absolutePath = new QPushButton(layoutWidget3);
        pushButton_absolutePath->setObjectName(QString::fromUtf8("pushButton_absolutePath"));

        horizontalLayout_5->addWidget(pushButton_absolutePath);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_fileName = new QPushButton(layoutWidget3);
        pushButton_fileName->setObjectName(QString::fromUtf8("pushButton_fileName"));

        horizontalLayout_6->addWidget(pushButton_fileName);

        pushButton_filepath = new QPushButton(layoutWidget3);
        pushButton_filepath->setObjectName(QString::fromUtf8("pushButton_filepath"));

        horizontalLayout_6->addWidget(pushButton_filepath);


        gridLayout_3->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_size = new QPushButton(layoutWidget3);
        pushButton_size->setObjectName(QString::fromUtf8("pushButton_size"));

        horizontalLayout_7->addWidget(pushButton_size);

        pushButton_path = new QPushButton(layoutWidget3);
        pushButton_path->setObjectName(QString::fromUtf8("pushButton_path"));

        horizontalLayout_7->addWidget(pushButton_path);


        gridLayout_3->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_baseName = new QPushButton(layoutWidget3);
        pushButton_baseName->setObjectName(QString::fromUtf8("pushButton_baseName"));

        horizontalLayout_8->addWidget(pushButton_baseName);

        pushButton_completeBaseName = new QPushButton(layoutWidget3);
        pushButton_completeBaseName->setObjectName(QString::fromUtf8("pushButton_completeBaseName"));

        horizontalLayout_8->addWidget(pushButton_completeBaseName);


        gridLayout_3->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_suffix = new QPushButton(layoutWidget3);
        pushButton_suffix->setObjectName(QString::fromUtf8("pushButton_suffix"));

        horizontalLayout_9->addWidget(pushButton_suffix);

        pushButton_completeBaseName_2 = new QPushButton(layoutWidget3);
        pushButton_completeBaseName_2->setObjectName(QString::fromUtf8("pushButton_completeBaseName_2"));

        horizontalLayout_9->addWidget(pushButton_completeBaseName_2);


        gridLayout_3->addLayout(horizontalLayout_9, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButton_isDir = new QPushButton(layoutWidget3);
        pushButton_isDir->setObjectName(QString::fromUtf8("pushButton_isDir"));

        horizontalLayout_10->addWidget(pushButton_isDir);

        pushButton_isFile = new QPushButton(layoutWidget3);
        pushButton_isFile->setObjectName(QString::fromUtf8("pushButton_isFile"));

        horizontalLayout_10->addWidget(pushButton_isFile);


        gridLayout_3->addLayout(horizontalLayout_10, 5, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_isExecutable = new QPushButton(layoutWidget3);
        pushButton_isExecutable->setObjectName(QString::fromUtf8("pushButton_isExecutable"));

        horizontalLayout_11->addWidget(pushButton_isExecutable);

        pushButton_birthTime = new QPushButton(layoutWidget3);
        pushButton_birthTime->setObjectName(QString::fromUtf8("pushButton_birthTime"));

        horizontalLayout_11->addWidget(pushButton_birthTime);


        gridLayout_3->addLayout(horizontalLayout_11, 6, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        pushButton_lastModified = new QPushButton(layoutWidget3);
        pushButton_lastModified->setObjectName(QString::fromUtf8("pushButton_lastModified"));

        horizontalLayout_12->addWidget(pushButton_lastModified);

        pushButton_lastRead = new QPushButton(layoutWidget3);
        pushButton_lastRead->setObjectName(QString::fromUtf8("pushButton_lastRead"));

        horizontalLayout_12->addWidget(pushButton_lastRead);


        gridLayout_3->addLayout(horizontalLayout_12, 7, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pushButton_exists_s = new QPushButton(layoutWidget3);
        pushButton_exists_s->setObjectName(QString::fromUtf8("pushButton_exists_s"));

        horizontalLayout_13->addWidget(pushButton_exists_s);

        pushButton_exists_2 = new QPushButton(layoutWidget3);
        pushButton_exists_2->setObjectName(QString::fromUtf8("pushButton_exists_2"));

        horizontalLayout_13->addWidget(pushButton_exists_2);


        gridLayout_3->addLayout(horizontalLayout_13, 8, 0, 1, 1);

        toolBox_QCoreApplication->addItem(page_3, QString::fromUtf8("QFileinfo"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox_6 = new QGroupBox(page);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 0, 281, 131));
        widget1 = new QWidget(groupBox_6);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 20, 271, 100));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_tempPath = new QPushButton(widget1);
        pushButton_tempPath->setObjectName(QString::fromUtf8("pushButton_tempPath"));

        gridLayout_4->addWidget(pushButton_tempPath, 0, 0, 1, 1);

        pushButton_rootPath = new QPushButton(widget1);
        pushButton_rootPath->setObjectName(QString::fromUtf8("pushButton_rootPath"));

        gridLayout_4->addWidget(pushButton_rootPath, 0, 1, 1, 1);

        pushButton_homepath = new QPushButton(widget1);
        pushButton_homepath->setObjectName(QString::fromUtf8("pushButton_homepath"));

        gridLayout_4->addWidget(pushButton_homepath, 1, 0, 1, 1);

        pushButton_drives = new QPushButton(widget1);
        pushButton_drives->setObjectName(QString::fromUtf8("pushButton_drives"));

        gridLayout_4->addWidget(pushButton_drives, 1, 1, 1, 1);

        pushButton_currentPath = new QPushButton(widget1);
        pushButton_currentPath->setObjectName(QString::fromUtf8("pushButton_currentPath"));

        gridLayout_4->addWidget(pushButton_currentPath, 2, 0, 1, 1);

        pushButton_setCurrent = new QPushButton(widget1);
        pushButton_setCurrent->setObjectName(QString::fromUtf8("pushButton_setCurrent"));

        gridLayout_4->addWidget(pushButton_setCurrent, 2, 1, 1, 1);

        groupBox_7 = new QGroupBox(page);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 130, 281, 161));
        widget2 = new QWidget(groupBox_7);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 20, 261, 131));
        gridLayout_5 = new QGridLayout(widget2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_mkdir = new QPushButton(widget2);
        pushButton_mkdir->setObjectName(QString::fromUtf8("pushButton_mkdir"));

        gridLayout_5->addWidget(pushButton_mkdir, 0, 0, 1, 1);

        pushButton_rmdir = new QPushButton(widget2);
        pushButton_rmdir->setObjectName(QString::fromUtf8("pushButton_rmdir"));

        gridLayout_5->addWidget(pushButton_rmdir, 0, 1, 1, 1);

        pushButton_remove_2 = new QPushButton(widget2);
        pushButton_remove_2->setObjectName(QString::fromUtf8("pushButton_remove_2"));

        gridLayout_5->addWidget(pushButton_remove_2, 1, 0, 1, 1);

        pushButton_rename_2 = new QPushButton(widget2);
        pushButton_rename_2->setObjectName(QString::fromUtf8("pushButton_rename_2"));

        gridLayout_5->addWidget(pushButton_rename_2, 1, 1, 1, 1);

        pushButton_SetPath = new QPushButton(widget2);
        pushButton_SetPath->setObjectName(QString::fromUtf8("pushButton_SetPath"));

        gridLayout_5->addWidget(pushButton_SetPath, 2, 0, 1, 1);

        pushButton_removeRecursively = new QPushButton(widget2);
        pushButton_removeRecursively->setObjectName(QString::fromUtf8("pushButton_removeRecursively"));

        gridLayout_5->addWidget(pushButton_removeRecursively, 2, 1, 1, 1);

        toolBox_QCoreApplication->addItem(page, QString::fromUtf8("QDir"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 281, 293));
        widget3 = new QWidget(page_4);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(0, 10, 271, 271));
        verticalLayout_2 = new QVBoxLayout(widget3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_temptemp = new QPushButton(widget3);
        pushButton_temptemp->setObjectName(QString::fromUtf8("pushButton_temptemp"));

        verticalLayout_2->addWidget(pushButton_temptemp);

        pushButton_diytemp = new QPushButton(widget3);
        pushButton_diytemp->setObjectName(QString::fromUtf8("pushButton_diytemp"));

        verticalLayout_2->addWidget(pushButton_diytemp);

        pushButton_currenttemp = new QPushButton(widget3);
        pushButton_currenttemp->setObjectName(QString::fromUtf8("pushButton_currenttemp"));

        verticalLayout_2->addWidget(pushButton_currenttemp);

        toolBox_QCoreApplication->addItem(page_4, QString::fromUtf8("QTemporayDir"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 281, 293));
        toolBox_QCoreApplication->addItem(page_5, QString::fromUtf8("QTempporaryFile"));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        page_6->setGeometry(QRect(0, 0, 281, 293));
        widget4 = new QWidget(page_6);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(0, 0, 281, 261));
        verticalLayout_3 = new QVBoxLayout(widget4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_add = new QPushButton(widget4);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));

        verticalLayout_3->addWidget(pushButton_add);

        pushButton_remove_3 = new QPushButton(widget4);
        pushButton_remove_3->setObjectName(QString::fromUtf8("pushButton_remove_3"));

        verticalLayout_3->addWidget(pushButton_remove_3);

        pushButton_direct = new QPushButton(widget4);
        pushButton_direct->setObjectName(QString::fromUtf8("pushButton_direct"));

        verticalLayout_3->addWidget(pushButton_direct);

        pushButton_files = new QPushButton(widget4);
        pushButton_files->setObjectName(QString::fromUtf8("pushButton_files"));

        verticalLayout_3->addWidget(pushButton_files);

        toolBox_QCoreApplication->addItem(page_6, QString::fromUtf8("QFileSystemWatcher"));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(320, 10, 461, 581));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 10, 421, 51));
        layoutWidget4 = new QWidget(groupBox_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 10, 391, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_openfile = new QPushButton(layoutWidget4);
        pushButton_openfile->setObjectName(QString::fromUtf8("pushButton_openfile"));

        horizontalLayout->addWidget(pushButton_openfile);

        pushButton_openDir = new QPushButton(layoutWidget4);
        pushButton_openDir->setObjectName(QString::fromUtf8("pushButton_openDir"));

        horizontalLayout->addWidget(pushButton_openDir);

        pushButton_cleartext = new QPushButton(layoutWidget4);
        pushButton_cleartext->setObjectName(QString::fromUtf8("pushButton_cleartext"));

        horizontalLayout->addWidget(pushButton_cleartext);

        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 110, 421, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_dirpath = new QLineEdit(layoutWidget5);
        lineEdit_dirpath->setObjectName(QString::fromUtf8("lineEdit_dirpath"));

        horizontalLayout_3->addWidget(lineEdit_dirpath);

        layoutWidget6 = new QWidget(groupBox_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 70, 421, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget6);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_filepath = new QLineEdit(layoutWidget6);
        lineEdit_filepath->setObjectName(QString::fromUtf8("lineEdit_filepath"));

        horizontalLayout_2->addWidget(lineEdit_filepath);

        layoutWidget7 = new QWidget(groupBox_2);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(20, 140, 421, 411));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget7);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        plainTextEdit = new QPlainTextEdit(layoutWidget7);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setFrameShape(QFrame::NoFrame);

        horizontalLayout_4->addWidget(plainTextEdit);


        retranslateUi(Widget);

        toolBox_QCoreApplication->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        pushButton_Dirpath->setText(QCoreApplication::translate("Widget", "applicationDirpath\357\274\210\357\274\211", nullptr));
        pushButton_FilePath->setText(QCoreApplication::translate("Widget", "applicationFilePath()", nullptr));
        pushButton_appName->setText(QCoreApplication::translate("Widget", "applicationName()", nullptr));
        pushButton_setappName->setText(QCoreApplication::translate("Widget", "setApplicationName()", nullptr));
        pushButton_librayPaths->setText(QCoreApplication::translate("Widget", "librayPaths()", nullptr));
        pushButton_organizationName->setText(QCoreApplication::translate("Widget", "organizationName()", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Widget", "exit()", nullptr));
        toolBox_QCoreApplication->setItemText(toolBox_QCoreApplication->indexOf(widget), QCoreApplication::translate("Widget", "QCoreApplication", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\351\235\231\346\200\201\345\207\275\346\225\260", nullptr));
        pushButton_copys->setText(QCoreApplication::translate("Widget", "copy()", nullptr));
        pushButton_existss->setText(QCoreApplication::translate("Widget", "exists()", nullptr));
        pushButton_removes->setText(QCoreApplication::translate("Widget", "remove()", nullptr));
        pushButton_renames->setText(QCoreApplication::translate("Widget", "rename()", nullptr));
        pushButton_moveToTrashs->setText(QCoreApplication::translate("Widget", "moveToTrash", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\346\210\220\345\221\230\345\207\275\346\225\260", nullptr));
        pushButton_copy->setText(QCoreApplication::translate("Widget", "copy()", nullptr));
        pushButton_exists->setText(QCoreApplication::translate("Widget", "exists()", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("Widget", "remove()", nullptr));
        pushButton_rename->setText(QCoreApplication::translate("Widget", "rename()", nullptr));
        pushButton_moveToTrash->setText(QCoreApplication::translate("Widget", "moveToTrash", nullptr));
        toolBox_QCoreApplication->setItemText(toolBox_QCoreApplication->indexOf(page_2), QCoreApplication::translate("Widget", "QFile", nullptr));
        pushButton_absoluteFilepath->setText(QCoreApplication::translate("Widget", "absoluteFilePath", nullptr));
        pushButton_absolutePath->setText(QCoreApplication::translate("Widget", "absolutePath", nullptr));
        pushButton_fileName->setText(QCoreApplication::translate("Widget", "fileName", nullptr));
        pushButton_filepath->setText(QCoreApplication::translate("Widget", "filepath", nullptr));
        pushButton_size->setText(QCoreApplication::translate("Widget", "size", nullptr));
        pushButton_path->setText(QCoreApplication::translate("Widget", "path", nullptr));
        pushButton_baseName->setText(QCoreApplication::translate("Widget", "baseName", nullptr));
        pushButton_completeBaseName->setText(QCoreApplication::translate("Widget", "completeBaseName", nullptr));
        pushButton_suffix->setText(QCoreApplication::translate("Widget", "suffix", nullptr));
        pushButton_completeBaseName_2->setText(QCoreApplication::translate("Widget", "completeSuffix", nullptr));
        pushButton_isDir->setText(QCoreApplication::translate("Widget", "isDir", nullptr));
        pushButton_isFile->setText(QCoreApplication::translate("Widget", "isFile", nullptr));
        pushButton_isExecutable->setText(QCoreApplication::translate("Widget", "isExecutable", nullptr));
        pushButton_birthTime->setText(QCoreApplication::translate("Widget", "birthTime", nullptr));
        pushButton_lastModified->setText(QCoreApplication::translate("Widget", "lastModified", nullptr));
        pushButton_lastRead->setText(QCoreApplication::translate("Widget", "lastRead", nullptr));
        pushButton_exists_s->setText(QCoreApplication::translate("Widget", "\351\235\231\346\200\201\345\207\275\346\225\260exists", nullptr));
        pushButton_exists_2->setText(QCoreApplication::translate("Widget", "exists", nullptr));
        toolBox_QCoreApplication->setItemText(toolBox_QCoreApplication->indexOf(page_3), QCoreApplication::translate("Widget", "QFileinfo", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Widget", "\351\235\231\346\200\201\345\207\275\346\225\260", nullptr));
        pushButton_tempPath->setText(QCoreApplication::translate("Widget", "tempPath", nullptr));
        pushButton_rootPath->setText(QCoreApplication::translate("Widget", "rootPath", nullptr));
        pushButton_homepath->setText(QCoreApplication::translate("Widget", "homepath", nullptr));
        pushButton_drives->setText(QCoreApplication::translate("Widget", "drives", nullptr));
        pushButton_currentPath->setText(QCoreApplication::translate("Widget", "currnetPath", nullptr));
        pushButton_setCurrent->setText(QCoreApplication::translate("Widget", "setCurrent", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("Widget", "\346\226\207\344\273\266\346\210\226\347\233\256\345\275\225\346\223\215\344\275\234", nullptr));
        pushButton_mkdir->setText(QCoreApplication::translate("Widget", "mkdir", nullptr));
        pushButton_rmdir->setText(QCoreApplication::translate("Widget", "rmdir", nullptr));
        pushButton_remove_2->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        pushButton_rename_2->setText(QCoreApplication::translate("Widget", "rename", nullptr));
        pushButton_SetPath->setText(QCoreApplication::translate("Widget", "SetPath", nullptr));
        pushButton_removeRecursively->setText(QCoreApplication::translate("Widget", "removeRecursively", nullptr));
        toolBox_QCoreApplication->setItemText(toolBox_QCoreApplication->indexOf(page), QCoreApplication::translate("Widget", "QDir", nullptr));
        pushButton_temptemp->setText(QCoreApplication::translate("Widget", "1.\345\234\250\347\263\273\347\273\237\344\270\264\346\227\266\347\233\256\345\275\225\344\270\213\345\210\233\345\273\272\344\270\264\346\227\266\346\226\207\344\273\266\345\244\271", nullptr));
        pushButton_diytemp->setText(QCoreApplication::translate("Widget", "2.\345\234\250\346\214\207\345\256\232\347\233\256\345\275\225\344\270\213\345\210\233\345\273\272\344\270\264\346\227\266\346\226\207\344\273\266\345\244\271", nullptr));
        pushButton_currenttemp->setText(QCoreApplication::translate("Widget", "3.\345\234\250\345\275\223\345\211\215\347\233\256\345\275\225\344\270\213\345\210\233\345\273\272\344\270\264\346\227\266\346\226\207\344\273\266\345\244\271", nullptr));
        toolBox_QCoreApplication->setItemText(toolBox_QCoreApplication->indexOf(page_4), QCoreApplication::translate("Widget", "QTemporayDir", nullptr));
        toolBox_QCoreApplication->setItemText(toolBox_QCoreApplication->indexOf(page_5), QCoreApplication::translate("Widget", "QTempporaryFile", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Widget", "addPath()\345\271\266\345\274\200\345\247\213\347\233\221\350\247\206", nullptr));
        pushButton_remove_3->setText(QCoreApplication::translate("Widget", "removePath()\345\271\266\345\201\234\346\255\242\347\233\221\350\247\206", nullptr));
        pushButton_direct->setText(QCoreApplication::translate("Widget", "directories()", nullptr));
        pushButton_files->setText(QCoreApplication::translate("Widget", "files()", nullptr));
        toolBox_QCoreApplication->setItemText(toolBox_QCoreApplication->indexOf(page_6), QCoreApplication::translate("Widget", "QFileSystemWatcher", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        pushButton_openfile->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        pushButton_openDir->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\347\233\256\345\275\225", nullptr));
        pushButton_cleartext->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\347\233\256\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

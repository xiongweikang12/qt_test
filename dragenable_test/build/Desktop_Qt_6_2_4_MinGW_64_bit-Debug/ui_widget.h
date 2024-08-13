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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_listSoure;
    QListWidget *listWidget;
    QGroupBox *groupBox_listWidget;
    QListWidget *listWidget_2;
    QGroupBox *groupBox_treeWidget;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_tableWidget;
    QTableWidget *tableWidget;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QRadioButton *radioButton_listSoure;
    QRadioButton *radioButton_listWidget;
    QRadioButton *radioButton_treeWidget;
    QRadioButton *radioButton_tableWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_accecptDrops;
    QCheckBox *checkBox_dragEnable;
    QLabel *label;
    QComboBox *comboBox_dragDropMode;
    QLabel *label_2;
    QComboBox *comboBox_defultDropAction;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 210, 751, 371));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_listSoure = new QGroupBox(widget);
        groupBox_listSoure->setObjectName(QString::fromUtf8("groupBox_listSoure"));
        listWidget = new QListWidget(groupBox_listSoure);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 21, 161, 331));

        horizontalLayout->addWidget(groupBox_listSoure);

        groupBox_listWidget = new QGroupBox(widget);
        groupBox_listWidget->setObjectName(QString::fromUtf8("groupBox_listWidget"));
        listWidget_2 = new QListWidget(groupBox_listWidget);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 20, 161, 331));

        horizontalLayout->addWidget(groupBox_listWidget);

        groupBox_treeWidget = new QGroupBox(widget);
        groupBox_treeWidget->setObjectName(QString::fromUtf8("groupBox_treeWidget"));
        treeWidget = new QTreeWidget(groupBox_treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 21, 161, 331));

        horizontalLayout->addWidget(groupBox_treeWidget);

        groupBox_tableWidget = new QGroupBox(widget);
        groupBox_tableWidget->setObjectName(QString::fromUtf8("groupBox_tableWidget"));
        tableWidget = new QTableWidget(groupBox_tableWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 161, 331));

        horizontalLayout->addWidget(groupBox_tableWidget);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 20, 751, 181));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        radioButton_listSoure = new QRadioButton(groupBox);
        radioButton_listSoure->setObjectName(QString::fromUtf8("radioButton_listSoure"));
        radioButton_listSoure->setGeometry(QRect(20, 30, 118, 23));
        radioButton_listWidget = new QRadioButton(groupBox);
        radioButton_listWidget->setObjectName(QString::fromUtf8("radioButton_listWidget"));
        radioButton_listWidget->setGeometry(QRect(20, 60, 118, 23));
        radioButton_treeWidget = new QRadioButton(groupBox);
        radioButton_treeWidget->setObjectName(QString::fromUtf8("radioButton_treeWidget"));
        radioButton_treeWidget->setGeometry(QRect(20, 90, 118, 23));
        radioButton_tableWidget = new QRadioButton(groupBox);
        radioButton_tableWidget->setObjectName(QString::fromUtf8("radioButton_tableWidget"));
        radioButton_tableWidget->setGeometry(QRect(20, 130, 118, 23));

        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox_accecptDrops = new QCheckBox(groupBox_2);
        checkBox_accecptDrops->setObjectName(QString::fromUtf8("checkBox_accecptDrops"));

        gridLayout->addWidget(checkBox_accecptDrops, 0, 0, 1, 1);

        checkBox_dragEnable = new QCheckBox(groupBox_2);
        checkBox_dragEnable->setObjectName(QString::fromUtf8("checkBox_dragEnable"));

        gridLayout->addWidget(checkBox_dragEnable, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comboBox_dragDropMode = new QComboBox(groupBox_2);
        comboBox_dragDropMode->addItem(QString());
        comboBox_dragDropMode->addItem(QString());
        comboBox_dragDropMode->addItem(QString());
        comboBox_dragDropMode->addItem(QString());
        comboBox_dragDropMode->addItem(QString());
        comboBox_dragDropMode->setObjectName(QString::fromUtf8("comboBox_dragDropMode"));

        gridLayout->addWidget(comboBox_dragDropMode, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBox_defultDropAction = new QComboBox(groupBox_2);
        comboBox_defultDropAction->addItem(QString());
        comboBox_defultDropAction->addItem(QString());
        comboBox_defultDropAction->addItem(QString());
        comboBox_defultDropAction->setObjectName(QString::fromUtf8("comboBox_defultDropAction"));

        gridLayout->addWidget(comboBox_defultDropAction, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox_listSoure->setTitle(QCoreApplication::translate("Widget", "listSoure", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Widget", "\345\211\252\345\210\207", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Widget", "\345\244\215\345\210\266", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Widget", "\351\273\217\350\264\264", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("Widget", "\347\272\242\350\211\262", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBox_listWidget->setTitle(QCoreApplication::translate("Widget", "listWidget", nullptr));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem7 = listWidget_2->item(0);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("Widget", "\345\211\252\345\210\207", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        groupBox_treeWidget->setTitle(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Widget", "\347\274\226\350\276\221", nullptr));

        const bool __sortingEnabled2 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("Widget", "\347\274\226\350\276\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("Widget", "\346\240\274\345\274\217", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("Widget", "\345\211\252\345\210\207", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled2);

        groupBox_tableWidget->setTitle(QCoreApplication::translate("Widget", "tableWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\257\271\350\261\241", nullptr));
        radioButton_listSoure->setText(QCoreApplication::translate("Widget", "listSoure", nullptr));
        radioButton_listWidget->setText(QCoreApplication::translate("Widget", "listWidget", nullptr));
        radioButton_treeWidget->setText(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        radioButton_tableWidget->setText(QCoreApplication::translate("Widget", "tablewidget", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\213\226\345\212\250\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        checkBox_accecptDrops->setText(QCoreApplication::translate("Widget", "accecptDrops", nullptr));
        checkBox_dragEnable->setText(QCoreApplication::translate("Widget", "dragEnable", nullptr));
        label->setText(QCoreApplication::translate("Widget", "dragDropMode", nullptr));
        comboBox_dragDropMode->setItemText(0, QCoreApplication::translate("Widget", " NoDragDrop", nullptr));
        comboBox_dragDropMode->setItemText(1, QCoreApplication::translate("Widget", " DragOnly", nullptr));
        comboBox_dragDropMode->setItemText(2, QCoreApplication::translate("Widget", "DropOnly", nullptr));
        comboBox_dragDropMode->setItemText(3, QCoreApplication::translate("Widget", " DragDrop", nullptr));
        comboBox_dragDropMode->setItemText(4, QString());

        label_2->setText(QCoreApplication::translate("Widget", "defultDropAction", nullptr));
        comboBox_defultDropAction->setItemText(0, QCoreApplication::translate("Widget", "CopyAction", nullptr));
        comboBox_defultDropAction->setItemText(1, QCoreApplication::translate("Widget", "MoveAction", nullptr));
        comboBox_defultDropAction->setItemText(2, QCoreApplication::translate("Widget", "LinkAction", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

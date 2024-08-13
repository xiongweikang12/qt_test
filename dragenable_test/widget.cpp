#include "widget.h"
#include "ui_widget.h"
#include <QAbstractItemView>
#include<QKeyEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->setAcceptDrops(true);
    ui->listWidget->setDefaultDropAction(Qt::CopyAction);
    ui->listWidget->setDragEnabled(true);
    ui->listWidget->setDragDropMode(QAbstractItemView::DragDrop);
    //
    ui->listWidget_2->setAcceptDrops(true);
    ui->listWidget_2->setDefaultDropAction(Qt::CopyAction);
    ui->listWidget_2->setDragEnabled(true);
    ui->listWidget_2->setDragDropMode(QAbstractItemView::DragDrop);
    //
    ui->treeWidget->setAcceptDrops(true);
    ui->treeWidget->setDefaultDropAction(Qt::CopyAction);
    ui->treeWidget->setDragEnabled(true);
    ui->treeWidget->setDragDropMode(QAbstractItemView::DragDrop);
    //
    ui->tableWidget->setAcceptDrops(true);
    ui->tableWidget->setDefaultDropAction(Qt::CopyAction);
    ui->tableWidget->setDragEnabled(true);
    ui->tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
    //
    ui->radioButton_listSoure->setChecked(true);
    m_view=ui->listWidget;
    refresh_ground(ui->groupBox_listSoure);
    //事件过滤器设置
    ui->listWidget->installEventFilter(this);
    ui->listWidget_2->installEventFilter(this);
    ui->treeWidget->installEventFilter(this);
    ui->tableWidget->installEventFilter(this);
    //
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
}

Widget::~Widget()
{
    delete ui;
}

void Widget::refresh_ground(QGroupBox *temp_Groupbox)
{
    QFont font=temp_Groupbox->font();
    font.setBold(false);
    ui->groupBox_listSoure->setFont(font);
    ui->groupBox_listWidget->setFont(font);
    ui->groupBox_treeWidget->setFont(font);
    ui->groupBox_tableWidget->setFont(font);
    font.setBold(true);
    temp_Groupbox->setFont(font);
    //
    ui->checkBox_accecptDrops->setChecked(m_view->acceptDrops());
    ui->checkBox_dragEnable->setChecked(m_view->dragEnabled());
    //
    ui->comboBox_defultDropAction->setCurrentIndex(get_index_bymode(m_view->defaultDropAction()));
    ui->comboBox_dragDropMode->setCurrentIndex(static_cast<int>(m_view->dragDropMode()));
    //

}

int Widget::get_index_bymode(Qt::DropAction mode)
{
    switch (mode) {
    case Qt::CopyAction:
        return 0;
    case Qt::MoveAction:
        return 1;
    case Qt::LinkAction:
        return 2;
    default:
        return 0 ;
    }
}

Qt::DropAction Widget::index_to_dropaction(int index)
{
    switch (index) {
    case 0:
        return Qt::DropAction::CopyAction;
    case 1:
        return Qt::DropAction::MoveAction;
    case 2:
        return Qt::DropAction::LinkAction;
    default:
        break;
    }
}

void Widget::on_radioButton_listWidget_clicked()
{
    m_view=ui->listWidget_2;
    refresh_ground(ui->groupBox_listWidget);
}


void Widget::on_radioButton_treeWidget_clicked()
{
    m_view=ui->treeWidget;
    refresh_ground(ui->groupBox_treeWidget);
}


void Widget::on_radioButton_tableWidget_clicked()
{
    m_view=ui->tableWidget;
    refresh_ground(ui->groupBox_tableWidget);
}


void Widget::on_radioButton_listSoure_clicked()
{
    m_view=ui->listWidget;
    refresh_ground(ui->groupBox_listSoure);
}


void Widget::on_checkBox_accecptDrops_clicked(bool checked)
{
    m_view->setAcceptDrops(checked);
}


void Widget::on_checkBox_dragEnable_clicked(bool checked)
{
    m_view->setDragEnabled(checked);
}


void Widget::on_comboBox_dragDropMode_currentIndexChanged(int index)
{
    m_view->setDragDropMode(QAbstractItemView::DragDropMode(index));
}


void Widget::on_comboBox_defultDropAction_currentIndexChanged(int index)
{
    m_view->setDefaultDropAction(index_to_dropaction(index));
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type()!=QEvent::KeyPress)
    {
        return QWidget::eventFilter(watched,event);
    }
    QKeyEvent *key_del=static_cast<QKeyEvent*>(event);
    if(key_del->key()!=Qt::Key_Delete)
    {
        return QWidget::eventFilter(watched,event);
    }
    if(watched==ui->listWidget)
    {
        // QListWidgetItem *item=ui->listWidget->currentItem();
        QListWidgetItem *item=ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete item;
    }
    if(watched==ui->listWidget_2)
    {
        QListWidgetItem *item=ui->listWidget_2->takeItem(ui->listWidget_2->currentRow());
        delete item;
    }
    else if(watched==ui->tableWidget)
    {
        delete ui->tableWidget->takeItem(ui->tableWidget->currentRow(),ui->tableWidget->currentColumn());
    }
    else if(watched==ui->treeWidget)
    {
        QTreeWidgetItem *item=ui->treeWidget->currentItem();
        QTreeWidgetItem *parent_item=nullptr;
        if(item->parent()!=nullptr)
        {
            parent_item=item->parent();
            parent_item->removeChild(item); //从父节点删除子节点
        }
        else
        {
            int index=ui->treeWidget->indexOfTopLevelItem(item);
            delete ui->treeWidget->takeTopLevelItem(index); //删除top节点
        }
    }
    return true;
}

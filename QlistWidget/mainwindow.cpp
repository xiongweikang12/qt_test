#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());
    //将toolbutton与action连接
    ui->tBtnListinit->setDefaultAction(ui->act_listinit);
    ui->tBtnListclear->setDefaultAction(ui->actlist_clear);
    ui->tBtnListInsert->setDefaultAction(ui->actlist_insert);
    ui->tBtnListadd->setDefaultAction(ui->actlist_add);
    ui->toolButton_selectitem->setDefaultAction(ui->actionsec_singal);
    ui->toolButton_selAll->setDefaultAction(ui->actionsecl_all);
    ui->toolButton_selNone->setDefaultAction(ui->actionsecl_None);
    ui->toolButton_cleartext->setDefaultAction(ui->actionclear_plaintext);
    ui->toolButton_addline->setDefaultAction(ui->actionappend_plaintext);
    ui->widget->setContextMenuPolicy(Qt::CustomContextMenu);
    // QLabel *label_i=new QLabel("xxx",ui->page);


    this->setAcceptDrops(true);
    ui->listWidget->setAcceptDrops(true);
    ui->listWidget->setDefaultDropAction(Qt::CopyAction);
    ui->listWidget->setDragEnabled(true);
    ui->listWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->plainTextEdit->setAcceptDrops(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    ui->toolButton_downsort->setEnabled(checked);
    ui->toolButton_upsort->setEnabled(checked);
}


void MainWindow::on_toolButton_cleartext_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_toolButton_addline_clicked()
{
    ui->plainTextEdit->appendPlainText(" "); //添加一个空行
}


void MainWindow::on_act_listinit_triggered()
{
    bool endit_line=ui->checkBox_enabledit->isChecked();
    ui->listWidget->clear();
    QListWidgetItem *init_temp;
    for(int i=0;i<10;i++)
    {
        init_temp= new QListWidgetItem("item::"+QString::number(i));
        // init_temp->setText("item::"+QString::number(i));
        init_temp->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        if(endit_line)
        {
            init_temp->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
        else
        {
            init_temp->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
        ui->listWidget->addItem(init_temp);
    }
}

void MainWindow::on_checkBox_enabledit_clicked(bool checked)
{
    QListWidgetItem *init_temp=nullptr;
    for(int i=0;i<ui->listWidget->count();i++)  //遍历内容设置每个QlistwidgetItem的setflags
    {
        init_temp=ui->listWidget->item(i);
        if(checked)
        {
            init_temp->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
        else
        {
             init_temp->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        }
    }
}



void MainWindow::on_actlist_clear_triggered()
{
    ui->listWidget->clear();
}


void MainWindow::on_actlist_insert_triggered()
{
    bool endit_line=ui->checkBox_enabledit->isChecked();
    QListWidgetItem *init_temp;
    QString temp_line_edit=ui->lineEdit_Change->text();
    init_temp= new QListWidgetItem();
    if(endit_line)
    {
        init_temp->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }
    else
    {
        init_temp->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }
    if(temp_line_edit.isEmpty())
    {
         ui->listWidget->insertItem(ui->listWidget->currentRow(),"item:: inserct");
    }
    else
    {
        ui->listWidget->insertItem(ui->listWidget->currentRow(),temp_line_edit);
    }


}


void MainWindow::on_actlist_add_triggered()
{
    QListWidgetItem *add_item=new QListWidgetItem();
    if(ui->lineEdit_Change->text().isEmpty())
    {
        qDebug()<<ui->lineEdit_Change->text()+"test";
        add_item->setText("add_item::test");
    }
    else
    {
        add_item->setText(ui->lineEdit_Change->text());
    }

    if(ui->checkBox_enabledit->isChecked())
    {
        add_item->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }
    else
    {
        add_item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }
    ui->listWidget->addItem(add_item);
}


void MainWindow::on_actlist_delete_triggered()
{
    QListWidgetItem *del_item=ui->listWidget->takeItem(ui->listWidget->currentRow()); //删除并返回一个指针类型
    qDebug()<<del_item->text();
    delete del_item;

}

void MainWindow::on_actionsec_singal_triggered()
{
    if(ui->listWidget->currentItem()==nullptr)
    {
        return;
    }
    ui->listWidget->currentItem()->setCheckState(Qt::Checked);
}


void MainWindow::on_actionsecl_all_triggered()
{
    for(int i=0;i<ui->listWidget->count();i++)
    {
        ui->listWidget->item(i)->setCheckState(Qt::Checked);
    }
}


void MainWindow::on_actionsecl_None_triggered()
{
    for(int i=0;i<ui->listWidget->count();i++)
    {
        ui->listWidget->item(i)->setCheckState(Qt::Unchecked);
    }
}


void MainWindow::on_actionclear_plaintext_triggered()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_actionappend_plaintext_triggered()
{
    ui->plainTextEdit->appendPlainText("\n");
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->plainTextEdit->appendPlainText(item->text());
}


void MainWindow::on_toolButton_upsort_clicked()
{
    ui->listWidget->sortItems(Qt::AscendingOrder);
}


void MainWindow::on_toolButton_downsort_clicked()
{
    ui->listWidget->sortItems(Qt::DescendingOrder);
}


void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    //会给控件传达一个信号来创建自定义菜单
    Q_UNUSED(pos);
    QMenu *Menu_widget=new QMenu(this);
    Menu_widget->addAction(ui->act_listinit);
    Menu_widget->addAction(ui->actlist_clear);
    Menu_widget->addAction(ui->actlist_insert);
    Menu_widget->addAction(ui->actlist_add);
    Menu_widget->addAction(ui->actlist_delete);
    Menu_widget->exec(QCursor::pos());
    Menu_widget->addSeparator();
    Menu_widget->addAction(ui->actionsecl_all);
    Menu_widget->addAction(ui->actionsec_singal);
    Menu_widget->addAction(ui->actionsecl_None);
    Menu_widget->exec(QCursor::pos());
    delete Menu_widget;

}


void MainWindow::on_actionclear_linedit_triggered()
{
    ui->lineEdit_Change->clear();
    ui->listWidget->clear();
}





#include "insert_window.h"
#include "ui_insert_window.h"
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "tsizedialog.h"
#include "setheadlabeldialog.h"
#include "setitemdialog.h"
#include <QModelIndex>

Insert_window::Insert_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Insert_window)
{
    ui->setupUi(this);
    setCentralWidget(ui->tableView);
    m_model=new QStandardItemModel(4,4,this);
    Select_model=new QItemSelectionModel(m_model);
    QStringList header;
    header<<"性别"<<"学号"<<"年龄"<<"成绩";
    m_model->setHorizontalHeaderLabels(header);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(Select_model);

}

Insert_window::~Insert_window()
{
    delete ui;
}

void Insert_window::on_actionsetsize_triggered()
{
    TsizeDialog *size_Dialog=new TsizeDialog();
    size_Dialog->setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);
    size_Dialog->setAttribute(Qt::WA_DeleteOnClose);
    size_Dialog->set_colrow(m_model->columnCount(),m_model->rowCount());
    //
    connect(size_Dialog,&TsizeDialog::keep_enable,ui->actionsetsize,&QAction::setEnabled);
    connect(size_Dialog,&TsizeDialog::keep_disenable,ui->actionsetsize,&QAction::setEnabled);
    connect(size_Dialog,&TsizeDialog::set_rowcol,this,&Insert_window::set_colrow_slot);
    size_Dialog->exec();
    /*
    if(res==static_cast<int>(QDialog::Accepted))
    {
        m_model->setColumnCount(size_Dialog->return_col());
        m_model->setRowCount(size_Dialog->return_row());
    }
    */


}

void Insert_window::on_actionsetheader_triggered()
{
    setHeadlabelDialog *headlabel_Dialog=new setHeadlabelDialog();
    headlabel_Dialog->setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);
    QStringList headlabel_temp;
    for(int i=0;i<m_model->columnCount();i++)
    {
        headlabel_temp.append(m_model->headerData(i,Qt::Horizontal).toString());
    }
    headlabel_Dialog->init_Head(headlabel_temp);
    int res=headlabel_Dialog->exec();
    if(res==static_cast<int>(QDialog::Accepted))
    {
        m_model->setHorizontalHeaderLabels(headlabel_Dialog->return_StringList());
    }
}

void Insert_window::on_actionsetitem_triggered()
{
    setitemDialog *set_item_Dialog=new setitemDialog();
    set_item_Dialog->setAttribute(Qt::WA_DeleteOnClose);
    set_item_Dialog->setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);
    QModelIndex current_index=ui->tableView->currentIndex();
    Select_model->setCurrentIndex(current_index,QItemSelectionModel::SelectCurrent);
    set_item_Dialog->set_item_spinboxinit(m_model->columnCount(),m_model->rowCount(),current_index);

    connect(set_item_Dialog,&setitemDialog::setitem_lineedit,this,&Insert_window::set_item_bysigal);
    connect(this,&Insert_window::set_spinbox_sigal,set_item_Dialog,&setitemDialog::tableview_click);
    // set_item_Dialog->exec();
    set_item_Dialog->show();
    set_item_Dialog->setModal(false);

}

void Insert_window::set_item_bysigal(int col_current, int row_current, QString &text_temp)
{
    QModelIndex index_set=m_model->index(row_current,col_current);
    Select_model->setCurrentIndex(index_set,QItemSelectionModel::SelectCurrent);
    m_model->setData(index_set,text_temp,Qt::EditRole);
    QString temp_keep;
    temp_keep=QString::asprintf("行索引:%d-列索引:%d",index_set.row(),index_set.column())+"\t"+index_set.data(Qt::DisplayRole).toString();
    ui->statusbar->showMessage(temp_keep);

}

void Insert_window::size_dialog_isable()
{
    ui->actionsetsize->setEnabled(true);
}

void Insert_window::set_colrow_slot(int col, int row)
{
    m_model->setColumnCount(col);
    m_model->setRowCount(row);
}

void Insert_window::size_dialog_noable()
{
    ui->actionsetsize->setEnabled(false);
}

void Insert_window::on_tableView_clicked(const QModelIndex &index)
{
    QString temp_keep;
    temp_keep=QString::asprintf("行索引:%d-列索引:%d",index.row(),index.column())+"\t"+index.data(Qt::DisplayRole).toString();
    ui->statusbar->showMessage(temp_keep);
    emit set_spinbox_sigal(index);
}


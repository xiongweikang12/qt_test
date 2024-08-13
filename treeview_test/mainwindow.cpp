#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTreeWidgetItem>
#include <QSpinBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());
    ui->treeWidget->clear();
    QTreeWidgetItem *header=new QTreeWidgetItem();
    header->setText(colnum,"目录和文件");
    header->setText(colitemtype,"节点类型");
    header->setText(colitemdate,"最后修改时间");
    header->setTextAlignment(0,Qt::AlignCenter);
    ui->treeWidget->setHeaderItem(header);

    //添加一个根节点
    QIcon qicon(":/icon/image1/down-double.png");
    QTreeWidgetItem *topitem= new QTreeWidgetItem(treeitemtype::istopitem);
    topitem->setIcon(colnum,qicon);
    topitem->setText(colnum,"图片");
    topitem->setText(colitemtype,"top item");
    topitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    topitem->setCheckState(colnum,Qt::Checked);
    ui->treeWidget->addTopLevelItem(topitem);

    labelNodeText = new QLabel("节点标题");
    labelNodeText->setMinimumWidth(200);
    ui->statusbar->addWidget(labelNodeText);

    spinratio =new QSpinBox(this);
    spinratio->setRange(0,2000);
    spinratio->setValue(100);
    spinratio->setSuffix("%");
    spinratio->setReadOnly(true);
    spinratio->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->statusbar->addPermanentWidget(spinratio);

    labelfilename =new QLabel("文件名",this);
    ui->statusbar->addPermanentWidget(labelfilename);

    //
    ui->actionzoomfixH->setEnabled(false);
    ui->actionzoomfixW->setEnabled(false);
    ui->actionZoomIn->setEnabled(false);
    ui->actionzoomout->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionaddFile_triggered()
{
    QString file_curr_path= QApplication::applicationDirPath();
    QStringList file_namer=QFileDialog::getOpenFileNames(this,"选择文件",file_curr_path,"Images(*.png)"); //允许打开多个文件
    if(file_namer.isEmpty()){return;}
    QTreeWidgetItem *praitem,*item;
    item=ui->treeWidget->currentItem();
    if(item->type()==treeitemtype::isimage)
    {
        praitem=item->parent();
    }
    else
    {
        praitem=item;
    }
    for(int i=0;i<file_namer.size();i++)
    {
        QString filename=file_namer.at(i);
        QTreeWidgetItem *item=new QTreeWidgetItem(treeitemtype::isfileitem);
        item->setText(treecolnum::colnum,filename);
        item->setText(treecolnum::colitemtype,"file");
        item->setText(treecolnum::colitemdate,QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss"));
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        item->setCheckState(treecolnum::colnum,Qt::Checked);
        praitem->addChild(item);
    }
    praitem->setExpanded(true);
}


void MainWindow::on_actionaddFolder_triggered()
{
    QString dir=QFileDialog::getExistingDirectory();
    if(dir.isEmpty()){return;}
    else
    {
        QTreeWidgetItem *parItem=ui->treeWidget->currentItem();
        if(parItem==nullptr)
        {
            return;
        }
        if(parItem->type()!=treeitemtype::isimage)
        {
            QTreeWidgetItem *item=new QTreeWidgetItem(treeitemtype::isforderitem);
            item->setText(treecolnum::colnum,dir);
            item->setText(treecolnum::colitemtype,"dir");
            item->setText(treecolnum::colitemdate,QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss"));
            item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
            item->setCheckState(treecolnum::colnum,Qt::Checked);
            parItem->addChild(item);
        }
        parItem->setExpanded(true);
    }
}


void MainWindow::on_actiondelectall_triggered()
{
    QTreeWidgetItem *del_current=ui->treeWidget->currentItem();
    if (del_current==nullptr)
    {

    }
    else if(del_current->type()==treeitemtype::isfileitem)
    {
        qDebug()<<"删除文件";
        delete del_current;
    }
    else if(del_current->type()==treeitemtype::isforderitem)
    {
        for(int i=0;i<del_current->childCount();i++)
        {
            del_current->removeChild(del_current->child(i));
        }
        delete del_current;

    }
    else
    {
        return;
    }
}

void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    if(current==nullptr ||current==previous) {return;}
    switch (current->type()) {
    case treeitemtype::istopitem:
        ui->actionaddFolder->setEnabled(true);
        ui->actionaddFile->setEnabled(true);
        ui->actiondelectall->setEnabled(false);
        labelNodeText->setText(current->text(treecolnum::colnum));
        labelfilename->clear();
        break;
    case treeitemtype::isforderitem:
        ui->actionaddFolder->setEnabled(true);
        ui->actionaddFile->setEnabled(true);
        ui->actiondelectall->setEnabled(true);
        labelNodeText->setText(current->text(treecolnum::colnum));
        labelfilename->setText(current->text(treecolnum::colnum));
        break;
    case treeitemtype::isfileitem:
        ui->actionaddFolder->setEnabled(false);
        ui->actionaddFile->setEnabled(false);
        ui->actiondelectall->setEnabled(true);
        labelNodeText->setText(current->text(treecolnum::colnum));
        labelfilename->setText(current->text(treecolnum::colnum));
        display_image(current);
        break;
    default:
        break;
    }
}

void MainWindow::changeitem(QTreeWidgetItem *item)
{
    if(item->childCount()==0)
    {
        qDebug()<<item->text(0);
        return ;
    }
    else
    {
        for(int i=0;i<item->childCount();i++)
        {
            changeitem(item->child(i));
        }
    }
}


void MainWindow::on_actionforecch_triggered()
{
    changeitem(ui->treeWidget->currentItem());
}


void MainWindow::on_actionzoomfixW_triggered()
{
    int w=ui->scrollArea->width();
    int realw=m_pixmap.width();
    m_radio=float(w)/realw;
    spinratio->setValue(m_radio*100);
    QPixmap pix=m_pixmap.scaledToWidth(w);
    ui->label->setPixmap(pix);
}


void MainWindow::on_actionzoomfixH_triggered()
{
    int w=ui->scrollArea->height();
    int realw=m_pixmap.height();
    m_radio=float(w)/realw;
    spinratio->setValue(m_radio*100);
    QPixmap pix=m_pixmap.scaledToHeight(w);
    ui->label->setPixmap(pix);
}


void MainWindow::display_image(QTreeWidgetItem *item)
{
    QString image_path=item->text(colnum);
    qDebug()<<image_path;
    //labelfilename->setText(image_path);
    //labelNodeText->setText(item->text(colnum));
    m_pixmap.load(image_path);
    ui->actionzoomfixH->trigger();
    ui->actionzoomfixH->setEnabled(true);
    ui->actionzoomfixW->setEnabled(true);
    ui->actionZoomIn->setEnabled(true);
    ui->actionzoomout->setEnabled(true);
}


void MainWindow::on_actionZoomIn_triggered()
{
    m_radio*=1.2;
    int w=m_radio*m_pixmap.width();
    int h=m_radio*m_pixmap.height();
    ui->label->setPixmap(m_pixmap.scaled(w,h));
    spinratio->setValue(100*m_radio);
}


void MainWindow::on_actionzoomout_triggered()
{
    m_radio*=0.8;
    int w=m_radio*m_pixmap.width();
    int h=m_radio*m_pixmap.height();
    ui->label->setPixmap(m_pixmap.scaled(w,h));
    spinratio->setValue(100*m_radio);
}


void MainWindow::on_actionDockvisable_triggered(bool checked)
{
    ui->dockWidget->setVisible(checked);
}


void MainWindow::on_actionDockfloat_triggered(bool checked)
{
    ui->dockWidget->setFloating(checked);
}


//设置按钮状态，保持一致
void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    ui->actionDockvisable->setChecked(visible);
}


void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    ui->actionDockfloat->setChecked(topLevel);
}


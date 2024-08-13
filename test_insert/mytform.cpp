#include "mytform.h"
#include "ui_mytform.h"
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QFontDialog>
#include<QToolBar>
#include<QVBoxLayout>

MyTForm::MyTForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyTForm)
{
    ui->setupUi(this);
    QToolBar *toolbar_top=new QToolBar(this);
    toolbar_top->addAction(ui->actionopen);
    toolbar_top->addAction(ui->actionsetfont);
    toolbar_top->addAction(ui->actioncopy);
    toolbar_top->addAction(ui->actionpaser);
    toolbar_top->addAction(ui->actioncut);
    toolbar_top->addAction(ui->actioncancel);
    toolbar_top->addAction(ui->actionredo);
    toolbar_top->addAction(ui->actionclose_widget);
    toolbar_top->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    //
    QVBoxLayout *layout=new QVBoxLayout();
    layout->addWidget(toolbar_top);
    layout->addWidget(ui->plainTextEdit);



}

MyTForm::~MyTForm()
{
    delete ui;
}

#include<QFileInfo>
void MyTForm::on_actionopen_triggered()
{
    QString current_path=QApplication::applicationDirPath();
    QString filename=QFileDialog::getOpenFileName(this,"选择一个文件",current_path,"头文件(*.h);;所有文件(*.*)");
    if(!filename.isEmpty())
    {
        QFile file_open(filename);
        if(file_open.open(QIODevice::ReadOnly|QIODevice::Text))
        {
            QFileInfo file_info(filename);
            emit emit_filename(file_info.fileName());
            QTextStream openfile_into_plainedit(&file_open);
            while(!openfile_into_plainedit.atEnd())
            {
                ui->plainTextEdit->appendPlainText(openfile_into_plainedit.readLine());
            }
        }
        file_open.close();
    }
}


void MyTForm::on_actionsetfont_triggered()
{
    QFont font_test=ui->plainTextEdit->font();
    bool ok=false;
    QFont font_set=QFontDialog::getFont(&ok,font_test,this,"选择字体");
    if(ok)
    {
        ui->plainTextEdit->setFont(font_set);
    }

}


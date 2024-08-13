#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDir>
#include<QTemporaryDir>
#include<QFileSystemWatcher>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_openfile_clicked()
{
    QString current_path=QApplication::applicationDirPath();
    QString file_path=QFileDialog::getOpenFileName(this,"选择一个文件",current_path,"源文件(*.cpp);;头文件(*.h)");
    ui->lineEdit_filepath->setText(file_path);
}


void Widget::on_pushButton_openDir_clicked()
{
    QString current_path=QApplication::applicationDirPath();
    QString file_dir_path=QFileDialog::getExistingDirectory(this,"选择一个文件夹",current_path);
    ui->lineEdit_dirpath->setText(file_dir_path);
}


void Widget::on_pushButton_Dirpath_clicked()
{
    show_sender(sender());
    ui->plainTextEdit->appendPlainText(QApplication::applicationDirPath());
}

void Widget::show_sender(QObject *temp)
{
    QPushButton *s_button=static_cast<QPushButton*>(temp);
    ui->plainTextEdit->appendPlainText(s_button->text());
    ui->plainTextEdit->appendPlainText(s_button->toolTip());
}


void Widget::on_pushButton_FilePath_clicked()
{
    show_sender(sender());
    ui->plainTextEdit->appendPlainText(QApplication::applicationFilePath());
}


void Widget::on_pushButton_appName_clicked()
{
    show_sender(sender());
    ui->plainTextEdit->appendPlainText(QApplication::applicationName());
}


void Widget::on_pushButton_setappName_clicked()
{
    show_sender(sender());
    QApplication::setApplicationName("test_set_appname");
    ui->plainTextEdit->appendPlainText(QApplication::applicationName());
}


void Widget::on_pushButton_librayPaths_clicked()
{
    show_sender(sender());
    for (auto &item:QApplication::libraryPaths())
    {
        ui->plainTextEdit->appendPlainText(item);
    }
}


void Widget::on_pushButton_organizationName_clicked()
{
    show_sender(sender());
    QApplication::setOrganizationName("xwk");
    ui->plainTextEdit->appendPlainText(QApplication::organizationName());
}


void Widget::on_pushButton_exit_clicked()
{
    show_sender(sender());
    QApplication::exit();
}


void Widget::on_pushButton_copys_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo fileinfo(soure);
    QString newFile=fileinfo.path()+"/"+fileinfo.baseName()+"copy_"+"."+fileinfo.suffix();
    QFile::copy(soure,newFile);
    ui->plainTextEdit->appendPlainText(newFile);

}


void Widget::on_pushButton_existss_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    ui->plainTextEdit->appendPlainText(QFile::exists(soure)==true ? "true":"false");
}


void Widget::on_pushButton_removes_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    ui->plainTextEdit->appendPlainText(QFile::remove(soure)==true ? "true":"false");
}


void Widget::on_pushButton_renames_clicked()
{
    show_sender(sender());
    //重命名
}


void Widget::on_pushButton_moveToTrashs_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    ui->plainTextEdit->appendPlainText(QFile::remove(soure)==true ? "true":"false");
    //删除到回收站
}


void Widget::on_pushButton_copy_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo fileinfo(soure);
    QString newFile=fileinfo.path()+"/"+fileinfo.baseName()+"copy_"+"."+fileinfo.suffix();
    QFile temp(soure);
    //QFile::copy(soure,newFile);
    temp.copy(newFile);
    ui->plainTextEdit->appendPlainText(newFile);

}

void Widget::on_pushButton_exists_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFile temp(soure);
    ui->plainTextEdit->appendPlainText(temp.exists()==true ? "true":"false");
}


void Widget::on_pushButton_absoluteFilepath_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.absoluteFilePath());
    //返回绝对路径

}

void Widget::on_pushButton_absolutePath_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.absolutePath());
    //返回不带文件名的绝对路径
}

void Widget::on_pushButton_fileName_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.fileName());
    //返回文件名称
}

void Widget::on_pushButton_filepath_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.filePath());
    //返回文件路径
}

void Widget::on_pushButton_size_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(QString::number(temp_info.size()));
    //返回文件大小
}

void Widget::on_pushButton_path_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.path());
    //返回不带文件名的绝对路径
}


void Widget::on_pushButton_baseName_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.baseName());
    //返回不带后缀的文件名
}


void Widget::on_pushButton_completeBaseName_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.completeBaseName());
}


void Widget::on_pushButton_suffix_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.suffix());
    //返回后缀
}


void Widget::on_pushButton_completeBaseName_2_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.completeSuffix());
}


void Widget::on_pushButton_isDir_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.isDir()==true ? "yes is dir": "not is dir");
    //是否是一个文件
}


void Widget::on_pushButton_isFile_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.isFile()==true ? "yes is File": "not is File");
    //是否是一个文件
}


void Widget::on_pushButton_isExecutable_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.isExecutable()==true ? "yes is exe": "not is exe");
    //是一个exe
}

void Widget::on_pushButton_birthTime_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.birthTime().toString());
    //创建时间
}


void Widget::on_pushButton_lastModified_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.lastModified().toString());
    //最近修改时间
}


void Widget::on_pushButton_lastRead_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.lastRead().toString());
    //最近访问时间
}

void Widget::on_pushButton_exists_s_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    //QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(QFileInfo::exists(soure)==true ? "is exists":"is not exists");
    //是否存在
}


void Widget::on_pushButton_exists_2_clicked()
{
    show_sender(sender());
    QString soure=ui->lineEdit_filepath->text();
    QFileInfo temp_info(soure);
    ui->plainTextEdit->appendPlainText(temp_info.exists()==true ? "is exists":"is not exists");
}


void Widget::on_pushButton_tempPath_clicked()
{
    show_sender(sender());
    ui->plainTextEdit->appendPlainText(QDir::tempPath());
    //返回本机的temp的文件夹路径
}


void Widget::on_pushButton_rootPath_clicked()
{
    show_sender(sender());
    ui->plainTextEdit->appendPlainText(QDir::rootPath());
    //返回本机的root的文件路径
    //C:/
}


void Widget::on_pushButton_homepath_clicked()
{
    show_sender(sender());
    ui->plainTextEdit->appendPlainText(QDir::homePath());
    //返回本机的用户路径
    //C:/Users/17613
}


void Widget::on_pushButton_drives_clicked()
{
    show_sender(sender());
    for(auto &item:QDir::drives())
    {
         ui->plainTextEdit->appendPlainText(item.path());
    }

    //返回磁盘的信息FileinfoList
}


void Widget::on_pushButton_currentPath_clicked()
{
    show_sender(sender());
    ui->plainTextEdit->appendPlainText(QDir::currentPath());
    //返回当前的路径
}


void Widget::on_pushButton_setCurrent_clicked()
{
    show_sender(sender());
    QDir::setCurrent(QDir::drives().at(0).path());
    ui->plainTextEdit->appendPlainText(QDir::currentPath());
    //设置当前路径
}



void Widget::on_pushButton_mkdir_clicked()
{

}


void Widget::on_pushButton_temptemp_clicked()
{
    show_sender(sender());
    QTemporaryDir dir;
    ui->plainTextEdit->appendPlainText(dir.path());
}


void Widget::on_pushButton_currenttemp_clicked()
{
    show_sender(sender());
    QTemporaryDir dir(QDir::currentPath());
    ui->plainTextEdit->appendPlainText(dir.path());
}


void Widget::on_pushButton_diytemp_clicked()
{
    show_sender(sender());
    QString choose_path=ui->lineEdit_filepath->text();
    QFileInfo file_info(choose_path);
    QTemporaryDir dir(file_info.path());
    ui->plainTextEdit->appendPlainText(dir.path());
    //在某个目录下生成临时文件
}


void Widget::on_pushButton_cleartext_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_add_clicked()
{
    show_sender(sender());
    file_watch =new QFileSystemWatcher();
    file_watch->addPath(ui->lineEdit_filepath->text());
    file_watch->addPath(ui->lineEdit_dirpath->text());
    connect(file_watch,&QFileSystemWatcher::directoryChanged,this,&Widget::do_directoryChange);
    connect(file_watch,&QFileSystemWatcher::fileChanged,this,&Widget::do_fileChange);

}

void Widget::do_directoryChange(const QString &path)
{
    ui->plainTextEdit->appendPlainText(path+"change");
}

void Widget::do_fileChange(const QString &path)
{
     ui->plainTextEdit->appendPlainText(path+"change");
}


void Widget::on_pushButton_remove_3_clicked()
{
    show_sender(sender());
    file_watch =new QFileSystemWatcher();
    file_watch->removePath(ui->lineEdit_filepath->text());
    file_watch->removePath(ui->lineEdit_dirpath->text());
    disconnect(file_watch);
}


void Widget::on_pushButton_direct_clicked()
{
    show_sender(sender());
    for(auto &item:file_watch->directories()) //QStringList 输出文件夹
    {
        ui->plainTextEdit->appendPlainText(item);
    }
}


void Widget::on_pushButton_files_clicked()
{
    show_sender(sender());
    for(auto &item:file_watch->files()) //QStringList 输出监视的文件
    {
        ui->plainTextEdit->appendPlainText(item);
    }
}


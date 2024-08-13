#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QFileSystemWatcher;
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_openfile_clicked();

    void on_pushButton_openDir_clicked();

    void on_pushButton_Dirpath_clicked();

    void on_pushButton_FilePath_clicked();

    void on_pushButton_appName_clicked();

    void on_pushButton_setappName_clicked();

    void on_pushButton_librayPaths_clicked();

    void on_pushButton_organizationName_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_copys_clicked();

    void on_pushButton_existss_clicked();

    void on_pushButton_removes_clicked();

    void on_pushButton_renames_clicked();

    void on_pushButton_moveToTrashs_clicked();

    void on_pushButton_copy_clicked();

    void on_pushButton_exists_clicked();

    void on_pushButton_absoluteFilepath_clicked();

    void on_pushButton_absolutePath_clicked();

    void on_pushButton_fileName_clicked();

    void on_pushButton_filepath_clicked();

    void on_pushButton_size_clicked();

    void on_pushButton_path_clicked();

    void on_pushButton_baseName_clicked();

    void on_pushButton_completeBaseName_clicked();

    void on_pushButton_suffix_clicked();

    void on_pushButton_completeBaseName_2_clicked();

    void on_pushButton_isDir_clicked();

    void on_pushButton_isFile_clicked();

    void on_pushButton_isExecutable_clicked();

    void on_pushButton_birthTime_clicked();

    void on_pushButton_lastModified_clicked();

    void on_pushButton_lastRead_clicked();

    void on_pushButton_exists_s_clicked();

    void on_pushButton_exists_2_clicked();

    void on_pushButton_tempPath_clicked();

    void on_pushButton_rootPath_clicked();

    void on_pushButton_homepath_clicked();

    void on_pushButton_drives_clicked();

    void on_pushButton_currentPath_clicked();

    void on_pushButton_setCurrent_clicked();

    void on_pushButton_mkdir_clicked();

    void on_pushButton_temptemp_clicked();

    void on_pushButton_currenttemp_clicked();

    void on_pushButton_diytemp_clicked();

    void on_pushButton_cleartext_clicked();

    void on_pushButton_add_clicked();

private slots:
    void do_directoryChange(const QString &path);

    void do_fileChange(const QString &path);
    void on_pushButton_remove_3_clicked();

    void on_pushButton_direct_clicked();

    void on_pushButton_files_clicked();

private:
    Ui::Widget *ui;
    QFileSystemWatcher *file_watch;
public:
    void show_sender(QObject  *temp);
};
#endif // WIDGET_H

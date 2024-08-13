#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QStandardItemModel;
class QItemSelectionModel;
class QStringListModel;
class QFileSystemModel;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actionsetRoot_triggered();

    void on_radioButton_displayfiledir_clicked();

    void on_radioButton_displaydironly_clicked();

    void on_checkBox_filefilter_clicked(bool checked);

    void on_pushButton_apply_clicked();

    void on_treeView_clicked(const QModelIndex &index);


    void on_listView_clicked(const QModelIndex &index);

    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    QString file_path;
    QStringList m_ListView;
    QStringListModel *m_ListViewModel;
    QStandardItemModel *m_TableViewModel;
    QItemSelectionModel *m_TableViewSelectModel;
    QFileSystemModel *m_FileTreeViewModel;

private:
    void click_display(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

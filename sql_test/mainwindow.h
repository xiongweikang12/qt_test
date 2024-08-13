#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDataWidgetMapper>
#include "comboboxdelegate.h"
#include <QMap>

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

public:
    enum Action_T{
        Add_rec,
        insert_rec,
        dele_rec
    };

private slots:
    void on_actionopen_triggered();
    void do_currentindexchange(const QModelIndex &cur,const QModelIndex &pre);
    void do_currentcontentchange(const QModelIndex &cur,const QModelIndex &pre);
    void on_actionadd_triggered();

    void on_actioninsert_triggered();

    void on_actiondelete_triggered();

    void on_actionsave_triggered();

    void on_actioncancel_triggered();

    void on_actionselect_part_triggered();

    void do_keep_selectname(const QString &databsename,const QString &tablename);

    void do_open_select();

    void on_comboBox_sortitem_currentIndexChanged(int index);

    void on_radioButton_downsort_clicked();

    void on_radioButton_upsort_clicked();

    void on_radioButton_man_clicked();

    void on_radioButton_women_clicked();

    void on_radioButton_all_clicked();

    void on_actioneditrec_triggered();

    void on_actionup_stage_triggered();

    void do_set_sqlconfig(QMap<QString,QString> info);

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB;
    QSqlTableModel *table_model;
    QItemSelectionModel *m_select;
    QDataWidgetMapper *display_widget;
    //
    comboBoxDelegate  delegate_part;
    comboBoxDelegate delegate_sex;
    //
    QMap<QString,QStringList> part_all;
    QMap<QString,QStringList> sex_all;
    //
    QString database_select;
    QString table_select;
    QString now_database;
    QString now_table;
    //
    QStringList NowSql_fieldNames;

    void opentable();
    void show_substatus(Action_T tip,int row);
};
#endif // MAINWINDOW_H

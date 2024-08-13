#ifndef SELECT_MAINWINDOW_H
#define SELECT_MAINWINDOW_H


#include <QMainWindow>
#include <QtSql>
#include <QMap>
class QSqlDatabase;
class QSqlQueryModel;
class QSqlTableModel;
class QPlainTextEdit;

namespace Ui {
class Select_MainWindow;
}

class Select_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Select_MainWindow(QWidget *parent = nullptr);
    ~Select_MainWindow();
public:
    void set_selectdatabase(const QString &database);
    void set_selecttable(const QString &table);
    void set_sql_fild(const QStringList &fild);

private slots:
    void on_actionopensql_triggered();
    void do_currentrowchange(const QModelIndex &cur,const QModelIndex &pre);

    void on_tabWidget_tabCloseRequested(int index);

    void on_actionfirstrecord_triggered();

    void on_actionbefore_record_triggered();

    void on_actionnext_record_triggered();

    void on_actionlast_record_triggered();

    void do_updata_record(int index_tap,int info_row,QSqlRecord rec_t);

    void on_actionopenratesql_triggered();

    void do_set_sqlconfig(QMap<QString,QString> info);

    void do_print_rec(QSqlRecord rec);

    void do_change_rate();
private:
    void update_plainedit(QPlainTextEdit *plainedit, QSqlRecord rec);

private:
    Ui::Select_MainWindow *ui;
    QString nowselect_table;
    QString nowselect_database;
    QSqlDatabase DB;
    QSqlDatabase DB_rate;
    QSqlTableModel *table_model;
    QSqlQueryModel *qry_model;
    QItemSelectionModel *m_select;
    QStringList sql_fild;
    QMap<QString,QStringList> part_all;
    QMap<QString,QStringList> sex_all;
    //ratetion
    QString now_table;
    QString now_database;
    enum sql_type
    {
        nornmalSql,
        ratetionSql
    };

signals:
    void tell_tochange();


};

#endif // SELECT_MAINWINDOW_H

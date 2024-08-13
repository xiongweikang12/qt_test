#include "qsqlrelationaltablemodel_returnrec.h"
#include <QSqlRecord>

QSqlRelationalTableModel_returnrec::QSqlRelationalTableModel_returnrec(QObject *parent)
    : QSqlRelationalTableModel{parent}
{

}
QSqlRelationalTableModel_returnrec::QSqlRelationalTableModel_returnrec(QObject *parent, const QSqlDatabase &db)
    :QSqlRelationalTableModel(parent,db)
{

}

void QSqlRelationalTableModel_returnrec::do_return_rec(const QModelIndex &index)
{
    emit rec_return(this->record(index.row()));
}

void QSqlRelationalTableModel_returnrec::refresh_change()
{
    this->select(); //刷新
}


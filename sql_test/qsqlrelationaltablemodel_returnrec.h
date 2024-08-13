#ifndef QSQLRELATIONALTABLEMODEL_RETURNREC_H
#define QSQLRELATIONALTABLEMODEL_RETURNREC_H

#include <QObject>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>

class QSqlRelationalTableModel_returnrec : public QSqlRelationalTableModel
{
    Q_OBJECT
public:
    explicit QSqlRelationalTableModel_returnrec(QObject *parent = nullptr);
    explicit QSqlRelationalTableModel_returnrec(QObject *parent = nullptr,
                                      const QSqlDatabase &db = QSqlDatabase());
public slots:
    void do_return_rec(const QModelIndex &index);
    void refresh_change();
signals:
    void rec_return(QSqlRecord rec);
};

#endif // QSQLRELATIONALTABLEMODEL_RETURNREC_H

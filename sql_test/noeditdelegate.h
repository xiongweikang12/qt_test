#ifndef NOEDITDELEGATE_H
#define NOEDITDELEGATE_H

#include <QItemDelegate>
#include <QObject>

class NoeditDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit NoeditDelegate(QObject *parent = nullptr);

    // QAbstractItemDelegate interface
public:
    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    virtual bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index) override;
};



#endif // NOEDITDELEGATE_H

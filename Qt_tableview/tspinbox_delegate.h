#ifndef TSPINBOX_DELEGATE_H
#define TSPINBOX_DELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class Tspinbox_delegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit Tspinbox_delegate(QObject *parent = nullptr);

    // QAbstractItemDelegate interface
public:
    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    virtual void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    virtual void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    virtual void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};


#endif // TSPINBOX_DELEGATE_H

#ifndef TCOMOBO_DELEGATE_H
#define TCOMOBO_DELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class Tcomobo_delegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit Tcomobo_delegate(QObject *parent = nullptr);
    void setitems(QStringList items,bool editable);

    // QAbstractItemDelegate interface
public:
    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    virtual void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    virtual void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    virtual void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
private:
    QStringList combo_list;
    bool m_editable;
};



#endif // TCOMOBO_DELEGATE_H

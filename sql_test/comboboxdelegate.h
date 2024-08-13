#ifndef COMBOBOXDELEGATE_H
#define COMBOBOXDELEGATE_H

#include <QItemDelegate>
#include <QObject>
#include<QComboBox>

class comboBoxDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    comboBoxDelegate();

    // QAbstractItemDelegate interface
public:
    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    virtual void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    virtual void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    virtual void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void setItem(QStringList items,bool editable);
private:
    QStringList m_stringList;
    bool editable;
};



#endif // COMBOBOXDELEGATE_H

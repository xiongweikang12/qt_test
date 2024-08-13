#include "tspinbox_delegate.h"
#include <QSpinBox>

Tspinbox_delegate::Tspinbox_delegate(QObject *parent):QStyledItemDelegate(parent) {

}

QWidget *Tspinbox_delegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option)
    Q_UNUSED(index)
    QSpinBox *editor=new QSpinBox(parent);
    editor->setFrame(false);
    editor->setMinimum(0);
    editor->setMaximum(5000);
    return editor;
}

void Tspinbox_delegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QSpinBox *spinbox=dynamic_cast<QSpinBox*>(editor);
    spinbox->setValue(index.model()->data(index,Qt::EditRole).toInt());

}

void Tspinbox_delegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QSpinBox *spinbox=dynamic_cast<QSpinBox*>(editor);
    int value=spinbox->value();
    model->setData(index,value,Qt::EditRole);

}

void Tspinbox_delegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}

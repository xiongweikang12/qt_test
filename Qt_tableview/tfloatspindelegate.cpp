#include "tfloatspindelegate.h"
#include <QDoubleSpinBox>

TfloatspinDelegate::TfloatspinDelegate(QObject *parent)
    : QStyledItemDelegate(parent)
{

}

QWidget *TfloatspinDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option)
    Q_UNUSED(index)
    QDoubleSpinBox *editor=new QDoubleSpinBox(parent);
    editor->setMinimum(0);
    editor->setMaximum(5000);
    editor->setSingleStep(1);
    return editor;
}

void TfloatspinDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QDoubleSpinBox *spinbox=dynamic_cast<QDoubleSpinBox*>(editor);
    spinbox->setValue(index.model()->data(index,Qt::EditRole).toFloat());
}

void TfloatspinDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QDoubleSpinBox *spinbox=dynamic_cast<QDoubleSpinBox*>(editor);
    float value=spinbox->value();
    model->setData(index,value,Qt::EditRole);
}

void TfloatspinDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}

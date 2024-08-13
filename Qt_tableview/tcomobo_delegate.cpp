#include "tcomobo_delegate.h"
#include <QComboBox>

Tcomobo_delegate::Tcomobo_delegate(QObject *parent)
    : QStyledItemDelegate(parent)
{

}
void Tcomobo_delegate::setitems(QStringList items, bool editable)
{
    combo_list=items;
    m_editable=editable;
}

QWidget *Tcomobo_delegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    QComboBox *combo_editor=new QComboBox(parent);
    combo_editor->setEditable(m_editable);
    for(auto &list_item:combo_list)
    {
        combo_editor->addItem(list_item);
    }
    return combo_editor;
}

void Tcomobo_delegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QComboBox *combo_editor=dynamic_cast<QComboBox*>(editor);
    combo_editor->setCurrentText(index.model()->data(index,Qt::EditRole).toString());
}

void Tcomobo_delegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *combo_editor=dynamic_cast<QComboBox*>(editor);
    model->setData(index,combo_editor->currentText(),Qt::EditRole);
}

void Tcomobo_delegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}

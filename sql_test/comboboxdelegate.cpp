#include "comboboxdelegate.h"

comboBoxDelegate::comboBoxDelegate() {

}

QWidget *comboBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    QComboBox *combo_edit=new QComboBox(parent);
    combo_edit->addItems(this->m_stringList);
    combo_edit->setEditable(this->editable);
    return combo_edit;
}

void comboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{   QComboBox *combo_edit=static_cast<QComboBox*>(editor);
    combo_edit->setCurrentText(index.model()->data(index,Qt::EditRole).toString());
}

void comboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *combo_edit=static_cast<QComboBox*>(editor);
    model->setData(index,combo_edit->currentText());
}

void comboBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}

void comboBoxDelegate::setItem(QStringList items, bool editable)
{
    this->m_stringList=items;
    this->editable=editable;
}

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QAbstractItemView;
class QGroupBox;

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_radioButton_listWidget_clicked();

    void on_radioButton_treeWidget_clicked();

    void on_radioButton_tableWidget_clicked();

    void on_radioButton_listSoure_clicked();

    void on_checkBox_accecptDrops_clicked(bool checked);

    void on_checkBox_dragEnable_clicked(bool checked);

    void on_comboBox_dragDropMode_currentIndexChanged(int index);

    void on_comboBox_defultDropAction_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
    QAbstractItemView *m_view=nullptr;
    void refresh_ground(QGroupBox *temp_Groupbox);
    int get_index_bymode(Qt::DropAction mode);
    Qt::DropAction index_to_dropaction(int index);

    // QObject interface
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;
};

#endif // WIDGET_H

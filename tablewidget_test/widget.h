#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QLabel;
class QTableWidgetItem;
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
    void on_pushButton_settableHeader_clicked();
    void on_pushButton_setlinenum_clicked();

    void on_pushButton_inittabledata_clicked();

    void on_pushButton_insertline_clicked();

    void on_pushButton_addline_clicked();

    void on_pushButton_delectline_clicked();

    void on_pushButton_autolineH_clicked();

    void on_pushButton_autorowW_clicked();

    void on_pushButton_readtoText_clicked();

    void on_checkBox_tableeditable_clicked(bool checked);

    void on_radioButton_chooseline_clicked();

    void on_checkBox_linebgcolor_clicked(bool checked);

    void on_checkBox_HshowtableHeader_clicked(bool checked);

    void on_checkBox_VshowtableHeader_clicked(bool checked);

    void on_radioButton_choosetableitem_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_actionclear_edit_triggered();

    void on_pushButton_clearplainedit_clicked();

private:
    enum type_item
    {
        header_item=1005,
        name_item,
        sex_item,
        Birth_item,
        nation_item,
        score_item,
        ispeople_item

    };

    enum colnum_id
    {
        colName=0,
        colsex,
        colBirth,
        colnation,
        colscore,
        colispeople
    };

    QLabel *item_type;
    QLabel *student_name;
    QLabel *col_row;

private:
    Ui::Widget *ui;
    void creatItemrow(int, QString, QString, QDate, const char *, int, bool);
};
#endif // WIDGET_H

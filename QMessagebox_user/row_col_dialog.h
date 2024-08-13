#ifndef ROW_COL_DIALOG_H
#define ROW_COL_DIALOG_H

#include <QDialog>

namespace Ui {
class row_col_Dialog;
}

class row_col_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit row_col_Dialog(QWidget *parent = nullptr);
    ~row_col_Dialog();

private:
    Ui::row_col_Dialog *ui;
};

#endif // ROW_COL_DIALOG_H

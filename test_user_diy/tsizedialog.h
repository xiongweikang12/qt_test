#ifndef TSIZEDIALOG_H
#define TSIZEDIALOG_H

#include <QDialog>

namespace Ui {
class TsizeDialog;
}

class TsizeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TsizeDialog(QWidget *parent = nullptr);
    ~TsizeDialog();

private:
    Ui::TsizeDialog *ui;
public:
    void set_colrow(int col,int row);
    int return_col();
    int return_row();

    // QWidget interface
protected:
    virtual void closeEvent(QCloseEvent *event) override;
    virtual void showEvent(QShowEvent *event) override;
signals:
    void keep_enable(bool);
    void keep_disenable(bool);
    void set_rowcol(int,int);

private slots:
    void on_pushButton_ok_clicked();
};




#endif // TSIZEDIALOG_H

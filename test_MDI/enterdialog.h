#ifndef ENTERDIALOG_H
#define ENTERDIALOG_H

#include <QDialog>

namespace Ui {
class EnterDialog;
}

class EnterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EnterDialog(QWidget *parent = nullptr);
    ~EnterDialog();

private:
    Ui::EnterDialog *ui;
    QPoint m_lastpos;
    bool ismove=false;
    //
    QString user_name="user";
    QString user_pwd="12345";
    int counter_input=0;
    const int Max_count=3;
    bool save;
public:
    void set_code(QString name_pwd);
    void readSettings();
    void wirthSettings();

private slots:
    void on_pushButton_accpect_clicked();

    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
};



#endif // ENTERDIALOG_H

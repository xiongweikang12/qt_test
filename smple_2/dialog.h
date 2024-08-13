#ifndef DIALOG_H
#define DIALOG_H
#include<QDialog>

class QCheckBox;
class QPushButton;
class QRadioButton;
class  QPlainTextEdit;


class Dialog : public QDialog
{
    Q_OBJECT

private:
    QPushButton *QPushButton_ok;
    QPushButton *QPushButton_clear;
    QPushButton *QPushButton_cancel;
    QCheckBox  * QCheckBox_underline;
    QCheckBox  *QCheckBox_bold;
    QCheckBox *QCheckBox_itial;
    QPlainTextEdit *QPlainTextEdit_input;
    QRadioButton *QRadioButton_balck;
    QRadioButton *QRadioButton_red;
    void init_setup();

private slots:
    void do_funfonttype_bold(bool);
    void do_funfonttype_underline(bool);
    void do_funfonttype_itial(bool);
    void do_funfontcolor();
    void do_Plaineditclear();

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();


};
#endif // DIALOG_H

#ifndef MYTFORM_H
#define MYTFORM_H

#include <QWidget>

namespace Ui {
class MyTForm;
}

class MyTForm : public QWidget
{
    Q_OBJECT

public:
    explicit MyTForm(QWidget *parent = nullptr);
    ~MyTForm();

private slots:
    void on_actionopen_triggered();

    void on_actionsetfont_triggered();

private:
    Ui::MyTForm *ui;
signals:
    void emit_filename(const QString &name);
};

#endif // MYTFORM_H

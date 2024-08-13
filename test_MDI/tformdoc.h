#ifndef TFORMDOC_H
#define TFORMDOC_H

#include <QWidget>

namespace Ui {
class TFormdoc;
}

class TFormdoc : public QWidget
{
    Q_OBJECT

public:
    explicit TFormdoc(QWidget *parent = nullptr);
    ~TFormdoc();

private:
    Ui::TFormdoc *ui;
    QString filename;
    bool fileopen;
public:
    void Fileopen_getname(const QString &filename);
    void content_cut();
    void content_copy();
    void content_paser();
    void content_fontset();
private slots:
    void on_TFormdoc_destroyed();

signals:
    void is_tab_empty();

    // QWidget interface
protected:
    virtual void closeEvent(QCloseEvent *event) override;
};


#endif // TFORMDOC_H

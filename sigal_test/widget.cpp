#include "widget.h"
#include "ui_widget.h"
#include "mlabel_test.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->label,&MLabel_test::doubleclick,ui->label,&MLabel_test::do_someevent);
    ui->label_2->installEventFilter(this);
    //事件过滤器
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    ui->label->setText("窗口被双击!");
    // ui->label->adjustSize();
}

void Widget::on_Widget_windowTitleChanged(const QString &title)
{
    Q_UNUSED(title);
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->label_2)
    {
        if(event->type()==QEvent::Enter)
        {
            ui->label_2->setStyleSheet("background-color:rgb(170,255,255)");
        }
        else if(event->type()==QEvent::Leave)
        {
            ui->label_2->setText("靠进我，点击我l");
            ui->label_2->setStyleSheet("");
        }
        else if(event->type()==QEvent::MouseButtonPress)
        {
            ui->label_2->setText("鼠标按压");
        }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
            ui->label_2->setText("鼠标松开");
        }
    }
    return QWidget::eventFilter(watched,event); //因为是继承QWidget的
}

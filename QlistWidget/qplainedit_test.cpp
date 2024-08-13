#include "qplainedit_test.h"
#include <QMimeData>
#include <QFile>
#include<QTextStream>

QPlainedit_test::QPlainedit_test(QWidget *parent): QPlainTextEdit(parent) {

}

void QPlainedit_test::dropEvent(QDropEvent *event)
{
    qDebug()<<"plaintext_accecpt_drop_Data";
    // this->appendPlainText(QString::fromUtf8(event->mimeData()->data()));
    if(event->mimeData()->hasUrls())
    {
        QString file_path_1=event->mimeData()->urls().at(0).path();
        QString file_path=file_path_1.right(file_path_1.size()-1);
        qDebug()<<file_path;
        QFile file_open(file_path);
        if(file_open.open(QIODevice::ReadOnly))
        {
            QTextStream content_stream(&file_open);
            for(;!content_stream.atEnd();)
            {
                this->appendPlainText(content_stream.readLine());
            }
        }
        else
        {
            qDebug()<<"打开失败";
        }
        file_open.close();
        this->appendPlainText(event->mimeData()->urls().at(0).fileName());
    }
}

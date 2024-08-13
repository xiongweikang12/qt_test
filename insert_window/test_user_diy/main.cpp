#include "insert_window.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Insert_window w;
    w.show();
    return a.exec();
}

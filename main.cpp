#include "mainwindow.h"
#include <QApplication>
#include "window.h"

int main(int argc, char *argv[])
{
    QApplication appl(argc, argv);
    Window win;
    win.show();
    return appl.exec();
}

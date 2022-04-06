#include "mainwindow.h"
#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include "win.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Win win(0);
    win.show();
    return app.exec();
}

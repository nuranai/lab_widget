#include "mainwindow.h"
#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include "hello.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    Win win
    w.show();
    return a.exec();
}

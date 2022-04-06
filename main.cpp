#include "mainwindow.h"
#include <QtGui>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("Hello"); // изменение заголовка окна
    QLabel *helloLabel=new QLabel("Hello!",&w); // создание метки
    QPushButton *exitButton=new QPushButton("Close",&w);
    // создание кнопки
    QHBoxLayout *layout = new QHBoxLayout(&w); // создание
    // менеджера компоновки для управления размещением метки и кнопки в окне win
    layout->addWidget(helloLabel); // добавление метки к компоновщику
    layout->addWidget(exitButton); // добавление кнопки к компоновщику
    // связь сигнала нажатия кнопки с закрытием окна win
    QObject::connect(exitButton,SIGNAL(clicked(bool)),
                     &w,SLOT(close()));
    w.show();
    return a.exec();
}

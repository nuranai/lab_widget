#ifndef HELLO_H
#define HELLO_H
#include <QtGui>
#include <QLabel>
#include <QPushButton>
#include <QtWidgets>
#include "ui_mainwindow.h"

class Win: public QWidget, public Ui::MainWindow
{
    QLabel *helloLabel;
    QPushButton *exitButton;
public:
    Win(QWidget *parent = 0);
};

#endif // HELLO_H

#include "figure.h"
#include <math.h>

void Figure::move(float Alpha,QPainter *Painter) //функция для поворота фигур
{
    dx=halflen*cos(Alpha);//вычисляем отступ для координат
    dy=halflen*sin(Alpha);
    draw(Painter); // вызываем перерисовку
}
void MyLine::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x-dx,y-dy); //рисуем линию на холсте
}
void MyRect::draw(QPainter *Painter) //рисуем прямоугольник на холсте
{
    Painter->drawLine(x+dx,y+dy,x+dy,y-dx);
    Painter->drawLine(x+dy,y-dx,x-dx,y-dy);
    Painter->drawLine(x-dx,y-dy,x-dy,y+dx);
    Painter->drawLine(x-dy,y+dx,x+dx,y+dy);
}

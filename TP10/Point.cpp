//
// Created by win on 05/12/2019.
//

#include "Point.h"

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}


Point::Point(double x,double y)
{
    setX(x);
    setY(y);
}

Point::Point(Point const& copie): x(copie.x), y(copie.y)
{}

//
// Created by win on 12/11/2019.
//

#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

double Point::distance(Point P)
{
    return sqrt((P.x-x)*(P.x-x)+(P.y-y)*(P.y-y));
}

Point Point::milieu(Point P)
{
    Point P3;
    P3.x=(x+P.x)/2;
    P3.y=(y+P.y)/2;
    return P3;
}


// PARTIZ 3 & 4

double Point::getX() const {
    return x;
}

void Point::setX(double X) {
    this->x = X;
}

double Point::getY() const {
    return y;
}

void Point::setY(double Y) {
    this->y = Y;
}


void Point::saisir()
{
    double X;
    double Y;

    cin >> X >> Y;

    setX(X);
    setY(Y);
}



void Point::afficher()
{
    cout << "Les coordonnées sont : " << getX() << ";" << getY() <<endl;
}

Point::Point()
{
    setX(x);
    setY(y);
}

Point::Point(double x, double y)
{
    setX(x);
    setY(y);
}

Point::Point(double x) : x(x),y(2*x)
{
}

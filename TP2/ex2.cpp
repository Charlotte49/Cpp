//
// Created by win on 15/10/2019.
//

#include "ex2.h"
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
    cout << "Les coordonnées sont : " << getX() << ";" << getY();
}


double Point1::getX() const {
    return x;
}

void Point1::setX(double x) {
    this->x = x;
}

double Point1::getY() const {
    return y;
}

void Point1::setY(double y) {
    this->y = y;
}

void Point1::saisir()
{
    double X;
    double Y;

    cin >> X >> Y;

    setX(X);
    setY(Y);
}



void Point1::afficher()
{
    cout << "Les coordonnées sont : " << getX() << ";" << getY();
}

double Point1::distance(Point1* P)
{
    return sqrt((P->x-x)*(P->x-x)+(P->y-y)*(P->y-y));
}

Point1* Point1::milieu(Point1* P)
{
    Point1* P6 = new Point1();
    P6->setX((this->x+P->x)/2);
    P6->setY((this->y+P->y)/2);
    return P6;
}

void Point1::afficherCoord()
{
    cout<< "(" << getX() << "; " << getY() << ") ";     //Fonction ajoutée pour un meilleur affichage des coordonnées
}
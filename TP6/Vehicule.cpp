//
// Created by win on 05/12/2019.
//

#include "Vehicule.h"
#include <cstring>
#include <tgmath.h>
#include <iostream>

using namespace std;

Vehicule::Vehicule() : position(0,0)
{
    identifier = new char[10*sizeof(char)];
    strcpy(identifier,"");
    //identifier="";
}

Vehicule::Vehicule(char * id, Point p): position(p.getX(), p.getY())
{
   identifier= new char[10*sizeof(char)];
    strcpy(identifier,id);
}


Vehicule::~Vehicule()
{
    delete[] identifier;
}

char *Vehicule::getIdentifier() const
{
    return identifier;
}

void Vehicule::setIdentifier(char *identifier)
{
    this->identifier = identifier;
}

const Point &Vehicule::getPosition() const
{
    return position;
}

void Vehicule::setPosition(const Point &position)
{
    this->position = position;
}

float Vehicule::moveTo(Point p)
{
    float distance=0;
    distance=sqrt(pow(position.getX()-p.getX(),2)+pow(position.getY()-p.getY(),2));
    position.setY(p.getY());
    position.setX(p.getX());

    cout<<"La distance parcourue est : "<< distance << endl;
    return distance;
}

float Vehicule::moveTo(Vehicule v)
{
    moveTo(v.position);
}

void Vehicule::print()
{
    cout<< "[" << getIdentifier() << "] position : (" << position.getX() <<"," << position.getY() << ")" << endl;
}

void Vehicule::reset()
{
    position.setY(0);
    position.setX(0);
}

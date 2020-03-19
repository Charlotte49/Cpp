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

    identifier="";
    cout << "Vehicule()"<<this <<endl;
}

Vehicule::Vehicule(Point p, string id, float Carburant, float Consommation): position(p.getX(), p.getY())
{
    identifier=id;
    carburant=Carburant;
    consommation=Consommation;
    cout << "Vehicule(string, Point, float, float)"<<this<<endl;
}


Vehicule::~Vehicule()
{
    cout << "~Vehicule() " <<  this<<endl;
}

string Vehicule::getIdentifier() const
{
    return identifier;
}

void Vehicule::setIdentifier(string identifier)
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
    cout<< "[" << getIdentifier() << "] position : (" << position.getX() <<"," << position.getY() << ")";
}

void Vehicule::reset()
{
    position.setY(0);
    position.setX(0);
}

int GazVehicule::getOctaneRate()
{
    return octaneRate;
}

void GazVehicule::setOctaneRate(int octaneRate)
{
    this->octaneRate = octaneRate;
}

bool DieselVehicule::isFiltreAParticule()
{
    return filtreAParticule;
}

void DieselVehicule::setFiltreAParticule(bool filtreAParticule)
{
    DieselVehicule::filtreAParticule = filtreAParticule;
}

DieselVehicule::~DieselVehicule()
{
    cout << "~DieselVehicule() " <<  this <<endl;
}

GazVehicule::~GazVehicule()
{
    cout << "~GazVehicule() " <<  this << endl;
}

DieselVehicule::DieselVehicule(Point p, string id, float Carburant, float Consommation, bool FAP) : Vehicule(p, id, Carburant, Consommation)
{
    filtreAParticule = FAP;
    cout << "~DieselVehicule(Point p, string id, float Carburant, float Consommation, bool FAP) " <<  this << endl;
}

GazVehicule::GazVehicule(Point p, string id, float Carburant, float Consommation, int oct) : Vehicule(p, id, Carburant, Consommation)
{
    octaneRate=oct;
    cout << "~GazVehicule(Point p, string id, float Carburant, float Consommation, int oct)" <<  this << endl;
}

void GazVehicule:: fct(){
    cout << octaneRate;
}

void Vehicule::affichage()
{
    print();
    cout << ", consumption: " << consommation << ", fuel left: " << carburant << endl << endl;
}

void GazVehicule::affichage()
{
    print();
    cout << ", consumption: " << consommation << ", fuel left: " << carburant << ", octane rating: " << octaneRate << endl << endl;
}

void DieselVehicule::affichage()
{
    cout << "[" << getIdentifier();
}
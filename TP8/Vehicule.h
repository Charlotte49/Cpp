//
// Created by win on 05/12/2019.
//

#ifndef TP6_VEHICULE_H
#define TP6_VEHICULE_H

#include "Point.h"
#include <string>

using namespace std;

class Vehicule
{
private:
    string identifier;
    Point position;

protected:
    float carburant;
    float consommation;

public:
    string getIdentifier() const;

    void setIdentifier(string identifier);

    const Point &getPosition() const;

    void setPosition(const Point &position);

    Vehicule();
    Vehicule(Point p, string id, float Carburant, float Consommation);
    ~Vehicule();



    float moveTo(Point p);
    float moveTo(Vehicule v);

    void print();
    void affichage();
    void reset();
};

class DieselVehicule: public Vehicule
{
private:
    bool filtreAParticule;
public:
    DieselVehicule(Point p, string id, float Carburant, float Consommation, bool FAP);
    bool isFiltreAParticule();

    void setFiltreAParticule(bool filtreAParticule);
    ~DieselVehicule();

    void affichage();
};

class GazVehicule: public Vehicule
{
private:
    int octaneRate;
public:
    int getOctaneRate();

    void affichage();
    void setOctaneRate(int octaneRate);

    GazVehicule(Point p, string id, float Carburant, float Consommation, int oct);
    ~GazVehicule();

    void fct();
};


#endif //TP6_VEHICULE_H

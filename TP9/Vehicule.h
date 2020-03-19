//
// Created by ISEN on 02/12/2019.
//

#ifndef TP66_VEHICULE_H
#define TP66_VEHICULE_H

#include "Point.h"
#include <string>
#include <iostream>

using namespace std;

class Vehicule {
private:
    string identifier;
    Point position;
public:
    Vehicule(Point p, string id, float carburant, float consommation);
    Vehicule();
    virtual ~Vehicule();
    Vehicule(const Vehicule& v);
    Point getPosition();
    const string getIdentifier();
    void setPosition(Point p);
    void setIdentifier(string id);
    float moveTo(float x, float y);
    float moveTo(Vehicule& v);
    float moveTo(Point p);

    void print();
    virtual void affichage();
    void reset();

protected:
    float carburant;
    float consommation;
};


#endif //TP66_VEHICULE_H

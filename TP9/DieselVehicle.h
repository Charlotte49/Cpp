#ifndef TP66_DIESELVEHICLE_H
#define TP66_DIESELVEHICLE_H

#include "Point.h"
#include <string>
#include "Vehicule.h"
#include <iostream>

using namespace std;

class DieselVehicle : public Vehicule {
private:
    bool filtreAparticule;
public:
    DieselVehicle(Point p, string id, float carburant, float consommation, bool filtreAparticule);
    ~DieselVehicle();
    DieselVehicle(DieselVehicle const& dv);
    void affichage();
};


#endif //TP66_DIESELVEHICLE_H

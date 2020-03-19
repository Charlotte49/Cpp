#ifndef TP66_GASVEHICLE_H
#define TP66_GASVEHICLE_H

#include "Point.h"
#include <string>
#include "Vehicule.h"
using namespace std;

class GasVehicle : public Vehicule {
private:
    int indiceOctane;
public:
    GasVehicle(Point p, string id, float carburant, float consommation, int indiceOctane);
    ~GasVehicle();
    GasVehicle(GasVehicle const& gv);
    void affichage();
    float getConsommation();
    float getCarburant();
};


#endif //TP66_GASVEHICLE_H

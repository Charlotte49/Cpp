#include "DieselVehicle.h"

using namespace std;

DieselVehicle::DieselVehicle(Point p, string id, float carburant, float consommation, bool filtreAparticule) : Vehicule(p, id, carburant, consommation){
    this->filtreAparticule = filtreAparticule;
//    cout << "DieselVehicle (...)" << this << endl;
}

DieselVehicle::~DieselVehicle() {
    cout << "~DieselVehicle() " << this << endl;
}

void DieselVehicle::affichage() {
    cout << "" << endl;
    Vehicule::affichage();
    cout << ", filter: " << (filtreAparticule ? "yes" : "no");
}

DieselVehicle::DieselVehicle(DieselVehicle const &dv) : Vehicule(dv) {
    std::cout << "GasVehicle copy constructor " << this << std::endl;
    filtreAparticule = dv.filtreAparticule;
}

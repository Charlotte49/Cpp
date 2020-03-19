#include "GasVehicle.h"

GasVehicle::GasVehicle(Point p, string id, float carburant, float consommation, int indiceOctane) : Vehicule(p, id, carburant, consommation){
    this->indiceOctane = indiceOctane;
//    cout << "GasVehicle (...)" << this << endl;
    if(this -> indiceOctane >95){
        int reduction = indiceOctane - 95;
        float percent = 100 - reduction;
        this -> consommation = consommation * percent/100;
    }
}

GasVehicle::~GasVehicle() {
//    cout << "~GasVehicle()" << this << endl;
}

void GasVehicle::affichage() {
    cout << "" << endl;
    Vehicule::affichage();
    cout << ", octane rating: " << indiceOctane;
}

float GasVehicle::getConsommation(){
    return consommation;
}

float GasVehicle::getCarburant() {
    return carburant;
}

GasVehicle::GasVehicle(GasVehicle const &gv) : Vehicule(gv) {
    std::cout << "GasVehicle copy constructor " << this << std::endl;
    indiceOctane = gv.indiceOctane;
}

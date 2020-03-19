#include "Vehicule.h"
#include <string>
using namespace std;

Vehicule::Vehicule() : position(0,0){
    identifier = " ";
}

Vehicule::Vehicule(Point p, string id, float carburant, float consommation) : position(p) {
    identifier = id;
    this->carburant = carburant;
    this->consommation = consommation;
//    cout << "Vehicule (...) " << this << endl;
}

Vehicule::~Vehicule() {
    cout << "~Vehicule()" << endl;
}

Vehicule::Vehicule(const Vehicule &v): position(v.position) {
    identifier = v.identifier;
    consommation = v.consommation;
    carburant = v.carburant;
}

void Vehicule::setIdentifier(string id) {
    identifier = id;
}

void Vehicule::setPosition(Point p) {
    position = p;
}

const string Vehicule::getIdentifier(){
    return identifier;
}

Point Vehicule::getPosition() {
    return position;
}

float Vehicule::moveTo(float x, float y){
    float distanceTotale = sqrt((x-position.getX())*(x-position.getX())+(y-position.getY())*(y-position.getY()));
    float carburantNecessaire = consommation * distanceTotale / 100;

    if (carburantNecessaire<carburant){
//        cout << "j'ai suffisament de carburant" << endl;
        moveTo(Point(x,y));
        carburant -= carburantNecessaire;
        return distanceTotale;
    }

    else{
//        cout << "je n'ai pas suffisament de carburant" << endl;
        float distanceParcourue = 100 * carburant / consommation;
        float r = distanceParcourue/distanceTotale;
        float xx = (1-r)*x+ r*position.getX();
        float yy = (1-r)*y + r*position.getY();
        moveTo(Point(xx, yy));
        carburant = 0;
        return distanceParcourue;
    }
}

float Vehicule::moveTo(Vehicule& v) {
    return moveTo(v.position);
}

float Vehicule::moveTo(Point p) {
    position.setX(p.getX());
    position.setY(p.getY());
}


void Vehicule::print(){
      std::cout << "[" << identifier << "] position : (" << position.getX() << "," << position.getY() << "),";
}

void Vehicule::affichage(){
    print();
    cout<< " consumption: " << consommation << "," << " fuel left: " << carburant;
}
void Vehicule::reset() {
    moveTo(0,0);
}



#include <iostream>
#include "Vehicule.h"
#include "GasVehicle.h"
#include "DieselVehicle.h"
#include <vector>

void displayTests(){
    Vehicule vehicle(Point(5,6), "CC-987-JU", 50, 5.3);
    vehicle.affichage();
    GasVehicle gasVehicle(Point(25,3), "XY-358-PQ", 60, 6.8, 95);
    gasVehicle.affichage();
    DieselVehicle dieselVehicle(Point(2,10), "HD-888-ZY", 40, 5.5, true);
    dieselVehicle.affichage();
}

void consumptionTests(){
    DieselVehicle dieselVehicle(Point(2,10), "XY-358-PQ", 8, 5, false);
    cout << "*******" << endl;
    float traveletDist1 = dieselVehicle.moveTo(0, 100);
    std::cout << "Traveled distance: " << traveletDist1 << std::endl;
    //dieselVehicle.affichage();
    cout << "*******" << endl;
    float traveletDist2 = dieselVehicle.moveTo(0, 200);
    std::cout << "Traveled distance : " << traveletDist2 << std::endl;
    //dieselVehicle.affichage();
}

void gasVehicleCopyTest(){
    GasVehicle original(Point(25,3), "XY-358-PQ", 60, 6.8, 95);
    GasVehicle copy = original;
    original.setIdentifier("XXX");
    original.affichage();
    copy.affichage();
}

void dieselVehicleDestructionTest() {
    DieselVehicle* dieselVehicle = new DieselVehicle(Point(2, 10), "HD-888-ZY",
                                                     40, 5.5, true);
    Vehicule* vehicle = dieselVehicle; // upcast
    delete vehicle;
}

void octaneRatingConsumptionTests(){
    GasVehicle gasVehicle95(Point(0,0), "XY-358-PQ", 30, 5, 95);
    cout << "Traveled distance : " << gasVehicle95.moveTo(0, 100) << endl; // affichage 1
    gasVehicle95.affichage();
    GasVehicle gasVehicle98(Point(0,0), "HD-888-ZY", 30, 5, 98);
    cout << "Traveled distance : " << gasVehicle98.moveTo(0, 100) << endl; // affichage 2
    gasVehicle98.affichage();
}

void octaneRatingConsumptionTestsWithUpcast(const vector<Vehicule*>& vehicles){
    for(Vehicule* v : vehicles){
        v->affichage();
    }
}

void octaneRatingConsumptionTestsWithUpcast(){
    GasVehicle gasVehicle95(Point(0,0), "XY-358-PQ", 30, 5, 95);
    GasVehicle gasVehicle98(Point(0,0), "HD-888-ZY", 30, 5, 98);
    vector<Vehicule*> vehicles = { &gasVehicle95, &gasVehicle98 };
    octaneRatingConsumptionTestsWithUpcast(vehicles);
}

int main() {
    //displayTests();
//    consumptionTests();
//    gasVehicleCopyTest();
//dieselVehicleDestructionTest();
//   octaneRatingConsumptionTests();
//    octaneRatingConsumptionTestsWithUpcast();

    return 0;
}
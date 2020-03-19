#include <iostream>
#include "Vehicule.h"
#include "Point.h"

void displayTests1(){

    Vehicule vehicle(Point(5,6), "CC-987-JU", 50, 5.3);
vehicle.affichage();
    GazVehicule gasVehicle(Point(25,3), "XY-358-PQ", 60, 6.8, 95);

    DieselVehicule dieselVehicle(Point(2,10), "HD-888-ZY", 40, 5.5, true);

}


int main()
{
  displayTests1();
    return 0;
}
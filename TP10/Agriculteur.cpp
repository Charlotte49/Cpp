//
// Created by win on 23/01/2020.
//
#include <iostream>
#include "Agriculteur.h"

using namespace std;

Agriculteur::Agriculteur(int id) : id(id)
{}

void Agriculteur::notifier(float temp)
{
    cout<< "La nouvelle valeur de température est " << temp << endl;
}

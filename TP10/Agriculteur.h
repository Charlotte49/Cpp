//
// Created by win on 23/01/2020.
//

#ifndef TP10_AGRICULTEUR_H
#define TP10_AGRICULTEUR_H


#include "Observateur.h"

class Agriculteur : public Observateur
{
private:
    int id;
public:
    Agriculteur(int id);

    void notifier(float temp);

};


#endif //TP10_AGRICULTEUR_H

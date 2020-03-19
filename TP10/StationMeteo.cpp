//
// Created by win on 23/01/2020.
//

#include "StationMeteo.h"
#include "Observateur.h"

StationMeteo::StationMeteo(float temp) : temp(temp)
{}

void StationMeteo::setTemp(float temp)
{
    StationMeteo::temp = temp;

    notifierOb();
}

void StationMeteo::ajouter(shared_ptr<Observateur> o)
{
    observateurs.push_back(o);
}

void StationMeteo::notifierOb()
{
    for(shared_ptr<Observateur> o : observateurs)
    {
        o->notifier(temp);
    }
}

//
// Created by win on 23/01/2020.
//

#ifndef TP10_STATIONMETEO_H
#define TP10_STATIONMETEO_H


#include "Sujet.h"

class StationMeteo : public Sujet
{
private:
    float temp=0;
public:
    StationMeteo(float temp);
    void setTemp(float temp);

    virtual void ajouter(shared_ptr<Observateur> o);
    virtual void notifierOb();

};


#endif //TP10_STATIONMETEO_H

//
// Created by win on 23/01/2020.
//

#ifndef TP10_SUJET_H
#define TP10_SUJET_H

#include "Observateur.h"
#include <memory>
#include <vector>

using namespace std;

class Sujet
{
public:
    virtual void ajouter(shared_ptr<Observateur>)=0;
    virtual void notifierOb()=0;
    vector<shared_ptr<Observateur>> observateurs;
};


#endif //TP10_SUJET_H

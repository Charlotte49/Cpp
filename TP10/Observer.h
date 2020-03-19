//
// Created by win on 23/01/2020.
//

#ifndef TP10_OBSERVER_H
#define TP10_OBSERVER_H

#include <memory>
#include "ObservablePoint.h"

using namespace std;

class Observer
{
    virtual void update(shared_ptr <ObservablePoint>)=0;
};


#endif //TP10_OBSERVER_H

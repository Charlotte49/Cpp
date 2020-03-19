//
// Created by win on 24/01/2020.
//

#ifndef TP10_POINTOBSERVER1_H
#define TP10_POINTOBSERVER1_H


#include "Observer.h"

class PointObserver1 : public Observer
{
    void update(shared_ptr <ObservablePoint>);
};


#endif //TP10_POINTOBSERVER1_H

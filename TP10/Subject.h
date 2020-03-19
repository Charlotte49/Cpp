//
// Created by win on 23/01/2020.
//

#ifndef TP10_SUBJECT_H
#define TP10_SUBJECT_H

#include <vector>
#include <iostream>
#include <memory>
#include "Observer.h"

using namespace std;

class Subject
{
private:
    vector<shared_ptr<Observer>> observers;
public:
    void addObserver(shared_ptr <Observer>);
    void notifyObservers();


};


#endif //TP10_SUBJECT_H

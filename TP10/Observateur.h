//
// Created by win on 23/01/2020.
//

#ifndef TP10_OBSERVATEUR_H
#define TP10_OBSERVATEUR_H


class Observateur
{
public:
    Observateur();

    virtual void notifier(float temp)= 0;
};


#endif //TP10_OBSERVATEUR_H

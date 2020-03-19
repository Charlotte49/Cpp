//
// Created by win on 05/12/2019.
//

#ifndef TP6_VEHICULE_H
#define TP6_VEHICULE_H

#include "Point.h"


class Vehicule
{
private:
    char* identifier;
    Point position;
public:
    char *getIdentifier() const;

    void setIdentifier(char *identifier);

    const Point &getPosition() const;

    void setPosition(const Point &position);

    Vehicule();
    Vehicule(char* id, Point p);
    ~Vehicule();

    float moveTo(Point p);
    float moveTo(Vehicule v);

    void print();
    void reset();
};


#endif //TP6_VEHICULE_H

//
// Created by ISEN on 02/12/2019.
//

#ifndef TP66_POINT_H
#define TP66_POINT_H

#include <cmath>

class Point {
private:
    float x,y;
public:
    Point(float, float);
    Point(const Point & p);
    float getX();
    float getY();
    void setX(float xx);
    void setY(float yy);
};


#endif //TP66_POINT_H

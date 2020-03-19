//
// Created by ISEN on 02/12/2019.
//

#include "Point.h"

Point::Point(float xx, float yy) {
    x = xx;
    y = yy;
}

Point::Point(const Point& p) {
    this->x=p.x;
    this->y=p.y;
}

float Point::getX() {
    return x;
}

float Point::getY() {
    return y;
}

void Point::setX(float xx) {
    x = xx;
}

void Point::setY(float yy) {
    y = yy;
}

//float Point::moveTo(float xx, float yy) {
//    x=xx;
//    y=yy;
//    float dist = sqrt((x-xx)*(x-xx)+(y-yy)*(y-yy));
//    return dist;
//}
//
//float Point::moveTo(Point p) {
//    x=xx;
//    y=yy;
//    float dist = sqrt((x-xx)*(x-xx)+(y-yy)*(y-yy));
//    return dist;
//}

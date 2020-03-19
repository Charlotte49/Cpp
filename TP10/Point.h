//
// Created by win on 05/12/2019.
//

#ifndef TP6_POINT_H
#define TP6_POINT_H


class Point
{
private:
    double x;
    double y;

public:
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;

    Point(double x,double y);
    Point(Point const& copie);
};


#endif //TP6_POINT_H

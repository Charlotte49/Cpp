//
// Created by win on 12/11/2019.
//

#ifndef TP3_POINT_H
#define TP3_POINT_H


class Point {

private:
    double x=0;
    double y=0;
public:

    double getX() const;
    void setX(double x);

    double getY() const;
    void setY(double y);

    void saisir();
    double distance(Point P);
    Point milieu(Point P);


    void afficher();

    Point();
    Point(double x, double y);
    Point(double x);

};


#endif //TP3_POINT_H

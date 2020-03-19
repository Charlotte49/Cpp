//
// Created by win on 15/10/2019.
//

#ifndef TP2_EX2_H
#define TP2_EX2_H

/*  Partie 1 & 2
class Point {

public:

    double x=0;
    double y=0;

    void setXY(double X, double Y);
    double distance(Point P);
    Point milieu(Point P);

};
 */

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
};

class Point1
{
private:
    double x=0;
    double y=0;
public:
    double getX() const;
    void setX(double x);

    double getY() const;
    void setY(double y);

    void saisir();
    double distance(Point1* P);
    Point1 *milieu(Point1* P);


    void afficher();
    void afficherCoord();
};




#endif //TP2_EX2_H

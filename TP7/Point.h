//
// Created by win on 12/12/2019.
//

#ifndef TP7_POINT_H
#define TP7_POINT_H

#include <iostream>

using namespace std;

template<class T> class Point
{
private:
    T x;
    T y;
public:

    void setX(T x);
    void setY(T y);
    T getX();
    T getY();

    Point(T x,T y);
    Point (Point<T> const& copie);
    ~Point();

    void pointTest();
    void print();
};

template<class T> void Point<T>::setX(T x)
{
    this->x=x;
}

template<class T> void Point<T>::setY(T y)
{
    this->y=y;
}

template<class T> T Point<T>::getX()
{
    return x;
}

template<class T> T Point<T>::getY()
{
    return y;
}

template<class T> Point<T>::Point(T x, T y)
{
    setX(x);
    setY(y);
    cout << endl << "Point(T,T)" << this;
}

template<class T> Point<T>::Point(Point const &copie): x(copie.x), y(copie.y)
{}

template<class T> Point<T>::~Point()
{
    cout << "~Point()" << this;
}

template<class T> void Point<T>::print()
{
    cout << endl << "(" << getX() << "," << getY() << ")" << endl;
}

template<class T> void pointTest()
{
    Point<T> p1(6.9,2.4);
    p1.print();
}

#endif //TP7_POINT_H

//
// Created by win on 11/10/2019.
//

#include "ex1.h"
#include <iostream>
#include <cmath>

using namespace std;

double Equation::getA() {
    return a;
}
double Equation::getB() {
    return b;
}
double Equation::getC() {
    return c;
}
void Equation::setA(double A)
{
    if(a==0){cout<<"erreur";}
    else{ a= A;}
}

void Equation::setB(double B)
{
    b=B;
}

void Equation::setC(double C)
{
    c=C;
}

void Equation::display()
{
    cout<< a << "x^2 + " << b <<"x + "<<c<<" = 0"<<endl;
}

void  Equation::result(double& r1, double& r2) {

    double delta = (b * b) - 4 * a * c;
    double &refD=delta;
    if (delta > 0) {
        cout<<delta<<endl;
        double x1 = (-b - sqrt(delta)) / 2 * a;
        double x2 = (-b + sqrt(delta)) / 2 * a;

        r1=x1;
        r2=x2;
    }

    if (delta == 0) {
        double x = -b / (2 * a);
        r1=x;
    }


}

double Equation::image(double x)
{
    return (a*x*x+b*x+c);
}


//
// Created by win on 11/10/2019.
//

#ifndef TP2_EX1_H
#define TP2_EX1_H


class Equation {
    double a=2;
    double b=8;
    double c=1;

    public:

    void display();

    void result(double& r1, double& r2);

    double image(double x);

    void setA(double A);
    void setB(double B);
    void setC(double C);

    double getA();
    double getB();
    double getC();
};


#endif //TP2_EX1_H

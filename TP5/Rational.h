//
// Created by win on 29/11/2019.
//

#ifndef TP5_RATIONAL_H
#define TP5_RATIONAL_H


class Rational
{
private:
    int numerator;
    int denominator;
    int pgcd(int x, int y);
    int ppcm(int x, int y);

public:

    int getNumerator();
    int getDenominator();

    void setNumerator(int Numerator);
    void setDenominator(int Denominator);

    void afficher(Rational r1);

    Rational(int numerator, int denominator);
    Rational(Rational const& r);

    Rational reduce();
    bool equFract(Rational r1);
    Rational sumFract(Rational r1);
    Rational prodFract(Rational r1);
};


#endif //TP5_RATIONAL_H

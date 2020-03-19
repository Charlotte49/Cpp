//
// Created by win on 29/11/2019.
//

#include "Rational.h"
#include <iostream>

using namespace ::std;

int  Rational::pgcd(int x, int y)
{
    int r;
    while (y != 0)
    {
        r = x%y;
        x = y;
        y = r;
    }
    return x;
}

int  Rational::ppcm(int x, int y)
{
    int A=x;
    int B=y;
    while (A!=B)
    {
        while (A>B) B=B+y;
        while (A<B) A=A+x;
    }
    return A;
}


int Rational::getNumerator()
{
    return numerator;
}

int Rational::getDenominator()
{
    return denominator;
}

void Rational::setNumerator(int Numerator)
{
  this->numerator=Numerator;
}

void Rational::setDenominator(int Denominator=1)
{
    if(Denominator!=0)
    {
        this->denominator=Denominator;
    }
}

void Rational::afficher(Rational r1)
{
    cout<<r1.numerator<< "/" << r1.denominator;
}

Rational::Rational(int numerator, int denominator)
{
    setNumerator(numerator);
    setDenominator(denominator);
}

Rational::Rational(Rational const& r) : numerator(r.numerator),denominator(r.denominator)
{}


Rational Rational:: reduce()
{
    Rational r1 (numerator,denominator);
    int x=pgcd(numerator,denominator);

    numerator=numerator/x;
    denominator=denominator/x;

    return r1;
}

bool Rational::equFract(Rational r1)
{
    Rational r (getNumerator(),getDenominator());

    r.reduce();
    r1.reduce();

    return (r.numerator==r1.numerator && r.denominator==r1.denominator);

}

Rational Rational::sumFract(Rational r1)
{
    Rational r (getNumerator(),getDenominator());
    afficher(r);

    Rational r2 (r.numerator+r1.numerator, r.denominator+r1.denominator);

    if(r.denominator==r1.denominator)
    {
        Rational r2 (r.numerator+r1.numerator, r.denominator);

        cout<<endl;
        afficher(r2);

        return r2;
    }

    else
    {
        int p=ppcm(r.denominator,r1.denominator);
        Rational r2 (r.numerator*p+r1.numerator*p, r.denominator*p+r1.denominator*p);

        cout<<endl;
        afficher(r2);
        r2.reduce();

        cout<<endl;
        afficher(r2);

        return r2;
    }
    r2.reduce();


    return r2;
}


Rational Rational::prodFract(Rational r1){}
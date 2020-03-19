#include <iostream>
#include "Rational.h"

using namespace ::std;

int main()
{
    Rational r1 (2,8);
    Rational r2 (1,16);

    r1.sumFract(r2);

    return 0;
}
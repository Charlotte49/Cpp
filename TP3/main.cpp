#include <iostream>
#include "Point.h"

using namespace std;

void test1(){
    Point p;
    p.afficher();

}
/*void test2(){
    Point p();
    p.afficher();
}*/

void test3(){
    Point p(1,2);
    p.afficher();

}
void test4(){
    Point p(4);
    p.afficher();

}
void test5(){
    Point* p = new Point;
    p->afficher();

}
void test6(){
    Point* p = new Point();
    p->afficher();

}
void test7(){
    Point* p = new Point(4);
    p->afficher();

}
void test8(){
    Point* p = new Point(1,2);
    p->afficher();

}

void test9(){
    Point p = {1,2};
    p.afficher();
}

void test10(){
    Point p1(1,2);
    Point p2 = p1;
    p1.afficher();
    p2.afficher();
}

void test11(){
    Point p1(1,2);
    Point p2;
    p1 = p2;
    p1.afficher();
    p2.afficher();
}

void test12(){
    Point* p1 = new Point(1,2);
    Point* p2 = p1;
    p1->afficher();
    p2->afficher();
}

int main()
{

  test1();
 // test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  


return 0;
}
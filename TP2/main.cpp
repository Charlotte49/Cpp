#include <iostream> //cout endl
//#include "ex1.h"
#include "ex2.h"
#include "exo3.h"
#include <cstdlib> //rand srand
#include <ctime> //time

using std::cout;
using std::endl;

/* main exo1
int main() {

    int A,B,C;
    Equation eq1;
    cin>> A >> B >> C;
    eq1.setA(A);
    eq1.setB(B);
    eq1.setC(C);
    double i,j;
    double &r1=i;
    double &r2=j;
    eq1.result(r1,r2);
    eq1.display();
    cout << eq1.image(1) << endl;

    cout << r1 << r2;
    return 0;

}
 */

void exo2Part1ToPart3()
{
    cout << "EXO 1 ; " <<endl;
    Point P1,P2,P3;

    cout << "**SAISIE DU POINT A**" << endl;
    P1.saisir();
    P1.afficher();

    cout << endl << endl << "**SAISIE DU POINT B**" << endl;
    P2.saisir();
    P2.afficher();


    P3=P1.milieu(P2);

    cout<< endl << endl << "**MILIEU DE AB**" << endl;
    P3.afficher();

    double d = P1.distance(P2);

    cout << endl << endl << "** La distance AB vaut : " << d;


}

/////////

void exo2Part4Dyn()
{
    cout << endl << endl << "EXO 2 ; " <<endl;


    Point1* P4= new Point1();
    Point1* P5= new Point1();
    Point1* P6;


    cout << "**SAISIE DU POINT A**" << endl;
    P4->saisir();
    P4->afficher();

    cout << endl << endl << "**SAISIE DU POINT B**" << endl;
    P5->saisir();
    P5->afficher();


    P6=P4->milieu(P5);

    cout<< endl << endl << "**MILIEU DE AB**" << endl;
    P6->afficher();

    double d2 = P4->distance(P5);

    cout << endl << endl << "** La distance AB vaut : " << d2;

    delete(P4);
    delete(P5);
    delete(P6);
}



//////////////// EXO 2 PART 4 RANDOM

double randomDouble (double min, double max)
{
    return (rand() / (( double )RAND_MAX)) * (max-min) + min;
}

Point1* createRandomPath ( int nbSteps, double minX, double maxX, double minY, double maxY)
{
    Point1* tabpoints = new Point1[nbSteps]; // création de nbSteps objet

    for(int i =0; i<nbSteps; i++)
    {
        tabpoints[i].setX(randomDouble(minX,maxX));
        tabpoints[i].setY(randomDouble(minY,maxY));

    }

    return tabpoints;
}

void showRandomPath (Point1* pathPoints, int nbSteps)
{
    cout << "Les coordonnées aléatoires du chemin sont : " << endl << "(";
    for(int i=0; i<nbSteps;i++)
    {
        pathPoints[i].afficherCoord();
    }
    cout<< ")";
}

double followPath (Point1* point, Point1* path, int nbSteps)
{
    double d=point->distance(&path[0]);
    point->setX(path[0].getX());
    point->setY(path[0].getY());

    for(int i=1; i<nbSteps;i++)
    {
        d+=point->distance(&path[i]);
        point->setX(path[i].getX());
        point->setY(path[i].getY());

    }

    return d;
}

void exo3()
{
    cout << endl << endl << "-----Morpion-----" << endl;
    JeuMorpion* jeu = new JeuMorpion();
    jeu->start();
    delete jeu;
}

int main()
{
    //EXO 2 PART 1 TO PART 4 DYNAMIC                                   // QUAND DYNAMIQUE ON UTILISE -> SINON .
                                                                       // a->fx() ==> (*a).fx();
    exo2Part1ToPart3();
    exo2Part4Dyn();


    //// EXO 2 PART 4 RANDOM

    srand( time(nullptr) );
    Point1* path;
    Point1* E = new Point1 ();
    E->setX(0);
    E->setY(0);
    path=createRandomPath(4,0,3,0,3);
    showRandomPath(path,4);
    float distance = followPath(E,path,4);

    cout << endl << "Point E après déplacement dans le chemin aléatoire : ";
    E->afficher();
    cout << endl << "La distance parcourue est : " << distance;

    delete E;
    delete[] path;


    //EXO 3

    exo3();
}
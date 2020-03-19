#include <iostream>
#include "StationMeteo.h"
#include "Agriculteur.h"

using namespace std;

void senario1()
{
    StationMeteo st(0);

    shared_ptr<Agriculteur> a1 (new Agriculteur(1));
    st.ajouter(a1);
    st.setTemp(15);

    shared_ptr<Agriculteur> a2 (new Agriculteur(2));
    st.ajouter(a2);
    st.setTemp(50);
}

int main()
{
    //senario1();



    return 0;
}
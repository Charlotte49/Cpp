#include <iostream>


using namespace std;


void exo1() {

    int val1;
    int val2;

    bool negatif;
    bool positif;
    negatif=false;
    positif=true;

    cout << "Saisir val1" << endl;
    cin >> val1;

    cout << "Saisir val2" << endl;
    cin >> val2;

    cout << "val1 + val2 =" << val1+val2 << endl;
    if(val1+val2 > 0)
    {
        cout << std::boolalpha << "Positif ? " << positif << endl;
    }

    else
    {
        cout << std::boolalpha << "Positif ? " << negatif << " ou nul" << endl;
    }

}

void exo2()
{
    auto n=0;

    cout << "Saisir la taille d'un tableau" << endl;
    cin >> n;

    if(n>0) {
        int *tab = new int[n];
        float resultat=0;

        for (int i = 0; i < n; i++) {
            cin >> tab[i];
            resultat+=tab[i];
        }

        for(int j=0; j<n;j++)
        {
            cout << tab[j] << "; " << endl;
        }
        resultat=resultat/n;
        cout << "Moyenne des n valeurs " << resultat << endl;
        delete[] tab;
    }

}

int max(int n)
{
    return n;
}

int max(int m, int n)
{
    if(m>n)
    {
        return m;
    }
    else{ return n;}
}

int max(int m, int n, int r)
{
    if(m>n && m>r)
    {
        return m;
    }

    else if(n>m && n>r)
    {
        return n;
    }

    else { return r;}
}

void exo3()
{
    int m,n,r;

    cout << "Entrer n : "<< endl;
    cin >> n;
    cout << "Max : " << max(n) << endl;

    cout << "Entrer m et n : "<< endl;
    cin >> m >> n;
    cout << "Max : " << max(m,n)<< endl;

    cout << "Entrer m, n et r : "<< endl;
    cin >> m >> n >> r;
    cout << "Max : " << max(m,n,r) << endl;
}

void swap1 (int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b=tmp;
}

void swap2 (int& a, int& b)
{
    int tmp = a;
    a=b;
    b=tmp;
}

void exo4()
{
    int a = 4;
    int b=10;

    swap1(&a,&b);

    cout << "Valeur de a " <<a << " Valeur de b : " << b << endl;

    swap2(a,b);

    cout << "Valeur de a " <<a << " Valeur de b : " << b << endl;

}


int sum(int n)
{
    int sum= 0;

    for(int i=0; i<=n;i++)
    {
        sum+=i;
    }

    return sum;
}

int sum2(int n, int k=1)
{

    int sum= 0;

    for(int i=k; i<=n;i++)
    {
        sum+=i;
    }

    return sum;
}

void sum3 (int n, int& s, int k=1)
{
   for (int i = k; i <= n; i++)
   {
       s += i;
   }

}

void sum4 (int n, int& s, int k=1)
{
    if(k<=n)
    {
        for (int i = k; i <= n; i++) {
            s += i;
        }
    }
}

bool sum5 (int n, int& s, int k=1)
{
    if(k<=n)
    {
        s=k;
        for (int i = k+1; i <= n; i++) {
            s += i;
        }
        return true;
    }
    return false;
}

int main() {

    int n=6;
    int s=15;
 //   cin >> n;

    sum5(n,s,4);
    cout << "La somme est " << s  << endl;
    if(sum5(n,s,4))
    {
        cout << " (modifié)" << endl;
        }
    else { cout << " (non modifié)" << endl;}
    return 0;
}
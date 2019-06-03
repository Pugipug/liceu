#include <iostream>

using namespace std;

/* Se citeste un sir de n numere intregi, sa se calculeze suma numerelor din sir prin metoda 'Divide et Impera'.*/

int v[10];

int suma_numerelor(int p, int q)
{
    int mij,suma_sir_1,suma_sir_2,suma=0;
    if (p==q)
        return v[p];
    else
    {
        mij=(p+q)/2;
        suma_sir_1=suma_numerelor(p,mij);
        suma_sir_2=suma_numerelor(mij+1,q);
        return suma_sir_1+suma_sir_2;

    }
}

int main()
{
    int n,i;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }


    cout << "Suma numerelor din sir este: " << suma_numerelor(1,n);
    return 0;
}

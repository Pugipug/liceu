#include <iostream>

using namespace std;

/*  Se citeste un sir  de n numere intregi. Sa se calculeze suma numerelor din sir care au produsul cifrelor
un numar par.*/

int v[10];

int produs_cifrelor(int n)
{
    if (n==0)
        return 1;
    else
        return n%10*produs_cifrelor(n/10);

}

int suma_sir(int n)
{
    if (n==0)
        return 0;
    if (produs_cifrelor(v[n])%2==0)
        return v[n]+suma_sir(n-1);
    else
        return suma_sir(n-1);
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    int S=0;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> v[i];
    }
    cout << "Suma elementelor din sir care au suma elementelor pare este: ";
    cout << suma_sir(n);


    return 0;
}

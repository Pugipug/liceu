#include <iostream>

using namespace std;

/* se citeste un sir de n numere intregi. Sa se afiseze suma numerelor din sir care au produsul cifrelor pare un numar divizibil cu 3  */

int produs_cifre_pare(int n)
{
    if (n==0)
        return 1;
    if (n%2==0)
        return n%10*produs_cifre_pare(n/10);
    else
        return produs_cifre_pare(n/10);
}

int suma_numere(int v[], int n)
{
    if (n==0)
        return 0;
    if (produs_cifre_pare(v[n])%3==0)
        return v[n]+suma_numere(v,n-1);
    else
        return suma_numere(v,n-1);
}

int main()
{
    int v[10],n;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }
    cout << "Sirul dat este: ";
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";
    cout << endl << "Suma numerelor din sir care au produsul cifrelor pare divizibile cu 3 este: " << suma_numere(v,n);
    return 0;
}

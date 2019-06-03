#include <iostream>

using namespace std;

/*  Se citeste un sir de n numere. Sa se afiseze produsul inverselor numerelor din sir.  */

int invers(int n, int inv)
{
    if (n==0)
        return inv;
    else
        return invers(n/10,inv*10+n%10);
}

int produs(int v[], int n)
{
    if (n==0)
        return 1;
    else
        return invers(v[n],0)*produs(v,n-1);
}

int main()
{
    int v[10],n;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }
    cout << "Sirul dat la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";
    cout << endl << "Produsul este " << produs(v,n);
    return 0;
}

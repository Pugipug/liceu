#include <iostream>

using namespace std;

/* Se citeste un sir de n numere. Sa se afiseze produsul numerelor din sir care au suma cifrelor un palindrom prim */

int suma_cifrelor(int x)
{
    int S=0,c;
    while (x!=0)
    {
        c=x%10;
        S+=c;
        x=x/10;
    }
    return S;
}
int invers(int x)
{
    int inv=0,c;
    while (x!=0)
    {
        c=x%10;
        inv=inv*10+c;
        x=x/10;
    }
    return inv;
}

int prim(int x)
{
    int nr=0;
    for (int d=1;d<=x;d++)
        if (x%d==0)
            nr++;
    return nr;
}
int main()
{
    int sir[100],n,P=1;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> sir[i];
    }
    cout << "Sirul dat la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
    cout << endl << "Produsul numerelor din sir care au suma cifrelor un palindrom prim este: ";
    for (int i=1;i<=n;i++)
        if (prim(invers(suma_cifrelor(sir[i])))==2)
            P=P*sir[i];
    cout << P;
    return 0;
}

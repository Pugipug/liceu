#include <iostream>

using namespace std;

/*  Se citeste un sir de n numere intregi. Sa se afiseze media aritmetica a numerelor din sir care au suma
cifrelor egala cu un palindrom.  */

int suma_cifrelor(int x)
{
    if(x==0)
        return 0;
    else
        return x%10 + suma_cifrelor(x/10);
}

int invers(int x, int inv)
{
    if (x==0)
        return inv;
    else
        return invers(x/10,inv*10+x%10);
}

int main()
{
    int v[50],n,S=0,nr=0;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }
    cout << "Sirul dat la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";
    cout << endl << "Media aritmetica a numerelor din sir care au suma cifrelor un palindrom: ";
    for (int i=1;i<=n;i++)
    {
        if(suma_cifrelor(v[i])==invers(suma_cifrelor(v[i]),0))
        {
            S+=v[i];
            nr++;
        }
    }
    cout << (float)S/nr;;
    return 0;
}

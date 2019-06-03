#include <iostream>

using namespace std;

/* Se citeste un sir de n numere intregi. Sa se afiseze toate numerele din sir care au suma cifrelor un numar par. */

int suma_cifrelor(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+suma_cifrelor(n/10);
}

int numar_sc_pare(int v[], int n)
{
    if(n==0)
        return 0;
    if (suma_cifrelor(v[n])%2==0)
        return 1+numar_sc_pare(v,n-1);
    else
        return numar_sc_pare(v,n-1);
}

int main()
{
    int v[50],n;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }
    cout << "Sirul dat la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";
    cout << endl << "Numerele din sir care au suma cifrelor un numar par sunt: ";
    for (int i=1;i<=n;i++)
        if (suma_cifrelor(v[i])%2==0)
            cout << v[i] << " ";
    int nr_sc_pare=numar_sc_pare(v,n);
    cout << endl << "S-au gasit " << nr_sc_pare << " astfel de numere";
    return 0;
}

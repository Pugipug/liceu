#include <iostream>

using namespace std;

/*  Citirea si afisarea unui vector recursiv.  */

void citire_vector(int v[], int n)
{
    if (n>0)
    {
        citire_vector(v,n-1);
        cout << "v["<<n<<"]="; cin >> v[n];
    }
}

void afisare_vector(int v[], int n)
{
    if (n>0)
    {
        afisare_vector(v,n-1);
        cout << v[n] << " ";
    }
}

int main()
{
    int v[10], n;
    cout << "n="; cin >> n;
    citire_vector(v,n);
    afisare_vector(v,n);
    return 0;
}

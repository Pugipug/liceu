#include <iostream>

using namespace std;


/*  Concatenarea a doua liste  */

void citire_lista(int lista[], int& n)
{
    cout << "Introduceti numarul de elemente din lista: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> lista[i];
    }
}

void concatenare_liste(int lista1[], int lista2[], int n, int m)
{
    for (int i=1;i<=m;i++)
        lista1[n+i]=lista2[i];
}

void afisare_lista(int lista[], int n)
{
    for (int i=1;i<=n;i++)
        cout << lista[i] << " ";
}


int main()
{
    int L1[100],L2[100],n,m;
    citire_lista(L1,n);
    citire_lista(L2,m);
    cout << "Prima lista este: ";
    afisare_lista(L1,n);
    cout << endl << "A doua lista este: ";
    afisare_lista(L2,m);
    concatenare_liste(L1,L2,n,m);
    cout << endl << "Lista formata prin concatenarea celor 2 liste este: ";
    afisare_lista(L1,n+m);



    return 0;
}

#include <iostream>

using namespace std;

/*  Se citeste o lista. Se sa se insereze inaintea fiecarui numar impar 2018.  */

void citire_lista(int lista[], int& n)
{
    cout << "Introduceti numarul de elemente din lista: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> lista[i];
    }
}

void afisare_lista(int lista[], int n)
{
    for (int i=1;i<=n;i++)
        cout << lista[i] << " ";
}

int inserare_lista(int lista[], int& n)
{
    for (int linie=1;linie<=n;linie++)
        if (lista[linie]%2!=0)
        {
        n++;
    for(int i=n;i>=linie;i--)
    {

      lista[i]=lista[i-1];
    }
    lista[linie]=2018;
    linie++;
        }
}
int main()
{
    int L[100],n;
    citire_lista(L,n);
    cout << "Lista data este: ";
    afisare_lista(L,n);
    inserare_lista(L,n);
    cout << endl << "Lista dupa modificare este: ";
    afisare_lista(L,n);



    return 0;
}

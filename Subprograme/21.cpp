#include <iostream>
using namespace std;


/*  Scrieti definitia completa a subprogramului numar care primeste prin intermediul parametrului n un nr nat
nenul iar prin intermediul parametrului a un tablou unidimensional care contine n valori naturale. Subprogramul
furnizeaza prin parametrul k o valoare naturala egala cu numarul obtinut prin concatenarea valorii maxime cu
valoarea minima din tablou  */

void numar(int n, int a[], int& k)
{
    int maxim=INT_MIN,minim=INT_MAX;
    for (int i=1;i<=n;i++)
    {
        if (a[i]>maxim)
            maxim=a[i];
        if (a[i]<minim)
            minim=a[i];
    }
    int x=minim,nr=1,c;
    while (x!=0)
    {
        c=x%10;
        nr*=10;
        x=x/10;
    }
    k=maxim*nr+minim;
}


int main()
{
    int tablou[100],n,k;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> tablou[i];
    }
    cout << "Tabloul citit la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << tablou[i] << " ";
    numar(n,tablou,k);
    cout << endl << "Numarul format prin concatenarea elementului minim cu cel maxim este: " << k;
    return 0;
}

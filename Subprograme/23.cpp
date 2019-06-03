#include <iostream>

using namespace std;
/* Scrieti definia completa a programului C++ media care are doi parametrii: a(vector) si n(dimensiune)
Subproramul returneaza numarul de elemente din vector care sunt mai mari sau cel putin egale cu media aritmetica
a tuturor elementelor din tablou. */

int media(int a[], int n)
{
    int S=0,nr=0;
    for (int i=1;i<=n;i++)
    {
        S+=a[i];
        nr++;
    }
    int nr_elemente=0;
    for (int i=1;i<=n;i++)
        if (a[i]>=(float)(S/nr))
            nr_elemente++;
    return nr_elemente;
}

int main()
{
    int sir[100],n;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> sir[i];
    }
    cout << "Sirul citit la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
    cout << endl << "Numarul de elemente mai mari sau egale cu media aritmetica a tuturor elementelor din sir este: " << media(sir,n);
    return 0;
}

#include <iostream>

using namespace std;

/* Sa se insereze 2018 dupa fiecare numar impar dintr-un sir de n numere intregi.  */

void citire_sir(int sir[], int& n)
{
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> sir[i];
    }
}

void afisare_sir(int sir[], int n)
{
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
}

void inserare_sir(int sir[], int& n)
{
    for (int i=1;i<=n;i++)
    {
        if (sir[i]%2!=0)
        {
            n++;
            for (int j=n;j>i;j--)
                sir[j]=sir[j-1];
            sir[i+1]=2018;
        }
    }
}
int main()
{
    int sir[100],n;
    citire_sir(sir,n);
    cout << "Sirul dat la tastatura este: ";
    afisare_sir(sir,n);
    inserare_sir(sir,n);
    cout << endl << "Sirul dupa inserare este: ";
    afisare_sir(sir,n);
    return 0;
}

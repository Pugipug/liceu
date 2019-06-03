#include <iostream>

using namespace std;
/*  Se citeste un sir. Sa se elimine toate elementele nule din sir.  */

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

void stergere_valori_nule(int sir[], int& n)
{
    for (int i=1;i<=n;i++)
    {
        if (sir[i]==0)
        {
            for (int j=i;j<n;j++)
                sir[j]=sir[j+1];
            n--;
            i--;
        }
    }
}


int main()
{
    int sir[100],n;
    citire_sir(sir,n);
    cout << "Sirul dat la tastatura este: ";
    afisare_sir(sir,n);
    cout << endl << "Sirul dupa stergerea valorilor nule: ";
    stergere_valori_nule(sir,n);
    afisare_sir(sir,n);
    return 0;
}

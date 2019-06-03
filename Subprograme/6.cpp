#include <iostream>

/*  Se citeste un sir de n numere intregi,  sa se afiseze sumele cifrelor numerelor din sir */

using namespace std;

int suma_cifrelor(int x)
{
    int c,S=0;
    while (x!=0)
    {
        c=x%10;
        S+=c;
        x=x/10;
    }
return S;

}

int main()
{
    int sir[100],n;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
        {
        cout << "Elementul " << i << ": "; cin >> sir[i];
        }
    for (int i=1;i<=n;i++)
        {
        cout << "Suma cifrelor lui " << sir[i] << " este " << suma_cifrelor(sir[i]);
        cout << endl;
        }
    return 0;
}

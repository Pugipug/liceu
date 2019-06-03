#include <iostream>

using namespace std;

/* Se citeste un sir de n numere intregi. Sa se calculeze suma numerelor prime din sir */

int nr_divizori(int n)
{   int nr=0;
    for (int d=1;d<=n;d++)
        if (n%d==0)
            nr++;
    return nr;
}

int main()
{
    int sir[100],n,S=0;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> sir[i];
    }
    cout << "Sirul dat la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
    cout << endl << "Suma numerelor prime din sir este: ";
    for (int i=1;i<=n;i++)
        if (nr_divizori(sir[i])==2)
            S+=sir[i];
    cout << S;
    return 0;
}

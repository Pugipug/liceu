#include <iostream>

using namespace std;
/* Sa  se afiseze suma numerelor prime dintr-un sir */

int nr_divizori(int n)
{
    int nr=0;
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

    for (int i=1;i<=n;i++)
        if (nr_divizori(sir[i])==2)
            S+=sir[i];
    cout << "Suma numerelor prime din sir este: " << S;
    return 0;
}

#include <iostream>

using namespace std;

/*  Sa se calculeze recursiv, numarul numerelor negative din sir. */

int v[10];

int nr_negative(int n)
{
    if (n==0)
        return 0;
    if (v[n]<0)
        return 1+nr_negative(n-1);
    else
        return nr_negative(n-1);
}

int main()
{
    int n;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> v[i];
    }
    cout << "Numarul numerelor negative din sir este: " << nr_negative(n);
    return 0;
}

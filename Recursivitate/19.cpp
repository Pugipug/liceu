#include <iostream>

using namespace std;

/*  Se citeste un sir de n numere intregi. Sa se calculeze diferenta dintre suma elementelor pare si cea a elementelor impare  */

int v[10];

int diferenta(int n)
{
    if (n==0)
        return 0;
    if (v[n]%2==0)
        return v[n]+diferenta(n-1);
    else
        return diferenta(n-1)-v[n];

}

int main()
{
    int n;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> v[i];
    }

    cout << "Diferenta este: " << diferenta(n);
    return 0;
}

#include <iostream>

using namespace std;
/* Se citeste un sir. Sa se afiseze toate numerele perfecte din acel sir. */
int suma_divizori(int x)
{ int S=0;
    for (int d=1;d<=x/2;d++)
    {
        if (x%d==0)
            S+=d;
    }
    return S;
}
int main()
{
    int a[100],n;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> a[i];
    }
    cout << "Sirul citit la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << a[i] << " ";
    cout << endl << "Numerele perfecte din sir sunt: ";
    for (int i=1;i<=n;i++)
        if ((suma_divizori(a[i]))==a[i])
        cout << a[i] << " ";
    return 0;
}

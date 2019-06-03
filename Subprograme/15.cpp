#include <iostream>

using namespace std;
/* Se citesc 3 numere intregi a,b,c. Sa se ordoneze crescator cele 3 numere  */

void sortare(int& a, int& b)
{
    int aux;
    if (a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
}

int main()
{
    int a,b,c;
    cout << "Introduceti 3 valori separate prin spatiu: "; cin >> a >> b >> c;
    sortare(a,b);
    sortare(a,c);
    sortare(b,c);
    cout << "Numerele ordonate: " << a << " " << b << " " << c;
    return 0;
}

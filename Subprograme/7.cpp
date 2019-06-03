#include <iostream>

using namespace std;

/* Se citesc doua numere a si b. Sa se creeze un subprogram care afiseaza cel mai mare divizor comun a celor 2 numere.  */

int CMMDC(int a, int b)
{
    while(a!=b)
    {
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int maxim(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b,c;
    cout << "Introduceti 3 numere separate prin spatiu: "; cin >> a >> b >> c;
    cout << "CMMDC dintre " << a << " si " << b << " este: " << CMMDC(a,b);
    cout << endl << "CMMDC dintre " << a << " si " << c << " este: " << CMMDC(a,c);
    cout << endl << "CMMDC dintre " << b << " si " << c << " este: " << CMMDC(b,c);
    cout << endl << "Maximul este " << maxim(CMMDC(a,b),CMMDC(b,c));
    return 0;
}

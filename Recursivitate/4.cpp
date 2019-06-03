#include <iostream>

using namespace std;

/*   Se citesc 2 numere a si b. Sa se afiseze CMMMDC al lor. (subprogram recursiv)   */

int cmmdc(int a, int b)
{
    if (a==b)
        return a;
    else if (a>b)
        return cmmdc(a-b,b);
    else
        return cmmdc(b,b-a);

}

int main()
{
    int a,b;
    cout << "Introduceti primul numar: "; cin >> a;
    cout << "Introduceti al doilea numar: "; cin >> b;
    cout << "CMMDC dintre " << a << " si " << b << ": ";
    cout << cmmdc(a,b);
    return 0;
}

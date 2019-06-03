#include <iostream>

using namespace std;

/* Se citesc 3 numere intregi a,b,c. Sa se afiseze cel mai mare divizor comun dintre a si b, intre a si c si b si c */

int CMMDC(int a, int b)
{
        while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int main()
{
    int a,b,c;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    cout << endl << "CMMMDC dintre " << a  << " si " << b << ": " << CMMDC(a,b);
    cout << endl << "CMMMDC dintre " << a  << " si " << c << ": " << CMMDC(a,c);
    cout << endl << "CMMMDC dintre " << b  << " si " << c << ": " << CMMDC(b,c);
    return 0;
}

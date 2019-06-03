#include <iostream>

using namespace std;
/* Se citesc doua numere intregi a si b. Sa se afiseze numarul care are suma cifrelor mai mare  */

int suma_cifrelor(int n)
{
    int c,S=0;
    while(n!=0)
    {
        c=n%10;
        S+=c;
        n=n/10;

    }
    return S;
}
int main()
{
    int a,b;
    cout << "Introduceti 2 valori, separate prin spatiu: "; cin >> a >> b;
    int suma_cifrelor_a=suma_cifrelor(a);
    int suma_cifrelor_b=suma_cifrelor(b);
    cout << "Numarul care are suma cifrelor cea mai mare este: ";
    if (suma_cifrelor_a>suma_cifrelor_b)
        cout << a;
    else if (suma_cifrelor_a==suma_cifrelor_b)
        cout << "Egalitate";
    else
        cout << b;
    return 0;
}

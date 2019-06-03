#include <iostream>

using namespace std;
/* Se  citeste un nr nat n, sa se afiseze numarul cu dublul primei cifre in aceeasi variabila n.*/

void prelucrare_cifre(int& n)
{
    int c,P=1,nr=0;
    while (n>=10)
    {
        c=n%10;
        nr=nr+P*c;
        P=P*10;
        n=n/10;
    }
    n=2*n*P+nr;
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    prelucrare_cifre(n);
    cout << "Numarul format prin dublarea primei cifre este: " << n;

    return 0;
}

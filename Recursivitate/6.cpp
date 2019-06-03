#include <iostream>

using namespace std;

/*  Se citeste un numar natural n. Sa se calculeze produsul cifrelor impare.  */

int produsul_cifrelor(int n)
{
    if (n==1)
        return 1;
    else if (n%2!=0)
        return n%10*produsul_cifrelor(n/10);
    if (n!=1)
        return produsul_cifrelor(n/10);
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Produsul cifrelor impare a lui " << n << " este: "; cout << produsul_cifrelor(n);
    return 0;
}

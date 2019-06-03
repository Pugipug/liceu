#include <iostream>

using namespace std;

/*  Se citeste un numar natural n. Sa se afiseze numarul obtinut prin eliminarea cifrelor impare.  */

int cif_impare(int n)
{
    if(n==0)
        return n;
    if (n%2==0)
        return cif_impare(n/10)*10+n%10;
    else
        return cif_impare(n/10);
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Numarul format prin eliminarea cifrelor impare este: " << cif_impare(n);
    return 0;
}

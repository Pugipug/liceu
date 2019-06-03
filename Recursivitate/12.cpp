#include <iostream>

using namespace std;

/*  Sa se numere cifrele pare ale unui numar folosind un subprogram recursiv.  */

int nr_cifre_pare(int n)
{
    if (n==0)
        return 0;
    if(n%2==0)
        return 1+nr_cifre_pare(n/10);
    else
        return nr_cifre_pare(n/10);

    }


int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Numarul cifrelor pare este: "; cout << nr_cifre_pare(n);
    return 0;
}

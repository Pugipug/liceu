#include <iostream>

using namespace std;

/* Sa se scrie un subproram recursiv care calculeaza inversul unui numar. */

int invers(int n, int inv)
{
    if (n==0)
        return inv;
    else
        return invers(n/10,inv*10+n%10);
}

int main()
{
    int n,inv=0;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Inversul lui " << n << " este: "; cout << invers(n,inv);
    if (n==invers(n,inv))
        cout << " (Palindrom)";
    else cout << " (Nu e Palindrom)";
    return 0;
}

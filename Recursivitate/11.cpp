#include <iostream>

using namespace std;

/*  Sa se afiseze numarul divizorilor unui numar natural folosind un subprogram recursiv. */

int nr_divizori(int n,int d)
{
    if (d>n)
        return 0;
    else if (n%d==0)
        return 1+nr_divizori(n,d+1);
    else
        return nr_divizori(n,d+1);

}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Numarul divizorilor lui " << n << " este: "; cout << nr_divizori(n,1);
    return 0;
}

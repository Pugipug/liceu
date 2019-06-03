#include <iostream>

using namespace std;

/*  Se citeste un numar natural n cu cel mult 9 cifre. Afisati numaul de cifre distincte ale lui n  */

int nr_aparitii(int n, int nr, int cifra)
{
if (n==0)
    return nr;

if(n%10==cifra)
    {
        nr++;
        return nr_aparitii(n/10,nr,cifra);
    }

    else
        return nr_aparitii(n/10,nr,cifra);
}

int nr_cifre_distincte(int n, int nr)
{
    if (n==0)
        return nr;
    if (nr_aparitii(n,0,n%10)==1)
    {
        nr++;
        return nr_cifre_distincte(n/10,nr);
    }
    else
        return nr_cifre_distincte(n/10,nr);

}


int main()
{
    int n;
    cout << "n="; cin >> n;
    int nr=nr_cifre_distincte(n,0);
    cout << n << " are " << nr << " cifre distincte";

    return 0;
}

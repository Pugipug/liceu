#include <iostream>

using namespace std;

/*  Sa se calculeze suma primelor n numere naturale.  */

unsigned int suma(int n)
{
    if(n>0)
        return n+suma(n-1);
    else
        return 0;
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Suma numerelor naturale pana la " << n << " este: " << suma(n);
    return 0;
}

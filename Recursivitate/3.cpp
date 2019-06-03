#include <iostream>

using namespace std;

unsigned int suma(int n)
{
    if (n==0)
        return 0;
    if(n%2!=0)
        return n+suma(n-1);
    else
        return suma(n-1);
}


int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Suma numerelor naturale impare pana la " << n << " este: " << suma(n);
    return 0;
}

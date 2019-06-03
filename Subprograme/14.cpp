#include <iostream>

using namespace std;
/* Verificati daca un numar este palindrom */

int invers(int x)
{
    int inv=0,c;
    while (x!=0)
    {
        c=x%10;
        inv=inv*10+c;
        x=x/10;
    }
    return inv;
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    if (n==invers(n))
        cout << "Numarul este palindrom";
    else
        cout << "Numarul nu este palindrom";
    return 0;
}

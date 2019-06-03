#include <iostream>

using namespace std;


/*  Sa se scrie un subprogram recursiv care verifica daca un numar este prim.  */

bool verificare_prim(int a, int d)
{
    if (a%d==0)
        return verificare_prim(a,d+1);
    if (d>2)
        return false;
    else
        return true;
}


int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    if (n>1 && verificare_prim(n,n/2)==true)
        cout << "Numarul este prim";
    else
        cout << "Numarul nu este prim";

    return 0;
}

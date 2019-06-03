#include <iostream>
#include <fstream>
using namespace std;

/*  Se citeste un sir de n numere intregi din fisierul teza.in. Sa se scrie in fisierul teza.out toate numerele din sir care au
suma divizorilor un palindrom.  */

int invers(int n, int inv)
{
    if (n==0)
        return inv;
    else
        return invers(n/10,inv*10+n%10);
}

int suma_divizori(int n, int d)
{
    if (d>n)
        return 0;
    if (n%d==0)
        return d+suma_divizori(n,d+1);
    else
        return suma_divizori(n,d+1);
}

int main()
{
    int v[50],n,y,x=0;
    ifstream f("teza.in");
    ofstream g("teza.out");
    f>>n;
    while (f>>y)
    {
        x++;
        v[x]=y;
    }

    for (int i=1;i<=n;i++)
        if (suma_divizori(v[i],1)==invers(suma_divizori(v[i],1),0))
            g << v[i] << " ";
    f.close();
    g.close();
    return 0;
}

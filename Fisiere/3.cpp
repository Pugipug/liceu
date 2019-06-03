#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* Se citeste un numar natural n pe primul rand al fisierul sir.in iar pe al doilea rand n numere naturale. Sa se afiseze in fisierul sir.out sirul citit. */
    int v[100],i,n;
    ifstream f("sir.in");
    ofstream g("sir.out");
        f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for (i=1;i<=n;i++)
        g<< v[i] << " ";

    f.close();
    g.close();

    return 0;
}

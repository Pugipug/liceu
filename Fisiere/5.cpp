#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* Pe prima linie a fisierului joi.in descrie un numar natural n, iar pe urmatoarea linie n numere intregi. Sa se afiseze
    in fisierul joi.out toate numerele prime din sir. */

    int n,v[100],d,i,nr;
    ifstream f("joi.in");
    ofstream g("joi.out");
    f>>n;

    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
    {nr=0;
        for(d=1;d<=v[i];d++)
            if(v[i]%d==0)
                nr++;
        if (nr==2)
            g << v[i] << " ";
    }
    f.close();
    g.close();
    return 0;
}

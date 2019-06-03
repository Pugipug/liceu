#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* Pe prima linie a fisierului vector.in se citeste un numar nat n iar pe urmatoarea linie
    n numere intregi. Sa se afiseze in fisierul vector.out suma numerelor pozitive din sir si sirul ordonat
    crescator */

    int a[100],n,i,S=0;
    ifstream f("vector.in");
    ofstream g("vector.out");
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];

g << "Suma numerelor pozitive din sir este ";
    for(i=1;i<=n;i++)
        if(a[i]>0)
            S=S+a[i];
    g << S;
int schimb,aux;
    do {
    schimb=0;
    for (i=1;i<=n-1;i++)

        if (a[i]>a[i+1])
        {
            aux=a[i];
            a[i]=a[i+1];
            a[i+1]=aux;
            schimb=1;
        }

}while(schimb==1);
g << endl;
for (i=1;i<=n;i++)
 g << a[i] << " ";
    f.close();
    g.close();

    return 0;
}

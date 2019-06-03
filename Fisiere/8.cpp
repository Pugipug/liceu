#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* Se citeste un sir de nr din fisierul a.in, un sir de nr din fisierul b.in.
    Sa se afiseze in fisierul suma.out sirul care are suma elementelor mai mare iar in caz de egalitate
    se afiseaza ambele siruri*/

    int a[100],b[100],i,j,x,y,n=0,n1=0,S1=0,S2=0;
    ifstream f("a.in");
    ifstream c("b.in");
    ofstream g("suma.out");

    while (f>>x)
    {
        n++;
        a[n]=x;
    }

    while (c>>y)
    {
        n1++;
        b[n1]=y;
    }

    for(i=1;i<=n;i++)
        S1+=a[i];
    for (j=1;j<=n1;j++)
        S2+=b[j];
    if (S2>S1)
        for(j=1;j<=n1;j++)
    {
        g << b[j] << " ";
    }
    else if (S2<S1)
        for(i=1;i<=n;i++)
    {
        g << a[i] << " ";
    }
    else if (S1==S2)
    {
        for(i=1;i<=n;i++)
            g << a[i] << " ";
        g<<endl;
        for (j=1;j<=n1;j++)
            g << b[j] << " ";
    }

    f.close();
    g.close();



    return 0;
}

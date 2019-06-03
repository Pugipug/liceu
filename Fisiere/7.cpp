#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* Din fisierul sir.in se citeste un sir de numere. Sa se afiseze in fisierul sir.out sirul obtinut, suma numerelor
    negative din sir si sirul ordonat crescator */

        int v[100],n,i,x,S=0;
        ifstream f("sir.in");
        ofstream g("sir.out");
        n=0;
        while (f>>x)
        {
            n++;
            v[n]=x;
        }
        for (i=1;i<=n;i++)
        {
            g << v[i] << " ";
        }

        for (i=1;i<=n;i++)
        {
            if(v[i]<0)
                S+=v[i];

        }

        g << endl << "Suma este " << S;

        int schimb, aux;
        do{
            schimb=0;
            for(i=1;i<=n-1;i++)
                if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                schimb=1;
            }
        }while(schimb==1);

        g<<endl;

        for(i=1;i<=n;i++)
            {
                g << v[i] << " ";
            }
f.close();
g.close();

cout << endl << "Verificati fisierul sir.out!";
cout << endl;

    return 0;
}

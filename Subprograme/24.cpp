#include <iostream>
#include <limits.h>

using namespace std;


/*  Se citeste un sir de nr reale. Sa se inverseze elementele de valoare minima si de valoare maxima, presupunand
ca sunt unice.  */

int minim(int v[], int n)
{
    int minim=INT_MAX;
    for (int i=1;i<=n;i++)
    {
        if (v[i]<minim)
            minim=v[i];
    }
    return minim;
}
int maxim(int v[], int n)
{
    int maxim=INT_MIN;
    for (int i=1;i<=n;i++)
    {
        if (v[i]>maxim)
            maxim=v[i];
    }
    return maxim;
}

int main()
{
    int sir[100],n;
    cout << "Introduceti numarul de elemente: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> sir[i];
    }
    cout << "Sirul dat de la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
        int minim1=minim(sir,n);
        int maxim1=maxim(sir,n);
    for (int i=1;i<=n;i++)
    {
        if (sir[i]==minim1)
            sir[i]=maxim1;
        else
            if(sir[i]==maxim1)
            sir[i]=minim1;
    }
    cout << endl << "Sirul dupa inversiune este: ";
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
    return 0;
}

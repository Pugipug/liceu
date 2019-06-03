#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Se citeste un sir de n numere intregi, sa se verifice daca toate numerele din sir sunt patrate perfecte

    int v[100],i,n,x;
    cout <<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }

    /*MET 1
    int nr=0;
   /* for (i=1;i<=n;i++)
    {
        x=v[i];
        if (sqrt(x)==int(sqrt(x)))
            nr++;

    }
    if (nr==n)
        cout << "Toate numerele din sir sunt patrate perfecte";
    else
    cout << "Exista cel putin un numar din sir care nu este patrat perfect";
*/
    // MET 2 - cu OK

 int OK=1;
 for (i=1;i<=n;i++)
 {
     if (sqrt(v[i])!=int(sqrt(v[i])))
        OK=0;
 }

 if (OK==1) cout << "Toate numerele din sir sunt numere patrate perfecte";
 else
    cout << "Exista cel putin un numar care nu este patrat perfect";

    return 0;
}

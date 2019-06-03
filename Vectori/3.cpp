#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    // 1. Se citeste un sir de de n numere intregi, sa se afiseze cel mai mare numar din sir, cel mai mic nr din sir si cel mai mare
    // divizor comun dintre cel mai mic si cel mai mare nr din sir si cel mai mic multiplu comun dintre cel mai mare si cel mai mic
    //numar din sir

    int v[100],n,i,max=INT_MIN,min=INT_MAX,x;

    cout << "n="; cin >> n;
    for (i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]=";cin>>v[i];
    }




    for (i=1;i<=n;i++)
    {
        x=v[i];
        if (x>max)
            max=x;
        if (x<min)
            min=x;

    }

    cout<<endl<<"Maximul este " << max;
    cout << endl<<"Minimul este " << min;
int a,b,CMMMC;
    for (i=1;i<=n;i++)
    {
         a=min;
         b=max;
         while (a!=b)
         {
             if (a>b) a=a-b;
             else b=b-a;
         }
    }

    cout << endl << "CMMDC este " << a;

    // c) CMMMC = (a*b)/CMMMDC(a,b)

    cout << endl << "CMMMC este " << (min*max)/a;





    return 0;
}

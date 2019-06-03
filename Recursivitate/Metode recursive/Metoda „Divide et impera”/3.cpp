#include <iostream>

using namespace std;

/* Se citeste un sir de n numere intregi. Sa se afiseze cel mai mare divizor comun al numerelor din sir
folosind metoda 'Divide et Impera' */

void citire_sir(int v[], int n)
{
    if (n>0)
    {
        citire_sir(v,n-1);
        cout << "v["<<n<<"]="; cin >> v[n];
    }
}

int cmmdc(int a, int b)
{
    if (a==b)
        return a;
     if (a>b)
        return cmmdc(a-b,b);
     else
        return cmmdc(a,b-a);
}

int div(int v[], int p, int u)
{
    if (p==u)
        return v[p];
    else
    {
        int mij,div1,div2;
        mij=(p+u)/2;
        div1=div(v,p,mij);
        div2=div(v,mij+1,u);
        return cmmdc(div1,div2);
    }
}

int main()
{

    int v[10],n;
    cout << "Introduceti un numar: "; cin >> n;
    citire_sir(v,n);
    cout << "CMMMDC: " << div(v,1,n);

    return 0;
}

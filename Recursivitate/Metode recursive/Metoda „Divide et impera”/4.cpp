#include <iostream>

using namespace std;

/*  Se citeste un sir de n numere intregi. Sa se afiseze suma numerelor prime din sir  */

void citire_sir(int v[], int n)
{
    if (n>0)
    {
        citire_sir(v,n-1);
        cout << "v["<<n<<"]="; cin >> v[n];
    }
}
int prim(int n, int d, int nr)
{
    if (d>n && nr==2)
        return 1;
    else if (nr>2 || n==1)
        return 0;
    if (n%d==0)
        return prim(n,d+1,nr+1);
    else
        return prim(n,d+1,nr);
}

int div(int v[], int p, int u)
{
    if (p==u && prim(v[p],1,0)==1)
        return v[p];
    else if (p==u)
        return 0;
    else
    {
        int mij,div1,div2;
        mij=(p+u)/2;
        div1=div(v,p,mij);
        div2=div(v,mij+1,u);
        return div1+div2;
    }
}


int main()
{
    int v[10],n;
    cout << "n="; cin >> n;
    citire_sir(v,n);
    int suma_nr_prime=div(v,1,n);
    cout << "Suma numerelor prime din sir este " << suma_nr_prime;
    return 0;
}

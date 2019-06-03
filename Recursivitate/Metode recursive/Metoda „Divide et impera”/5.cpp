#include <iostream>

using namespace std;

/*  Se citeste un sir de n numere intregi. Sa se afiseze suma numerelor palindroame din sir  */

void citire_sir(int v[], int n)
{
    if (n>0)
    {
        citire_sir(v,n-1);
        cout << "v["<<n<<"]="; cin >> v[n];
    }
}

int invers(int n, int inv)
{
    if (n==0)
        return inv;
    else
        return invers(n/10,inv*10+n%10);
}

int div(int v[], int p, int u)
{
    if (p==u && v[p]==invers(v[p],0))
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
    int suma_nr_palindroame=div(v,1,n);
    cout << "Suma numerelor palindroame din sir este " << suma_nr_palindroame;;
    return 0;
}

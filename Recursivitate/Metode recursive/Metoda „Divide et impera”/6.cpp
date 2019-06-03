#include <iostream>

using namespace std;

/*  Se citeste un sir de n numere intregi. Sa se afiseze suma numerelor perfecte din sir  */

void citire_sir(int v[], int n)
{
    if (n>0)
    {
        citire_sir(v,n-1);
        cout << "v["<<n<<"]="; cin >> v[n];
    }
}

int nr_perfect(int n, int d, int suma)
{
    if (d==n)
        if (n==suma)
            return 1;
    else
        return 0;
    if (n%d==0)
        return nr_perfect(n,d+1,suma+d);
    else
        return nr_perfect(n,d+1,suma);
}

int div(int v[], int p, int u)
{
    if (p==u && nr_perfect(v[p],1,0)==1)
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
    int suma_nr_perfecte=div(v,1,n);
    cout << "Suma numerelor perfecte din sir este " << suma_nr_perfecte;

    return 0;
}

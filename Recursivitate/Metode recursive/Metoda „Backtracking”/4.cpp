#include <iostream>

using namespace std;

/*  Scrieti un program care afiseaza toate modurile de a aranja elementele unui sir
de numere intregi astfel incat in sirul aranjat sa nu existe doua elemente alaturate
negative.  */

int st[15],v[15],n;

int valid(int p)
{
    int OK=1;
    if(p>1 && st[p]<0 && st[p-1]<0)
        OK=0;
    for (int i=1;i<=p-1;i++)
        if (st[p]==st[i])
            OK=0;
    return OK;
}

void tipar(int p)
{
    for (int i=1;i<=p;i++)
        cout << st[i] << " ";
    cout << endl;
}

void backtracking(int p)
{
    for (int pval=1;pval<=n;pval++)
    {
        st[p]=v[pval];
        if (valid(p)==1)
            if (p==n)
                tipar(p);
            else
                backtracking(p+1);
    }
}

int main()
{
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }
    backtracking(1);
    return 0;
}

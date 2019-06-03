#include <iostream>

using namespace std;

/*  Generarea submultimilor

Sa se afiseze submultimile multimii 1,2,...,n unde valoarea lui n este citita de la tastatura.  */

int st[10],n;

int valid(int p)
{
    return 1;
}

void tipar(int p)
{
    for (int i=1;i<=p;i++)
        cout << st[i] << " ";
    cout << endl;
}

void backtracking(int p)
{
    for (int pval=st[p-1]+1;pval<=n;pval++)
    {
        st[p]=pval;
        if (valid(p)==1)
        {
            tipar(p);
            backtracking(p+1);
        }
    }
}

int main()
{
    cout << "n="; cin >> n;
    backtracking(1);
    return 0;
}

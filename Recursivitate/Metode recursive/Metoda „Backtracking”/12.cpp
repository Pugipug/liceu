#include <iostream>

using namespace std;

/*  Se considera un sir de n numere naturale. Sa se genereze toate subsirurile crescatoare de k elemente din cele n,
care se pot forma.  */

int st[10],v[10],n,k;

int valid(int p)
{
    int OK=1;
    if (p>1 && st[p]<=st[p-1])
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
            if (p==k)
            {
            tipar(p);
            }
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
    cout << "k="; cin >> k;
    backtracking(1);
    return 0;
}

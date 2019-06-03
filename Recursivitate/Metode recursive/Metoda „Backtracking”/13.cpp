#include <iostream>

using namespace std;

/*  Sa se genereze toate sirurile de lungime k formate din divizorii unui numar natural n, scrisi in ordine crescatoare  */

int st[10],n,k;

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
        st[p]=pval;
        if (n%st[p]==0)
        {
            if (valid(p)==1)
            if (p==k)
                tipar(p);
            else
                backtracking(p+1);
        }

    }
}


int main()
{
    cout << "n="; cin  >> n;
    cout << "k="; cin >> k;
    backtracking(1);
    return 0;
}

#include <iostream>

using namespace std;

/*  Sa se genereze toate numerele de n cifre care nu contin doua cifre pare sau impare alaturate.  */

int st[15],n;

int valid(int p)
{
    int OK=1;
    if ((p==1 && st[p]==0) || (p>1 && st[p]%2==0 && st[p-1]%2==0) || (p>1 && st[p]%2!=0 && st[p-1]%2!=0))
        OK=0;
    return OK;
}

void tipar(int p)
{
    for (int i=1;i<=p;i++)
        cout << st[i];
    cout << endl;
}

void backtracking(int p)
{
    for (int pval=0;pval<=9;pval++)
    {
        st[p]=pval;
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
    backtracking(1);
    return 0;
}

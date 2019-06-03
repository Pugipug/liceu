#include <iostream>

using namespace std;

/*   Sa se genereze toate numerele naturale ale caror cifre se regasesc printre cifrele unui numar dat X si au lungimea cel mult egala
cu lungimea lui X.    */

int st[10],v[10],X,n;

int valid(int p)
{
    int OK=1;
    if (p==1 && st[p]==0)
        OK=0;
    for (int i=1;i<p;i++)
        if (st[p]==st[i])
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
    for (int pval=1;pval<=n;pval++)
    {
        st[p]=v[pval];
        if (valid(p)==1)
            {
                tipar(p);
                backtracking(p+1);
            }
    }
}

int main()
{
    n=0;
    cout << "X="; cin >> X;
    while (X!=0)
    {
        n++;
        v[n]=X%10;
        X=X/10;
    }
    backtracking(1);
    return 0;
}

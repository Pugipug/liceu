#include <iostream>

using namespace std;

/*  Sa se genereze toate aranjamentele de n numere luate cate k  */

int st[10],v[10],n,k;

int valid(int p)
{
    int OK=1;
    if (p>=2)
        for (int i=1;i<p;i++)
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
            if (p==k)
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
    cout << "k="; cin >> k;
    backtracking(1);
    return 0;
}

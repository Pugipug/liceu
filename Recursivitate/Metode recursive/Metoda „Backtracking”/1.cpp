#include <iostream>

using namespace std;

// Generarea permutarilor a n elemente  folosind metoda backtracking.

int st[25],n;

int valid(int p)
{
    int OK=1;
    for (int i=1;i<=p-1;i++)
        if (st[p]==st[i])
            OK=0;
    return OK;
}

void tipar(int p)
{
    for (int i=1;i<=n;i++)
        cout << st[i] << " ";
        cout << endl;

}

void bektr(int p)
{
    for (int pval=1;pval<=n;pval++)
    {
        st[p]=pval;
        if (valid(p)==1)
            if (p==n)
                tipar(p);
            else
                bektr(p+1);
    }
}
int main()
{
    cout << "n="; cin >> n;
    bektr(1);
    return 0;
}

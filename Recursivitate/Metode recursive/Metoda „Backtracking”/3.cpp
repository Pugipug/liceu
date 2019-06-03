#include <iostream>

using namespace std;

/*  Sa se genereze toate cuvintele  de lungimea n din alfabetul morse ce contin doar caracterele '.' si '-' care nu incep si nu se termina cu '-'.  */

char st[25],v[3]; int n;

int valid(int p)
{
    int OK=1;
    if (p==1 && st[1]=='-') OK=0;
    if (p==n && st[p]=='-') OK=0;
    return OK;
}

void tipar (int p)
{
    for (int i=1;i<=p;i++)
        cout << st[i] << " ";
    cout << endl;
}

void backtracking(int p)
{
    for (int pval=1;pval<=2;pval++)
    {
        st[p]=v[pval];
        if (valid(p)==1)
            if (p==n) tipar(p);
            else backtracking(p+1);
    }
}

int main()
{
    v[1]='.';
    v[2]='-';
    cout << "n="; cin >> n;
    backtracking(1);
    return 0;
}

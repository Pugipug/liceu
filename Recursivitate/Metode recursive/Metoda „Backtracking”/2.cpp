#include <iostream>

using namespace std;

/*  Sa se afiseze toate sirurile posibile de n cifre in care prima cifra este 1 sau 2, ultima cifra este 8 sau 9 iar diferenta
dintre doua elemente consecutive este 2 sau 3.  */

int st[25],n;

int valid(int p)
{
    int OK=1;
    if (p==1 && (st[p]!=1 && st[p]!=2))
        OK=0;
    if (p==n && st[p]!=8 && st[p]!=9)
        OK=0;
    if (p>1 && st[p]-st[p-1]!=2 && st[p]-st[p-1]!=3)
        OK=0;

    return OK;
}



void tipar(int p)
{
    for (int i=1;i<=p;i++)
        cout << st[i] << " ";
    cout << endl;
}

void bektr(int p)
{
    for (int pval=0;pval<=9;pval++)
    {
        st[p]=pval;
        if (valid(p)==1)
            if (p==n) tipar(p);
            else bektr(p+1);

    }
}

int main()
{
    cout << "n="; cin >> n;
    bektr(1);
    return 0;
}

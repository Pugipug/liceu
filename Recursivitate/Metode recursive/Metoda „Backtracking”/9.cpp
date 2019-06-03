#include <iostream>

using namespace std;

/*  La un concurs sportiv s-au inscris n concurenti. Pentru fiecare concurent se cunoaste tara de origine
si numarul de concurs. In prima zi de concurs i-au startul m concurenti. Afisati toate posibilitiatile
prin car cei n sportivi pot lua startul astfel incat doi sportivi din aceeasi tara nu pot evolua unul langa
altul si trebuie respectata ordinea crescatoare a numerelor de concurs.  */

int st[10],n,m;
char v[10];

int valid(int p)
{
    int OK=1;
    if (p>1 && v[st[p]]==v[st[p-1]]) OK=0;
    if (p>1 && st[p]<=st[p-1]) OK=0;
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
    if (valid(p)==1)
        if (p==m)
            tipar(p);
        else
            backtracking(p+1);
    }

}

int main()
{
   cout << "n="; cin >> n;
    cout << "m="; cin >> m;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }
    backtracking(1);

    return 0;
}

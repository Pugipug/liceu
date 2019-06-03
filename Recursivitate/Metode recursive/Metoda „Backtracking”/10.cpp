#include <iostream>

using namespace std;

/*  Se dau n cuburi numerotate pana la n de laturi L[i] si culori C[i]. Sa se afiseze toate turnurile
care se pot forma luand H cuburi din cele n astfel:

- nu plasam un cub cu latura mai mare peste un cub cu latura mai mica.
- nu plasam doua cuburi de aceeasi culoare unul peste altul.
  */

  int st[10],L[10],n,H;
  char C[10];

  int valid(int p)
  {
      int OK=1;
      if (p>1 && L[st[p]]>L[st[p-1]])
        OK=0;
    if (p>1 && C[st[p]]==C[st[p-1]])
        OK=0;
    return OK;

  }

  void tipar(int p)
  {
      for (int i=1;i<=p;i++)
        {
            cout << st[i] << " ";
            cout << C[i] << " " << L[i];
        }
      cout << endl;
  }

  void backtracking(int p)
  {
      for (int pval=1;pval<=n;pval++)
      {
          st[p]=pval;
          if (valid(p)==1)
            if (p==H)
                tipar(p);
            else
                backtracking(p+1);
      }
  }

int main()
{
    cout << "n="; cin >> n;
    cout << "H="; cin >> H;
    for (int i=1;i<=n;i++)
    {
        cout << "L["<<i<<"]="; cin >> L[i];
        cout << "C["<<i<<"]="; cin >> C[i];
    }
    backtracking(1);
    return 0;
}

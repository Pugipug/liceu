#include <iostream>

using namespace std;

/* Se citeste un sir. Sa se calculeze maximul din acel sir prin metoda 'Divide et Impera' */

int v[10];

int div_imp(int p, int q)
    {
        int mij,max1,max2;
        if (p==q)
            return v[p];
        else
        {
            mij=(p+q)/2;
            max1=div_imp(p,mij);
            max2=div_imp(mij+1,q);
            if (max1>max2)
                return max1;
                  else
                return max2;
        }
    }

int main()
{
    int n,i;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }

    cout << "Maximul din sir este: " << div_imp(1,n);
    return 0;
}

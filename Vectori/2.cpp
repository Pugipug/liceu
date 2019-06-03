#include <iostream>

using namespace std;

int main()
{
     //se citeste un sir de maxim 25 de numere intregi , sa se afiseze suma palindroamelor din sir

    int v[26],i,n,S=0,c;

    cout << "n="; cin >> n;

    for (i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]=";cin>>v[i];
    }
    int x,inv;
    for (i=1;i<=n;i++)
    { inv=0;
    x=v[i];
    while (x!=0)
        {
        c=x%10;
        inv=inv*10+c;
        x=x/10;
        }
    if (v[i]==inv)

      S=S+v[i];
    }

 cout << S;



    return 0;
}

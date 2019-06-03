#include <iostream>

using namespace std;

int main()
{
    // Se citeste un sir de n numere intregi, sa se afiseze toate numerele din sir care au suma cifrelor un nr par

    int v[100],i,n;
    cout << "n="; cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]="; cin >> v[i];
    }

int S,c,x;
    for (i=1;i<=n;i++)
        {
         S=0;
        x=v[i];

        while(x!=0)
        {
            c=x%10;
            S=S+c;
            x=x/10;
        }
    if (S%2==0)
            cout << v[i] << " ";
    }

    return 0;
}

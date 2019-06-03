#include <iostream>

using namespace std;

/* Se citeste un sir. Sa se inlocuiasca fiecare element al sirului cu suma cifrelor cu aceeasi paritate cu indicele elementului.  */

int suma_cifrelor(int x)
{
    if (x==0)
        return 0;
    else
        return x%10+suma_cifrelor(x/10);
}

int main()
{
    int v[50],n;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }
    cout << "Sirul dat la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";

    for (int i=1;i<=n;i++)
    {
        if((suma_cifrelor(v[i])%2==0 && i%2==0) || (suma_cifrelor(v[i])%2!=0 && i%2!=0))
            v[i]=suma_cifrelor(v[i]);
    }
    cout << endl << "Sirul modificat este: ";
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";


            return 0;
}

#include <iostream>

using namespace std;

/* Se citeste un sir. Sa se calculeze folosind o functie recursiva produsul numerelor divizibile
cu 3 din sir.  */

int v[10];

int produs_nr_divizbile_333(int n)
{
    if (n==0)
        return 1;
    if (v[n]%3==0)
        return v[n]*produs_nr_divizbile_333(n-1);
    else
        return produs_nr_divizbile_333(n-1);
}

int main()
{
    int n;
    cout << "n="; cin >> n;
    for(int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> v[i];
    }
    cout << "Produsul numerelor divizibile cu 3 din sir este: " << produs_nr_divizbile_333(n);
    return 0;
}

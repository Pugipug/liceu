#include <iostream>

using namespace std;

/* Sa se afiseze toate numerele impare mai mici sau egale cu un numar n dat la tastatura  */
int n;

void afisare_numere_impare(int k)
{
    if (k<=n)
    {
        cout << k << " ";
        afisare_numere_impare(k+2);
    }
}

int main()
{
    cout << "n="; cin >> n;
    afisare_numere_impare(1);
    return 0;
}

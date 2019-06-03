#include <iostream>

using namespace std;

/*  Se citeste un sir de n numere intregi. Sa se afiseze numerele din sir
 care au suma cifrelor pare folosind un subprogram recursiv.  */

 int suma_cifrelor(int n)
 {
     if (n==0)
        return 0;
     else
        return n%10+suma_cifrelor(n/10);
}

bool verificare_paritate(int suma_cifrelor_n)
{
    if (suma_cifrelor_n%2==0)
        return true;
    else
        return false;
}


int main()
{
    int sir[50],n;
    cout << "Introduceti dimensiunea sirului: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> sir[i];
    }
    cout << "Sirul dat la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
    cout << endl << "Numerele din sir care au suma cifrelor pare este: ";
    for (int i=1;i<=n;i++)
        if (verificare_paritate(suma_cifrelor(sir[i]))==true)
            cout << sir[i] << " ";
    return 0;
}

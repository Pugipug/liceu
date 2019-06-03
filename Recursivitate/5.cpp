#include <iostream>

using namespace std;

/*  Sa se scrie o functie recursiva care calculeaza suma cifrelor unui numar.  */

int suma_cifrelor(int x)
{
    if (x==0)
        return 0;
    else
        return x%10+suma_cifrelor(x/10);
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Suma cifrelor lui " << n << " este: "; cout << suma_cifrelor(n);
    return 0;
}

#include <iostream>

using namespace std;
/* Scrieti definiai completa a subprogramului C++ multiplu care are 3 parametrii, a prin care primeste un tablou unidimensional
cu maximul 100 de numere naturale mai mici decat 1000, n numarul efectiv de elemente ale tabloului si k un numar natural.
Subprogramul returneaza numarul de elemente din tablou care sunt multiplii ai numarului k si au ultima cifra egala cu k */

int multiplu(int a[], int n, int k)
{
    int nr_elemente=0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]%k==0 && a[i]%10==k)
            nr_elemente++;
    }
    return nr_elemente;
}

int main()
{
    int tablou[101],n,k;
    cout << "Introduceti numarul de elemente din tablou: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> tablou[i];
    }
    cout << "Tabloul citit la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << tablou[i] << " ";
    cout << endl << "Introduceti valoarea numarului k: "; cin >> k;
    cout << "Numarul de elemente din tablou care sunt multiplii ai numarului " << k << " si care au ultima cifra " << k << " din tabloul citit sunt: " << multiplu(tablou,n,k);
    return 0;
}

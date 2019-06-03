#include <iostream>

using namespace std;
/*   Se citeste un sir de n numere intrei. Sa se afiseze toate palindroamele din sir.   */
int invers(int x)
{
    int inv=0,c;
    while (x!=0)
    {
        c=x%10;
        inv=inv*10+c;
        x=x/10;
    }
    return inv;
}


int main()
{
    int v[100],n;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> v[i];
    }
    cout << "Sirul citit la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";
    cout << endl << "Palindroamele din sir sunt: ";
    for (int i=1;i<=n;i++)
        if (v[i]==invers(v[i]))
            cout << v[i] << " ";
    return 0;
}

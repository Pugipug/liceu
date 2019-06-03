#include <iostream>

using namespace std;

int main()
{
    int L[100],i,n;
    cout << "Introduceti numarul de elemente din lista: "; cin >> n;
    for (i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> L[i];
    }
    cout << "Lista citita este: ";
    for (i=1;i<=n;i++)
        cout << L[i] << " ";
    int P,X;
    cout << endl;

    cout << endl << "Introduceti pozitia pe care sa se insereze: "; cin >> P;
    cout << "Introduceti elementul: "; cin >> X;
    // Inserare pe o pozitie
    n++;
    for (i=n;i>=P;i--)
       L[i+1]=L[i];
    L[P]=X;
    cout << endl << "Lista dupa modificare este: ";
    for (i=1;i<=n;i++)
        cout << L[i] << " ";

    // Inserare pe prima pozitie si pe ultima
    cout << endl << "Introduceti elementul pentru inserare: "; cin >> X;
    n++;
    for (i=n;i<=1;i--)
    {
        L[i+1]=L[i];
    }
    L[0]=X;
    L[n]=X;
    cout << endl << "Lista dupa modificare este: ";
    for (i=0;i<=n;i++)
        cout << L[i] << " ";
    return 0;
}

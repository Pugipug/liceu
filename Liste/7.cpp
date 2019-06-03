#include <iostream>
#include <iomanip>

using namespace std;


/*  Stergerea de linii si coloane intr-o matrice.   */


int main()
{
    int M[100][100],n,m;
    cout << "Introduceti numarul de linii: "; cin >> n;
    cout << "Introduceti numarul de coloane: "; cin >> m;

    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
    {
        cout << "Linia " << i << ", coloana " << j << ": "; cin >> M[i][j];
    }

    cout << "Matricea data la tastatura este: " << endl;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cout << setw(6) << M[i][j];
        }
        cout << endl;
    }
    int linie;
    cout << "Introduceti linia pe care vreti sa o stergeti: "; cin >> linie;
    for (int i=linie;i<=n;i++)
            for (int j=1;j<=m;j++)
                M[i][j]=M[i+1][j];

    cout << "Matricea dupa modificare este: " << endl;
    for (int i=1;i<n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cout << setw(6) << M[i][j];
        }
        cout << endl;
    }

    int coloana;
    cout << "Introduceti linia pe care vreti sa o stergeti: "; cin >> coloana;
    for (int i=1;i<n;i++)
            for (int j=coloana;j<=m;j++)
                M[i][j]=M[i][j+1];
    cout << "Matricea dupa modificare este: " << endl;
    for (int i=1;i<n;i++)
    {
        for (int j=1;j<m;j++)
        {
            cout << setw(6) << M[i][j];
        }
        cout << endl;
    }

    return 0;
}

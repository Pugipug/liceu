#include <iostream>
#include <iomanip>
using namespace std;

/*  Se citeste o matrice. Sa se insereze 0-uri pe o anumita linie a matricei, citita la tastatura.  */

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
        for(int j=1;j<=m;j++)
        {
            cout << setw(6) << M[i][j];
        }
        cout << endl;
    }
    int linie;
    cout << "Introduceti linia: "; cin >> linie;
    n++;
    for(int i=n;i>=linie;i--)
    {
        for (int j=1;j<=m;j++)
        {
            M[i+1][j]=M[i][j];
            M[i][j]=0;
        }

    }
    cout << "Matricea dupa modificare este: " << endl;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout << setw(6) << M[i][j];
        }
        cout << endl;
    }


    return 0;
}

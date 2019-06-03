#include <iostream>
#include <iomanip>

using namespace std;

/* Se citeste o matrice de n linii si m coloane. Sa se insereze dupa fiecare linie care are suma
numerelor para o linie cu elementele 0.  */

int suma_linie(int M[][10], int m, int i)
{
    int S=0;
    for (int j=1;j<=m;j++)
        S+=M[i][j];
    return S;
}

void inserare_linii(int M[][10], int& n, int m)
{
    for (int linie=1;linie<=n;linie++)
        if (suma_linie(M,m,linie)%2==0 && suma_linie(M,m,linie)!=0)
    {
            n++;
            for(int j=1;j<=m;j++)
            {
                for (int i=n;i>=linie+1;i--)
                {
                    M[i][j]=M[i-1][j];

                }
                M[linie+1][j]=0;
            }
    }

}

int main()
{
    int M[10][10],n,m;
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

    inserare_linii(M,n,m);
    cout << "Matricea dupa modificare este: " << endl;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cout << setw(6) << M[i][j];
        }
        cout << endl;
    }

    return 0;
}

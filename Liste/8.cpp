#include <iostream>
#include <iomanip>

using namespace std;

/*  Se citeste o matrice. Sa se stearga linia cu suma elementelor cea mai mare.  */

int suma_linie(int M[][100], int m, int i)
{
    int S=0;
    for (int j=1;j<=m;j++)
        S+=M[i][j];
    return S;
}

int suma_maxima_linii(int M[][100], int n, int m)
{
    int maxim=INT_MIN,s_linie;
    for (int i=1;i<=n;i++)
    {
        s_linie=suma_linie(M,m,i);
        if (s_linie>maxim)
            maxim=s_linie;
    }
    return maxim;
}

void eliminare_linii(int M[][100], int& n, int m)
{
    int maxim=suma_maxima_linii(M,n,m);
    for (int linie=1;linie<=n;linie++)
    {
        if(suma_linie(M,m,linie)==maxim)
        {
            for (int i=linie;i<=n;i++)
                for (int j=1;j<=m;j++)
                    M[i][j]=M[i+1][j];
            linie--; n--;
        }
    }
}



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

    eliminare_linii(M,n,m);

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

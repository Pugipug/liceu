#include <iostream>
#include <iomanip>

using namespace std;

/*  Se citeste o matrice cu n linii si m coloane.. Sa se afiseze minimul de pe fiecare linie si maximul de pe fiecare coloana.  */

int minim_linie(int matrice[][100], int m, int linie, int coloana)
{
    int minim=INT_MAX;
    for (coloana=1;coloana<=m;coloana++)
        if(matrice[linie][coloana]<minim)
            minim=matrice[linie][coloana];
        return minim;
}

int maxim_coloana(int matrice[][100], int n, int linie, int coloana)
{
    int maxim=INT_MIN;
    for (linie=1;linie<=n;linie++)
        if (matrice[linie][coloana]>maxim)
            maxim=matrice[linie][coloana];
    return maxim;
}

int main()
{
    int M[100][100],n,m,i,j;
    cout << "Introduceti numarul de linii: "; cin  >> n;
    cout << "Introduceti numarul de coloane: "; cin >> m;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            cout << "Linia " << i << ", coloana " << j << ": "; cin >> M[i][j];
        }
    }

    cout << endl << "Matricea data la tastatura este: " << endl;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            cout << setw(6) << M[i][j];
        }
        cout << endl;
    }

    for (i=1;i<=n;i++)
    {
        cout << "Minimul de pe linia " << i << " este: " << minim_linie(M,m,i,j);
        cout << endl;
    }

    for (j=1;j<=m;j++)
    {
        cout << "Maximul de pe coloana " << j << " este: " << maxim_coloana(M,m,i,j);
        cout << endl;
    }



    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;


/* Se citeste o matrice de n linii si m coloane. Sa se afiseze liniile care au cele mai multe
numere nule. */

int nr_nule(int matrice[][100], int m, int linie, int coloana)
{
    int nr=0;
    for (int coloana=1;coloana<=m;coloana++)
        if (matrice[linie][coloana]==0)
            nr++;
    return nr;
}


int main()
{
    int M[100][100],n,m,i,j,maxim=INT_MIN;
    cout << "Introduceti numarul de linii: "; cin >> n;
    cout << "Introduceti numarul de coloane: "; cin >> m;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
    {
        cout << "Linia " << i << ", coloana " << j << ": "; cin >> M[i][j];
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
int x;
    for (i=1;i<=n;i++)
    {
        x=nr_nule(M,m,i,j);
        if (x>maxim)
            maxim=x;
    }
    cout << endl;
cout << "Liniile cu cele mai multe numerele nule sunt: " << endl;
    for (i=1;i<=n;i++)
    {
        int nr=0;
        for (j=1;j<=m;j++)
        {
            if (nr_nule(M,m,i,j)==maxim)
        {
            cout << setw(6) << M[i][j];
            nr++;
        }
        }
        if (nr==m)
                cout << endl;

    }





    return 0;
}

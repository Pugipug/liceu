#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Se citeste o matrice de n linii si m coloane. Sa se afiseze toate numerele prime din matrice
    int A[100][100],i,j,n,m;
    cout << "n="; cin >> n;
    cout << "m="; cin >> m;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
    {
        cout << "A["<<i<<"]["<<j<<"]="; cin >> A[i][j];
    }

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout << setw(6) << A[i][j];
        }
        cout << endl;
    }
    int d,nrx=0,nr;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            nr=0;
            for(d=1;d<=A[i][j];d++)
            {
                if(A[i][j]%d==0)
                    nr++;
            }
            if (nr==2)
            {
                cout << A[i][j] << " ";
                nrx++;
            }
        }
    }

    cout << endl << "S-au gasit " << nrx << " astfel de numere";
    return 0;
}

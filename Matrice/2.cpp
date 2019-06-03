#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /* Se citeste o matrice cu n linii si m coloane. Sa se afiseze maticea, sa se calculeze suma elementelor negative din matrice
    si produsul elementelor pare */

    int A[100][100],i,j,n,m;
    cout << "linii="; cin >> n;
    cout << "coloane="; cin >> m;
    for (i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        cout << "A["<<i<<"]["<<j<<"]="; cin >> A[i][j];
    }

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++) {
        cout<<setw(6)<<A[i][j];
        } cout << endl;
        }

        int S=0,P=1;
        for (i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(A[i][j]<0)
                    S=S+A[i][j];
                if(A[i][j]%2==0 && A[i][j]>0)
                    P=P*A[i][j];
            }
        }

        cout << endl << "Suma elementelor negative din matrice este " << S;
        cout << endl << "Produsule elementelor pare este " << P;

    return 0;
}

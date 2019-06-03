#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Se citeste o matrice cu n linii si m coloane, sa se afiseze numarul palindramelor din matrice
    int A[100][100],i,j,n,m,inv,c,x,nr=0;
    cout <<"n="; cin >> n;
    cout << "m="; cin >> m;
    for (i=1;i<=n;i++)
        for(j=1;j<=m;j++)
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

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            x=A[i][j];
            inv=0;
            while(x!=0)
            {
                c=x%10;
                inv=inv*10+c;
                x=x/10;
            }
            if(A[i][j]==inv)
            {
                cout << A[i][j] << " ";
                nr++;
            }
        }
    }

    cout << endl << "S-au gasit " << nr << " palindroame in matrice";
    return 0;
}

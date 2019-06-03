#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A[100][100],i,j,n,m;
//citire
    cout << "Linii="; cin >> n;
    cout << "Coloane="; cin >> m;
//afisare
    for (i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        cout << "A["<<i<<"]["<<j<<"]="; cin >> A[i][j];
    }

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        cout << setw(6) << A[i][j];
    cout <<endl;
    }

    // parcurgere

    for (i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            //prelucaram asupra lui A[i][j]
        }
    }
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    /* Se citeste o matrice patratica de n*m elemente. Sa se calculeze si sa se afiseze suma numerelor pare de deasupra diagonalei
    principale, produsul nr impare de sub diagonala secundara*/


    int A[100][100],i,j,n;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        cout << "A["<<i<<"]["<<j<<"]="; //matrice patratica
        cin>>A[i][j];
    }

    for (i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
        {
            cout<<setw(6)<< A[i][j];
        }
        cout<<endl;
    }
    int S=0,P=1;

    for (i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i<j && A[i][j]%2==0)
                S=S+A[i][j];
    cout << endl << "Suma=" << S;

    for (i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if((i+j)>(n+1) && A[i][j]%2!=0)
                P=P*A[i][j];
    cout << endl << "P=" << P;

    return 0;
}

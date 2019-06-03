#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
    Se citeste o matrice patratica. Sa se verifice daca matricea este simetrica in raport cu diagonala principala
    */

    int A[100][100],i,j,n;
    cout<<"n="; cin >> n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        cout<<"A["<<i<<"]["<<j<<"]="; cin >> A[i][j];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<setw(6)<<A[i][j];
        }
        cout<<endl;
    }
int OK=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(A[i][j]!=A[j][i])
                OK=1;

if (OK==0) cout <<"Matricea este simetrica";
else cout << "Matricea nu este simetrica";


    return 0;
}

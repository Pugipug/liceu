#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
    Se citeste o matrice patratica de n*n elemente. Sa se calculeze suma nr prime de pe diagonala principala
    */

    int A[100][100],n,i,j,nrx=0;
    cout << "n="; cin >> n;
    for (i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        cout << "A["<<i<<"]["<<j<<"]="; cin >> A[i][j];
    }

    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++)
    {
        cout << setw(6) << A[i][j];
    }
    cout << endl;
}
int S=0,nr,d;
for (i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(i==j)
{
    nr=0;
    for(d=1;d<=A[i][j];d++)
        if(A[i][j]%d==0)
            nr++;
    if(nr==2)
    {
        S=S+A[i][j];
        nrx++;
    }
}

cout << endl << "Suma=" << S;
if(nrx!=1)
cout << endl << "S-au gasit " <<nrx<< " astfel de numere";
else cout << endl << "S-a gasit un singur numar";

    return 0;
}

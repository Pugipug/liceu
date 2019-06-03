#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
    Se citeste o matrice patratica. Sa se verifice daca toate numerele de pe diagonala secndara sunt pare
    */

    int A[100][100],i,j,n;

    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        cout<<"A["<<i<<"]["<<j<<"]=";cin>>A[i][j];
    }

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
    {
        cout<<setw(6)<<A[i][j];
    }
    cout<<endl;
}

    int nr=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            if((i+j)==(n+1) && A[i][j]%2==0)
                    nr++;
        }
        if(nr==n)
                cout<<"Toate numerele de pe diagonala secundara sunt pare";
        else cout << "Exista cel putin un numar de pe diagonala secundara care nu este par";
    return 0;
}

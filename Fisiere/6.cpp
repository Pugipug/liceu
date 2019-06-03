#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    /* Din fisierul matrice.in se citesc de pe prima linie 2 numere naturale n iar pe urmatoare n elemente
    numere intregi de pe urmatoarele linii ale fisierului. Sa se afiseze in fisierul matrice.out suma numerelor prime
    numarul numerelor pozitive de pe diagonala principale si secundare si numarul patratelor perfecte de sub diagonala
    principala  */

    int A[100][100],n,i,S=0,nr,j,d,nr_pozitive_principala_secundara=0;
    ifstream f("matrice.in");
    ofstream g("matrice.out");
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>A[i][j];

    g<<"Suma numerelor prime din matricea data este ";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        nr=0;
           for(d=1;d<=A[i][j];d++)
            if(A[i][j]%d==0)
                nr++;
        if(nr==2)
            S=S+A[i][j];
    }

    g<<S;
    g<<endl<< "Numarul numerelor pozitive de pe diagonala principala si secundara a matricei data este ";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if((i==j || (i+j==n+1)) && A[i][j]>0)
    {
        nr_pozitive_principala_secundara++;
    }

    g << nr_pozitive_principala_secundara;
    g<< endl <<"Numarul patratelor perfecte de sub diagonala principala este ";
    int numar_patrat_perfecte=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(i+j>i+1)
    {
        if(sqrt(A[i][j])==int(sqrt(A[i][j])))
            numar_patrat_perfecte++;
    }

    g << numar_patrat_perfecte;
    cout << endl << "Verificati fisierul matrice.out!";
    cout<<endl;




    return 0;
}

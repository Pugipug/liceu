#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*  Se citeste o matrice din fisierul matrice.in . Sa se afiseze in fisierul matrice.out:
a) Matricea data la tastatura
b) Minimul din matrice.
c) Numarul de coloane ordonate din matrice.
d) Matricea rezultata dupa stergerea liniei care are elementul minim
e) Matricea rezultata dupa inserarea unei coloane dupa coloana care reprezinta media aritmetica dintre prima si ultima pozitie
a matricei.
f) Matricea rezultata dupa stergere liniei care contine primul numar prim.
g) Matricea rezultata dupa stergerea liniei care contine ultimul palindrom.
   */

ifstream citire_fisier("matrice.in");
ofstream scriere_fisier("matrice.out");

void citire_matrice(int M[][10], int& n, int& m)
{
    citire_fisier>>n>>m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            cout << "Linia " << i << ", coloana " << j << ": "; cin >> M[i][j];
        }

}

void afisare_matrice(int M[][10], int n, int m)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            scriere_fisier << setw(6) << M[i][j];
        }
        scriere_fisier << endl;
    }
}

int minim_matrice(int M[][10], int n, int m)
{
    int minim=INT_MAX;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            if (M[i][j]<minim)
                minim=M[i][j];
    return minim;
}

int minim_linie(int M[][10], int m, int linie)
{
    int minim=INT_MAX;
    for (int j=1;j<=m;j++)
        if(M[linie][j]<minim)
            minim=M[linie][j];
    return minim;
}

int nr_coloane_strict_crescatoare(int M[][10], int n, int m)
{
    int OK,nr_coloane_ordonate=0;
    for(int j=1;j<=m;j++)
    {
        OK=1;
        for (int i=1;i<n;i++)
            if (M[i][j]>M[i+1][j])
                OK=0;
        if (OK==1)
            nr_coloane_ordonate++;
    }
    return nr_coloane_ordonate;
}

void stergere_linie_minim(int M[][10], int& n, int m)
{
    int matrice_minim=minim_matrice(M,n,m);
    for(int linie=1;linie<=n;linie++)
    {
        if(minim_linie(M,m,linie)==matrice_minim)
        {
            for (int j=1;j<=m;j++)
                for (int i=linie;i<=n;i++)
            {
                M[i][j]=M[i+1][j];
            }
            linie--; n--;
        }
    }

}

void inserare_coloana_poz_int(int M[][10], int n, int& m)
{
    int media_artimetica=(1+m)/2;
    for (int coloana=1;coloana<=m;coloana++)
        if(coloana==media_artimetica)
        {
            m++;
            for (int i=1;i<=n;i++)
            {
                for(int j=m;j>=coloana+1;j--)
                    M[i][j]=M[i][j-1];
            M[i][coloana+1]=0;
            }
        }

}

bool numar_prim(int x)
{
    int nr=0;
    for (int d=1;d<=x;d++)
        if (x%d==0)
            nr++;
    if (nr==2) return true;
    else
        return false;
}

int primul_nr_prim(int M[][10], int n, int m)
{
    int pozitie_linie_prim_nr_prim=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
            if (numar_prim(M[i][j])==true)
            {
                pozitie_linie_prim_nr_prim=i;
                break;
            }
        if (pozitie_linie_prim_nr_prim!=0)
            break;
    }
    return pozitie_linie_prim_nr_prim;


}

void stergere_linie_primul_nr_prim(int M[][10], int& n, int m)
{
    int poz_nr_prim=primul_nr_prim(M,n,m);
    for (int j=1;j<=m;j++)
    {
        for (int i=poz_nr_prim;i<=n;i++)
        {
            M[i][j]=M[i+1][j];
        }

    }
    n--;

}

int palindrom(int x)
{
    int c,inv=1;
    while(x!=0)
    {
        c=x%10;
        inv=inv*10+c;
        x=x/10;
    }
    return inv;
}

int ultimul_palindrom(int M[][10], int n, int m)
{
    int pozitie_linie_ultimul_palindrom=0;
    for (int i=n;i>=1;i--)
    {
        for (int j=m;j>=1;j--)
    {
        if (M[i][j]==palindrom(M[i][j]))
        {
            pozitie_linie_ultimul_palindrom=i;
            break;
        }
    }
    if (pozitie_linie_ultimul_palindrom!=0)
        break;
    return pozitie_linie_ultimul_palindrom;
}
    }

    void stergere_linie_ultimul_palindrom(int M[][10], int& n, int m)
{
    int poz_ultim_palindrom=ultimul_palindrom(M,n,m);
    for (int j=1;j<=m;j++)
    {
        for (int i=poz_ultim_palindrom;i<=n;i++)
        {
            M[i][j]=M[i+1][j];
        }

    }
    n--;

}


int main()
{
    int M[10][10], n, m;
    citire_matrice(M,n,m);
    scriere_fisier << "a) Matricea data la tastatura este: " << endl;
    afisare_matrice(M,n,m);
    scriere_fisier<<endl;
    scriere_fisier << "b) Minimul din matrice este " << minim_matrice(M,n,m) << endl;;
    scriere_fisier << "c) Numarul de coloane ordonate este " << nr_coloane_strict_crescatoare(M,n,m) << endl;

    stergere_linie_minim(M,n,m);
    scriere_fisier << "d) Matricea modificata dupa stergerei linie numarului minim este: " << endl;
    afisare_matrice(M,n,m);

    inserare_coloana_poz_int(M,n,m);
    scriere_fisier << "e) Matricea modificata dupa inserarea coloanei pe pozitia mediei aritmetice este: " << endl;
    afisare_matrice(M,n,m);

    stergere_linie_primul_nr_prim(M,n,m);
    scriere_fisier << "f) Matricea modificata dupa stergerea liniei primului numar prim este: " << endl;
    afisare_matrice(M,n,m);

    stergere_linie_ultimul_palindrom(M,n,m);
    scriere_fisier << "g) Matricea modificata dupa stergerei liniei ultimului palindrom este: " << endl;
    afisare_matrice(M,n,m);

    cout << endl << "Verificati fisierul matrice.out!";
    citire_fisier.close();
    scriere_fisier.close();


    return 0;
}

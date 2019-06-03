#include <iostream>

using namespace std;

/* Se citesc 2 vectori de dimensiuni n si m. Sa se afiseze numarul elementelor din al doilea vector mai mici
decat cel mai mic element din primul vector  */

void citire_vector(int v[], int& n)
{
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> v[i];
    }

}

void afisare_vector(int v[], int n)
{
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";
}

int minim(int v[], int n)
{
    int minim=INT_MAX;
    int i;
    for (i=1;i<=n;i++)
        if(v[i]<minim)
            minim=v[i];
    return minim;
}


int main()
{
    int a[100],b[100],n,m,nr=0,x;
    cout << "Citire vector a: " << endl;
    citire_vector(a,n);
    cout << "Citire vector b: " << endl;
    citire_vector(b,m);
    cout << "Vectorul a citit la tastatura este: ";
    afisare_vector(a,n);
    cout << endl << "Vectorul b citit la tastatura este: ";
    afisare_vector(b,m);
    x=minim(a,n);
    for (int i=1;i<=m;i++)
    {
        if (b[i]<x)

            {
            nr++;
            }
    }
    cout << endl << "Numarul de elemente din al doilea vector mai mici decat minimul din primul vector este: " << nr;


    return 0;
}

#include <iostream>

using namespace std;

/*  Se citeste un vector. Sa se scrie un subpogram care ordoneaza vectorul crescator.
Se vor folosi subprograme pentru citire, afisare si sortare.  */

void citire_vector(int v[], int& n)
{
    cout << "n="; cin >> n;
    for(int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << " : "; cin >> v[i];
    }

}

void sortare_vector(int v[], int n)
{
    int schimb,aux;
    do
    {
        schimb=0;
        for (int i=1;i<=n-1;i++)
            if (v[i]>v[i+1])
        {
            aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
            schimb=1;

        }
    }while(schimb==1);
}

void afisare_vector(int v[], int n)
{
    for (int i=1;i<=n;i++)
        cout << v[i] << " ";
}

int main()
{
    int a[100],n;
    citire_vector(a,n);
    cout << "Vectorul citit la tastatura este: ";
    afisare_vector(a,n);
    sortare_vector(a,n);
    cout << endl << "Vectorul dupa sortare este: ";
    afisare_vector(a,n);

    return 0;
}

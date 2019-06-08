#include <iostream>

using namespace std;

int main()
{
    //  1.vectori
    //  Se citeste un sir de cel mult 100 de nuemre intregi: 
    //  a) Sa se afiseze sirul de numere
    //  b) Sa se calculeze si sa se afiseze suma numerelor pare
    //  c) Sa se calculeze si sa se afiseze produsul numerelor ce au ultima cifra 7
    

    int v[101],i,n,Sp=0;


    cout << "n="; cin >> n;


    for (i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]="; cin >> v[i];
    }

    cout<<endl<<"a)"<<endl;

    for (i=1;i<=n;i++)
    {
        cout << v[i] << " ";
    }


    cout<<endl<<"b) Suma= "<<endl;

    for(i=1;i<=n;i++)
    {
        if(v[i]%2==0)
            Sp=Sp+v[i];
    }


    cout << Sp;

    cout<<endl<<"c) Produsul="<<endl;

    int P=1;
    for (i=1;i<=n;i++)
    {
        if(v[i]%10==7)
            P=P*v[i];
    }

    if(P!=1) cout << P; else cout << "Nu exista numere care au ultima cifra 7";
    cout<<endl<<"d) Sortare crescator: ";
    int aux,j;

    for (i=1;i<=n-1;i++)

        for(j=i+1;j<=n;j++)
        {
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;

            }
        }
    for (i=1;i<=n;i++)
    {
        cout << v[i] << " ";
    }


    return 0;
}

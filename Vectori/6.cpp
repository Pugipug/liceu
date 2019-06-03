#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
        // Se citesc 2 vectori a,b de dimensiuni n respectiv m. Sa se afiseze cate
        // numere din primul vector sunt mai mari decat toate numerele din al doilea vector.

        int a[100],b[100],i,j,n,m,max=INT_MIN,min=INT_MAX,nr=0;

    cout << "n="; cin >> n;
    for(i=1;i<=n;i++)
    {
        cout << "a["<<i<<"]="; cin >> a[i];
    }

    cout << "m="; cin >> m;
    for(j=1;j<=m;j++)
    {
        cout << "b["<<j<<"]="; cin >> b[j];
    }

    for (j=1;j<=m;j++)
        if(b[j]>max)
            max=b[j];

    for (i=1;i<=n;i++)
        if(a[i]>max)
            nr++;

cout << nr << " numere";


// Se citeste un sir de n nr intregi, sa se afiseze in ordine
//crescatoare toate nr pare din sir si in ordine descrescatoare nr impare.

 /*   int v[100],i,n,aux,p;
    cout << "n="; cin >> n;
    for (i=1;i<=n;i++)
    {
        cout << "v["<<i<<"]="; cin >> v[i];
    }

    int a[100],k=0,j=0,b[100];
    for(i=1;i<=n;i++)
{
        if (v[i]%2==0)
        {
            k++;
            a[k]=v[i];

    }
    else{
        j++;
        b[j]=v[i];
    }
}
    cout << endl << "Vectorul care contine numerele pare este ";
    for (i=1;i<=k;i++)
        cout << a[i] << " ";

    cout << endl << "Vectorul care contine numerele impare este ";
    for (i=1;i<=j;i++)
        cout << b[i] << " ";

 int schimb_vector_1,schimb_vector_2,aux1,aux2;
 do {
    schimb_vector_1=0;
    for(i=1;i<=k-1;i++)
        if(a[i]>a[i+1])
    {
        aux=a[i];
        a[i]=a[i+1];
        a[i+1]=aux;
        schimb_vector_1=1;
    }
 }while(schimb_vector_1==1);

    cout << endl << "Primul vector ordonat ";
    for(i=1;i<=k;i++)
        cout << a[i] << " ";

    do {
        schimb_vector_2=0;
        for(i=1;i<=j-1;i++)
            if(b[i]<b[i+1])
        {
            aux=b[i];
            b[i]=b[i+1];
            b[i+1]=aux;
            schimb_vector_2=1;
        }
    } while(schimb_vector_2==1);

cout << endl << "Al doilea vector ordonat ";
for(i=1;i<=j;i++)
    cout << b[i] << " ";
*/
return 0;
}

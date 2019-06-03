#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   // Se citeste n sir de n nr intregi, sa se afiseze descrescator toate numerele din sir care sunt patrate perfecte

   int v[100],i,n,j=0;
   cout << "n="; cin >> n;

   for (i=1;i<=n;i++)
   {
       cout << "v["<<i<<"]="; cin >> v[i];
   }
int a[100];
   for (i=1;i<=n;i++)
   {
       if (sqrt(v[i])==int(sqrt(v[i])))
       {
           j++;
           a[j]=v[i];
       }
   }
   cout << endl << "Sirul neordonat ";
   for (i=1;i<=j;i++)
    cout <<  a[i] << " ";
   cout << endl << "Vectorul ordonat descrescator este ";
   int schimb=0,aux;
do {
    schimb=0;
    for (i=1;i<=j-1;i++)

        if (a[i]<a[i+1])
        {
            aux=a[i];
            a[i]=a[i+1];
            a[i+1]=aux;
            schimb=1;
        }

} while(schimb==1);
for (i=1;i<=j;i++)
    cout << a[i] << " ";
    return 0;
}

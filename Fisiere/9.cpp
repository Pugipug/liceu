#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /* Din fisierul pregatire.in se citeste un sir de numere. Sa se afiseze in fisierul pregatire.out
    media aritmetica a palindroamelor din sir si suma numerelor din sir care au suma cifrelor un numar divizibil cu 3*/

    int x,n=0,v[100],i,media_aritmetica=0;
    ifstream f("pregatire.in");
    ofstream g("pregatire.out");

    while (f>>x)
    {
        n++;
        v[n]=x;
    }
    int nr=0,c,inv,Sc,suma_numerelor=0;
    g << "Palindroamele din sirul dat sunt ";
    for(i=1;i<=n;i++)
    {
        Sc=0;
        inv=0;
        x=v[i];
        while(x!=0)
        {
            c=x%10;
            inv=inv*10+c;
            Sc+=c;
            x=x/10;
        }
        if(v[i]==inv)
        {
            g << v[i] << " ";
            media_aritmetica+=v[i];
            nr++;
        }

        if (Sc%3==0)
            suma_numerelor+=v[i];

    }

    g << endl << "Media aritmetica a palindroamelor din sir este " << (float)media_aritmetica/nr;
    g << endl << "Suma numerelor din sir care au suma cifrelor divizibil cu 3 este " << suma_numerelor;

cout << "Verificati fisierul pregatire.out!";
cout << endl;

    return 0;
}

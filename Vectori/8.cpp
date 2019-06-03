#include <iostream>

using namespace std;

int main()
{
        //se citeste un sir de n numere intregi , sa se afiseze numarul  numerelor prime din sir

        int v[100],i,n,OK=1,x,nr,nr_prime=0,d;

       cout<<"n=";cin>>n;

       for (i=1;i<=n;i++)
       {
           cout << "v["<<i<<"]=";
           cin >> v[i];
       }

       for(i=1;i<=n;i++)
       {
           nr=0;
           for(d=1;d<=v[i];d++)
            if(v[i]%d==0)
                nr++;
           if(nr==2)
            nr_prime++;

       }


        cout << "In sir se afla " << nr_prime << " numere prime";

    return 0;
}

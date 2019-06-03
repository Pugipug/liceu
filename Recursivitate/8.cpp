#include <iostream>

using namespace std;


/*  Se citeste un numar natural. Sa se afiseze media aritmetica a cifrelor sale.  */

int suma_cifrelor(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+suma_cifrelor(n/10);
}

int numar_cifre(int n)
{
    if (n==0)
        return 0;
    else
        return 1+numar_cifre(n/10);
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    float media_aritmetica=suma_cifrelor(n)/(float)numar_cifre(n);
    cout << "Media aritmetica este: " << media_aritmetica;
    return 0;
}

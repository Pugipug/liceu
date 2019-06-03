#include <iostream>

using namespace std;
/* 2)
Scrieti un proram care citeste un nr nat n si determina daca nr format cu cifrele
pare ale sale si numarul format cu cifrele impare ale sale sunt prime intre ele

Programul afiseaza da sau nu.
*/

int nr_par_format(int n)
{
int c,nr=0,P=1;
while (n!=0)
{
    c=n%10;
    if (c%2==0)
        {
            nr=nr+P*c;
            P*=10;
        }
    n=n/10;
}
    return nr;
}

int nr_impar_format(int n)
{
int c,nr=0,P=1;
while (n!=0)
{
    c=n%10;
    if (c%2!=0)
        {
            nr=nr+P*c;
            P*=10;
        }
    n=n/10;
}
    return nr;
}

int CMMDC(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}
int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Numarul format cu cifrele pare ale lui " << n << " este " << nr_par_format(n);
    cout << endl;
    cout << "Numarul format cu cifrele impare ale lui " << n << " este " << nr_impar_format(n);
    cout << endl;
    if (CMMDC(nr_par_format(n),nr_impar_format(n))==1)
        cout << "DA";
    else cout << "NU";

    return 0;
}

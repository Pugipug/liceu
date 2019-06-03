#include <iostream>
using namespace std;

/* Sirul lui Fibonacci */

int main()
{
    unsigned int f1=1,f2=1,f3,n,i;
    cout << "Introduceti numarul de elemente din sirul lui Fibonacci: "; cin >> n;
    cout << "Primele " << n << " elemente ale sirului lui Fibonacci sunt: ";
    cout << f1 << " " << f2 << " ";
    for (i=3;i<=n;i++)
    {
        f3=f1+f2;
        cout << f3 << " ";
        f1=f2;
        f2=f3;
    }


    return 0;
}

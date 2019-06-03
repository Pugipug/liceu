#include <iostream>

using namespace std;
/* Sa se afiseze din primii n termeni ai surlui lui Fibonacci doar termenii care au suma cifrelor pare  */

int suma_cifrelor(int x)
{
    int c,S=0;
    while (x!=0){
        c=x%10;
        S+=c;
        x=x/10;
    }
    return S;
}

int main()
{
    unsigned int f1=1,f2=1,f3,n;
    cout << "Introduceti numarul de elemente din sirul lui Fibonacci: "; cin >> n;
    cout << "Dintre primele " << n << " elemente din sirul lui Fibonacci, elementele care au suma cifrelor para sunt: ";
    for (int i=3;i<=n;i++)
    {
        f3=f1+f2;
        if (suma_cifrelor(f3)%2==0)
            cout << f3 << " ";
        f1=f2;
        f2=f3;
    }

    return 0;
}

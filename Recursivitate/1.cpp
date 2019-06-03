#include <iostream>

using namespace std;

/*  Se citeste un numar la tastatura. Sa se calculeze factorialul acelui numar.  */

unsigned int factorial(int n)
{
    if (n>1)
        return n*factorial(n-1);
    else
        return 1;
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Factorialul lui " << n << " este: " << factorial(n);
    return 0;
}

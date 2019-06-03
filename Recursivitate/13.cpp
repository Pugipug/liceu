#include <iostream>

using namespace std;

/*   Sa se realizeze sirul lui Fibonacci folosind un subprogram recursiv.     */

int fibonacci(int n)
{
    if (n==1 || n==2)
        return 1;
    else
        return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Primele " << n << " elemente ale sirului lui Fibonacci sunt: ";
    for (int i=1;i<=n;i++)
        cout << fibonacci(i) << " ";
    return 0;
}

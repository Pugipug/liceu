#include <iostream>

using namespace std;

/*  Se citeste un sir de numere. Sa se calculeze recursiv suma numerelor din sir.   */

int v[5];

int suma(int n)
{
    if (n==0)
        return 0;
    else
        return v[n]+suma(n-1);


}
int main()
{
    int n;
    cout << "n="; cin >> n;
    for (int i=1;i<=n;i++)
        {
            cout << "Elementul " << i << ": "; cin >> v[i];
        }
    cout << "Suma este: " << suma(n);
    return 0;
}

#include <iostream>

using namespace std;

/* Se citeste un numar natural n. Sa se afiseze daca numarul e prim.  */

int prim(int n, int d, int p)
{
    if (p>2 || n==1)
        {
            cout << "Numarul nu este prim";
            return 0;
        }
    else if (d==n && p==2)
    {
        cout << "Numarul este prim.";
        return 0;
    }
    if (n%d==0)
        prim(n,d+1,p+1);
    else
        prim(n,d+1,p);



}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    prim(n,1,1);
    return 0;
}

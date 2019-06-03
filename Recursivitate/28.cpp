#include <iostream>

using namespace std;

/*  Se citeste un numar natural n. Sa se afiseze divizorii numarului.  */

void divizori(int n, int d)
{
    if (d<=n && n%d==0)
    {
        cout << d << " ";
        divizori(n,d+1);
    }
    else if (d<=n)
        divizori(n,d+1);
}

int main()
{
    int n;
    cout << "Introduceti un numar: "; cin >> n;
    cout << "Divizorii lui " << n << " sunt: ";
    divizori(n,1);
    return 0;
}

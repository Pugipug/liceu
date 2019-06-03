#include <iostream>

using namespace std;

void AriePatrat()
{
    int L;
    cout << "L="; cin >> L;
    cout << "Aria patratului este " << L*L;
}

void ArieDreptunghi()
{
    int l,L;
    cout << "l="; cin >> l;
    cout << "L="; cin >> L;
    cout << "Aria dreptunghiului este " << L*l;
}

void ArieRomb()
{
    int d1,d2;
    cout << "d1="; cin >> d1;
    cout << "d2="; cin >> d2;
    cout << "Aria rombului este " << (d1*d2)/2;
}


int main()
{
    AriePatrat();
    cout << endl;
    ArieDreptunghi();
    cout << endl;
    ArieRomb();
    cout << endl;
    return 0;
}



#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    // se citesc 3 numere intregi din fisierul numar.in . Sa se afiseze suma si produsul lor pe ecran.

    int a,b,c;
    ifstream f("numar.in");
    f>>a>>b>>c;
    cout << "Suma numerelor este " << a+b+c;
    cout << endl << "Produsul este " << a*b*c;
    ofstream g("rezultat.out");
    g << "Suma numerelor este " << a+b+c;
    g << endl << "Produsul este " << a*b*c;
    f.close();
    g.close();
    return 0;
}

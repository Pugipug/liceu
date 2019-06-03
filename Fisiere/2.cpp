#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*  Din fisierul info.in se citesc 5 numere intregi. Sa se afiseze in fisierul info.out media aritmetica a numerelor */
    int a,b,c,d,e;
    ifstream f("info.in");
    ofstream g("info.out");

    f>>a>>b>>c>>d>>e;
    g<<"Media aritmetica a numerelor este " << (a+b+c+d+e)/5.0;
    f.close();
    g.close();
    return 0;
}

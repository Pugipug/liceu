#include <iostream>
#include <math.h>
using namespace std;
/* Sa se scrie un priogram care in functie de dorinta utilizatorului calculeaza si afiseaza
     perimetrul unui romb de diagonala d1,d2 sau lungiumea unui cerc de raza R sau media aritmetica
     a 3 numere intregi a,b,c.*/

void PerimetruRomb()
{
    int d1,d2,A1,A2;
    cout << "d1="; cin >> d1;
    cout << "d2="; cin >> d2;
    A1=(d1/2)*(d1/2);
    A2=(d2/2)*(d2/2);
    cout << "Perimetrul unui romb de diagonala " << d1 << " si " << d2 << " este " << sqrt(A1+A2);

}
void LungimeCerc()
{
    int R;
    cout << "R="; cin >> R;
    cout << "Lungimea unui cerc de raza " << R << " este " << 2*3.14*R;
}

void media()
{
    float a,b,c;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    cout << "Media numerelor " << a << " , " << b << " si " << c << " este " << (float)(a+b+c)/3;
}
int main()
{
    cout << "Introduceti 1 pentru perimetrul rombului" << endl;
    cout << "Introduceti 2 pentru lungimea cercului" << endl;
    cout << "Introduceti 3 pentru media dintre 3 numere a,b,c";
    int selectie, incercare_din_nou=1;

    do
    {
        cout << endl<< "Introduceti una dintre valorile de mai sus: "; cin >> selectie;
        switch(selectie)
        {
        case 1:
            PerimetruRomb();
            break;
        case 2:
            LungimeCerc();
            break;
        case 3:
            media();
            break;
        default:
            cout << "Nu ati introdus nicio valoare dintre cele de mai sus" << endl;
        }
    cout << endl << "Mai doriti sa calculati o valoare? Introduceti 1 pentru da sau orice alta valoare pentru nu: "; cin >> incercare_din_nou;
    }while(incercare_din_nou==1);

    return 0;
}

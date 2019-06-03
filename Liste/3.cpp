#include <iostream>

using namespace std;

/*Se citeste un sir. Sa se elimine elementul de pe pozitia p al sirului. */

int main()
{
    int sir[100],n;
    cout << "Introduceti numarul de elemente din sir: "; cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Elementul " << i << ": "; cin >> sir[i];
    }
    cout << endl << "Sirul citit la tastatura este: ";
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
    int P;
    cout << endl << "Introduceti pozitia: "; cin >> P;
    for (int i=P;i<=n;i++)
        sir[i]=sir[i+1];
    n--;
    cout << endl << "Sirul dupa stergere este: ";
    for (int i=1;i<=n;i++)
        cout << sir[i] << " ";
    return 0;
}

#include <iostream>

using namespace std;

    //  Se citeste un sir de cel mult 100 de numere intregi
    //  a) Sa se afiseze sirul de numere
    //  b) Sa se calculeze si sa se afiseze suma numerelor pare
    //  c) Sa se calculeze si sa se afiseze produsul numerelor ce au ultima cifra 7
    //  d) Sa se ordoneze sirul crescator

int main() {


  int v[100], n, sumaPare = 0, produsCifra7 = 1;

  cout << "Numarul de elemente: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Elementul " << i+1 << ": ";
    cin >> v[i];
  }

  cout << endl << "a) Sirul este: ";

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  cout << endl << "b) Suma numerelor pare: ";

  for (int i = 0; i < n; i++) {
    if (v[i] % 2 == 0) sumaPare = sumaPare + v[i];
  }

  cout << sumaPare;

  cout << endl << "c) Produsul numerelor cu ultima cifra 7: ";

  for (int i = 0; i < n; i++) {
    if (v[i] % 10 == 7) produsCifra7 = produsCifra7 * v[i];
  }

  if (produsCifra7 == 1)
    cout << "NU EXISTA";
  else
    cout << produsCifra7;

  cout << endl << "d) Sirul sortat crescator: ";


  for (int i = 0; i < n-1; i++)

    for (int j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        int aux;
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  return 0;
}

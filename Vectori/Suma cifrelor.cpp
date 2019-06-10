#include <iostream>

using namespace std;

// Se citeste un sir de n numere intregi
// Sa se afiseze toate numerele din sir care au suma cifrelor un numar par

int main() {
  int v[100], n;
  cout << "Numarul de elemente: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Elementul " << i + 1 << ": ";
    cin >> v[i];
  }

  int S, c, x, nr = 0;

  cout << "Numerele din sir care au suma cifrelor un numar par sunt: ";
  for (int i = 0; i < n; i++) {
    S = 0;
    x = v[i];
    while (x != 0) {
      c = x % 10;
      S = S + c;
      x = x / 10;
    }
    if (S % 2 == 0) {
      cout << v[i] << " ";
      nr++;
    }
  }

  if (nr == 0) cout << "NU EXISTA";

  return 0;
}

#include <iostream>

using namespace std;

// Se citeste un sir de maxim 25 de numere intregi.
// Sa se afiseze suma palindroamelor din sir

int main() {


  int v[25], n, S = 0, c;

  cout << "Numarul de elemente: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Elementul " << i+1 << ": ";
    cin >> v[i];
  }

  int x, inv;

  for (int i = 0; i < n; i++) {
    inv = 0;
    x = v[i];
    while (x != 0) {
      c = x % 10;
      inv = inv * 10 + c;
      x = x / 10;
    }
    if (v[i] == inv) S = S + v[i];
  }

  cout << "Suma palindroamelor din sir este: " << S;

  return 0;
}

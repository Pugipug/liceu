#include <iostream>
#include <math.h>

using namespace std;

int main() {
  // Se citeste un sir de n numere intregi
  // Sa se verifice daca toate numerele din sir sunt patrate perfecte

  int v[100], n, x;
  cout << "n=";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Elementul " << i + 1 << ": ";
    cin >> v[i];
  }

  int OK = 1;
  for (int i = 0; i < n; i++) {
    if (sqrt(v[i]) != int(sqrt(v[i]))) OK = 0;
  }

  if (OK == 1)
    cout << "Toate numerele din sir sunt numere patrate perfecte";
  else
    cout << "Exista cel putin un numar care nu este patrat perfect";

  return 0;
}

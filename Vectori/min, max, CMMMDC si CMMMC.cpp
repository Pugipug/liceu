#include <iostream>
#include <limits.h>

using namespace std;

  // Se citeste un sir de de n numere intregi
  // a) Sa se afiseze cel mai mare numar din sir
  // b) Sa se afiseze cel mai mic numar din sir
  // c) Sa se afiseze CMMDC dintre cel mai mic si cel mai mare numar din sir
  // d) Sa se afiseze CMMMC dintre cel mai mare si cel mai mic numar din sir

int main() {
  

  int v[100], n, max = INT_MIN , min = INT_MAX , x;

  cout << "n=";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Elementul " << i+1 << ": ";
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    x = v[i];
    if (x > max) max = x;
    if (x < min) min = x;
  }

  cout << endl << "Maximul este: " << max;
  cout << endl << "Minimul este: " << min;

  int a, b;
    a = min;
    b = max;
    while (a != b) {
      if (a > b)
        a = a - b;
      else
        b = b - a;
    }

  cout << endl << "CMMDC este: " << a;

  cout << endl << "CMMMC este: " << (min * max) / a;

  return 0;
}

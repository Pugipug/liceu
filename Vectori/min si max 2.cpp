#include <iostream>
#include <limits.h>

using namespace std;

// Se citesc 2 vectori a si b de dimensiuni n respectiv m
// Sa se afiseze cate numere din primul vector sunt mai mari decat toate
// numerele din al doilea vector

int main() {
  int a[100], b[100], n, m, max = INT_MIN, nr = 0;

  cout << "n=";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "(a) Elementul " << i + 1 << ": ";
    cin >> a[i];
  }

  cout << "m=";
  cin >> m;
  for (int j = 0; j < m; j++) {
    cout << "(b) Elementul " << j + 1 << ": ";
    cin >> b[j];
  }

  for (int j = 0; j < m; j++)
    if (b[j] > max) max = b[j];

  for (int i = 0; i < n; i++)
    if (a[i] > max) nr++;

  cout << "S-au gasit " << nr << " astfel de numere";

  return 0;
}

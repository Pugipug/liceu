#include <iostream>

using namespace std;

// Se citeste un vector de n numere intregi
// a) Sa se alcatuiasca un alt vector care contine toate numerele pare din
// primul vector si sa se ordoneze crescator acest vector
// b) Sa se alcatuiasca un alt vector care contine toate numerele impare din
// primul vector si sa se ordoneze descrescator acest vector

int main() {
  int v[100], i, n, aux;
  cout << "Numarul de elemente: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Elementul " << i + 1 << ": ";
    cin >> v[i];
  }

  int a[100], b[100], k = 0, j = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] % 2 == 0) {
      a[k] = v[i];
      k++;

    } else {
      b[j] = v[i];
      j++;
    }
  }
  cout << endl << "Vectorul care contine numerele pare este: ";
  for (int i = 0; i < k; i++) cout << a[i] << " ";

  cout << endl << "Vectorul care contine numerele impare este: ";
  for (int i = 0; i < j; i++) cout << b[i] << " ";

  int schimb_vector_1, schimb_vector_2;
  do {
    schimb_vector_1 = 0;
    for (int i = 0; i < k - 1; i++)
      if (a[i] > a[i + 1]) {
        aux = a[i];
        a[i] = a[i + 1];
        a[i + 1] = aux;
        schimb_vector_1 = 1;
      }
  } while (schimb_vector_1 == 1);

  cout << endl << "Primul vector ordonat crescator: ";
  for (int i = 0; i < k; i++) cout << a[i] << " ";

  do {
    schimb_vector_2 = 0;
    for (int i = 0; i < j - 1; i++)
      if (b[i] < b[i + 1]) {
        aux = b[i];
        b[i] = b[i + 1];
        b[i + 1] = aux;
        schimb_vector_2 = 1;
      }
  } while (schimb_vector_2 == 1);

  cout << endl << "Al doilea vector ordonat descrescator: ";
  for (int i = 0; i < j; i++) cout << b[i] << " ";

  return 0;
}

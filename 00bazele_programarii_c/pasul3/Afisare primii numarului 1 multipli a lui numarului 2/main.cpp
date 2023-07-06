/*
Se citesc două numere naturale numar1 și numar2.
Afișați în ordine descrescătoare primii 'numar1' multipli nenuli ai 'numar2'.
Intrare: 3 6
Ieșire: 18 12 6
*/
#include <iostream>
using namespace std;

int main() {
  int numar1, numar2;
  cin >> numar1 >> numar2;

   for (int i = numar2 * numar1; i >= numar1; i -= numar2) {
    cout << i << " ";
  }
  return 0;
}

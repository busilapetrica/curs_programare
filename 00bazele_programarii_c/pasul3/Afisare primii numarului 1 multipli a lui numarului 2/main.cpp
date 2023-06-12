/*
Se citesc două numere naturale n și m.
Afișați în ordine descrescătoare primii n multipli nenuli ai numărului m.
*/
#include <iostream>

using namespace std;
int main() {
  int numar1, numar2, temp;
  cin >> numar2 >> numar1;
  temp = numar1;
  for (int i = 1; i < numar2; i++) {
    numar1 = numar1 + temp;
  }
  for (int i = 1; i <= numar2; i++) {
    cout << numar1 << " ";
    numar1 = numar1 - temp;
  }
  return 0;
}

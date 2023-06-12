/*
Dându-se trei numere, R, G și B, verificați dacă acestea pot reprezenta o culoare sau o nuanță de gri.
 O culoare se consideră nuanță de gri dacă și numai dacă diferența dintre oricare două coduri ce reprezintă culorile primare nu depășește 10.
 */
#include <iostream>
using namespace std;

int main() {
  int red, green, blue, minim, maxim;
  cin >> red >> green >> blue;
  minim = red;

  if (minim > green) {
    minim = green;
  } else if (minim > blue) {
    minim = blue;
  } else {
    maxim = red;
  }

  if (maxim < green) {
    maxim = green;
  }
  if (maxim < blue) {
    maxim = blue;
  }

  if (minim >= 0 && maxim <= 255) {
    if (maxim - minim <= 10) {
      cout << "GRI";
    } else {
      cout << "CULOARE";
    }
  } else {
    cout << "NU E CULOARE";
  }
  return 0;
}

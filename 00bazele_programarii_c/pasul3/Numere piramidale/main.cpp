/*Amicul nostru, Zoli, a învățat la scoală despre pătrate perfecte și numere piramidale.
 Al n-lea număr piramidal înseamnă suma primelor n pătrate perfecte,
 începând de la 1. Ajutați-l pe Zoli sa afle primele n numere piramidale.
 Intrare:
3
Ieșire:
1 5 14
*/
#include <iostream>
using namespace std;

int main() {
  int numar;
  cout << "Introduceti numarul: ";
  cin >> numar;
  int suma = 0;
//for (int i = 1; i <= numar; i++) {: Inițializează un ciclu for care va itera de la 1 până la numar.
// Variabila de control i va reprezenta fiecare număr în intervalul respectiv.
  for (int i = 1; i <= numar; i++) {
//suma += i * i;: Adaugă pătratul valorii lui i la variabila suma. Aceasta calculează suma pătratelor perfecte până la i.
    suma += i * i;
    cout << suma << " ";
  }
  return 0;
}

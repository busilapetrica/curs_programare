//Se citește numărul natural n. Să se afișeze următoarea piramidă de numere:

//Se include biblioteca <iostream> pentru a putea utiliza intrarea/ieșirea standard.
#include <iostream>
//Se utilizează using namespace std; pentru a evita prefixul std:: în fața funcțiilor și obiectelor din biblioteca standard.
using namespace std;

int main() {
//Se declară variabila numar de tip întreg pentru a stoca numărul introdus de la tastatură.
  int numar;
 //Se afișează mesajul "Introduceti numarul numar: " pentru a solicita utilizatorului să introducă un număr.
  cout << "Introduceti numarul numar: ";
//Se utilizează cin >> numar pentru a citi numărul introdus de la tastatură și a-l stoca în variabila numar.
  cin >> numar;
//Se utilizează o buclă for pentru a itera prin fiecare linie a piramidei, de la 1 până la numar.
//În interiorul primei bucle for, se utilizează o buclă for internă pentru a itera prin fiecare număr de la 1 până la valoarea curentă a variabilei linie.
  for (int linie = 1; linie <= numar; linie++) {
//În interiorul celei de-a doua bucle for, se afișează valoarea variabilei i urmată de un spațiu. Aceasta va afișa numerele de la 1 la linie pe acea linie a piramidei.
    for (int i = 1; i <= linie; i++) {
      cout << i << " ";
    }
    //După ce s-a afișat toată linia curentă, se utilizează cout << endl; pentru a trece la următoarea linie și a crea efectul de piramidă.
    cout << endl;
  }

  return 0;
}

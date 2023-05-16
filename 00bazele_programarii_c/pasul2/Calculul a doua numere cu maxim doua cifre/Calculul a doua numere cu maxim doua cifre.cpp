#include <iostream>
using namespace std;
/*#451 Se citeste de la tastatura un numar natural de maxim 2 cifre. 
Să se afiseze pe ecran valori astfel: daca numarul este mai mic sau egal 
cu 15 se va afisa pătratul valorii sale; dacă numărul este cuprins între 16 și 30 (inclusiv) 
se va afișa suma cifrelor sale; în caz contrar se va afișa produsul cifrelor sale. */
int main() {
  int number, cifra_1, cifra_2, rezultat;
  cout << "Introdu un numar de doua cifre cuprins intre 0 -> 99";
  cout << endl;
  cin >> number;
  if (number <= 99) {
    cifra_1 = number / 10;
    cifra_2 = number % 10;
    if (number <= 15) {
      cout << "Daca numarul este mic sau egal cu 15 se afiseaza patratul valorii sale";
      cout << endl;
      rezultat = number * number;
    } else if (number >= 16 && number <= 30) {
      cout << "Daca numarul este cuprins intre 16 si 30 inclusiv se afiseaza suma cifrelor sale";
      cout << endl;
      rezultat = cifra_1 + cifra_2;
    } else {
      cout << "Daca numarul este mai mare de 30 se afiseaza produsul cifrelor sale a-b";
      cout << endl;
      rezultat = cifra_1 - cifra_2;
    }
    cout << rezultat;
  } else {
    cout << "numarul este mai mare de 2 cifre";
  }
  return 0;
}


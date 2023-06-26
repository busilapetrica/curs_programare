/*
Cerinţa
Se dau n numere naturale. Determinaţi primul număr par dintre cele n numere.
Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spaţii.
Date de ieşire
Programul afișează pe ecran numărul P, reprezentând primul număr par dintre cele n numere sau mesajul IMPOSIBIL,
dacă printre cele n numere citite nu există numere pare.
Date de intrare:
5
7 4 2 5 8
Date de ieșire:
4
*/
#include <iostream>
using namespace std;

int main() {
    int numarNumere;
    cin >> numarNumere;

    int numar;
    bool gasitNumarPar = false;
//Se utilizează o buclă for pentru a itera de la 0 la numarNumere-1 și se citește
//fiecare număr de la tastatură în variabila numar.
    for (int i = 0; i < numarNumere; ++i) {
        cin >> numar;
//În fiecare iterație a buclei, se verifică dacă numărul citit este par, folosind operatorul modulo (%).
// Dacă numarul este divizibil cu 2 fără rest, înseamnă că este par.
        if (numar % 2 == 0) {
            cout << numar;
            gasitNumarPar = true;
//Dacă se găsește un număr par, se afișează numărul respectiv, se setează valoarea variabilei
//gasitNumarPar la true și se întrerupe bucla folosind instrucțiunea break.
            break;
        }
    }
//După ce bucla for se termină, se verifică valoarea variabilei gasitNumarPar.
// Dacă valoarea este falsă, înseamnă că nu s-a găsit niciun număr par, și se afișează mesajul "IMPOSIBIL".
    if (!gasitNumarPar) {
        cout << "IMPOSIBIL";
    }

    return 0;
}

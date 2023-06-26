
//Se citesc numere de la tastatură până la apariția lui zero. Să se determine suma celor pare.
// Numere introduse: 5 6 2 1 0
//Afisare : 8
#include <iostream>
using namespace std;

int main() {
    int numar, sumaPare;
    sumaPare = 0;
//Programul utilizează o buclă while pentru a citi numerele de la tastatură până când se introduce valoarea 0,
//moment în care bucla se încheie cu ajutorul instrucțiunii break.
    while (true) {
        cin >> numar;

        if (numar == 0) {
            break;
        }
//Dacă numărul este diferit de 0, se verifică dacă este un număr par prin verificarea restului împărțirii la 2.
// Dacă restul este 0, înseamnă că numărul este par și se adaugă la suma numerelor pare sumaPare.
        if (numar % 2 == 0) {
            sumaPare += numar;
        }
    }
    cout << sumaPare;
    return 0;
}

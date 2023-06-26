/*
Copiii din clasa a V-a au hotărât să planteze flori, micșunele și panseluțe,
 în grădina din curtea școlii. Ei au plantat un număr de n flori astfel:
 un rând de micșunele, 2 rânduri de panseluțe, 3 rânduri de micșunele,
 4 rânduri de panseluțe, și așa mai departe până au terminat toate florile.
  Fiecare rând conține un număr de 5 flori, ultimul rând putând să conțină mai puține flori.
  Copiii doresc să cunoască numărul de rânduri plantate,
dacă ultimul rând a fost complet sau nu și ce flori s-au plantat pe ultimul rând.
*/
#include <iostream>
using namespace std;

int main() {
    int numarFlori;
    cin >> numarFlori;

    int numarRanduri;
    //Se verifică dacă numărul de flori (numarFlori) este divizibil exact cu 5 folosind operatorul modulo (%).
  //  Dacă da, înseamnă că ultimul rând va fi complet și se atribuie lui numarRanduri valoarea numarFlori / 5.
    // În caz contrar, se adaugă 1 la rezultatul împărțirii pentru a acoperi ultimul rând incomplet.
    if (numarFlori % 5 == 0) {
        numarRanduri = numarFlori / 5;
        cout << numarRanduri << endl;
        cout << "DA" << endl;
    } else {
        numarRanduri = numarFlori / 5 + 1;
        cout << numarRanduri << endl;
        cout << "NU" << endl;
    }
    int indexRand = 1;
    int sumaRanduri = 0;
    //Se parcurge un ciclu while care se execută atât timp cât sumaRanduri este mai mică decât numarRanduri.
    while (sumaRanduri < numarRanduri) {
        //In fiecare iterație a ciclului, se adaugă indexRand la sumaRanduri și se incrementează indexRand.
        sumaRanduri += indexRand;
        indexRand++;
    }
    if (indexRand % 2 == 0) {
        cout << "micsunele ";
    } else {
        cout << "panselute";
    }
    return 0;
}

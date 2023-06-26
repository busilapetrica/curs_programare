/*
Se dă n. Afișați un triunghi cu latura de n steluțe gol înăuntru.*/

#include <iostream>
using namespace std;

int main() {
    int numar;
    cout << "Introduceți valoarea lui 'numar': ";
    cin >> numar;
//Urmează un ciclu for extern, în care variabila linie reprezintă numărul rândului și parcurge valorile de la 1 la n.
    for (int linie = 1; linie <= numar; linie++) {
        //În interiorul ciclului extern, se află un alt ciclu for intern, în care variabila coloana reprezintă
        // numărul coloanei pe rând și parcurge valorile de la 1 la linie.
        for (int coloana = 1; coloana <= linie; coloana++) {
           // Dacă linie este egal cu n (ultimul rând al triunghiului) sau coloana este 1
           //(marginea stângă a rândului) sau coloana este egală cu linie (marginea dreaptă a rândului),
           // se afișează o steluță (*) pentru a forma marginea triunghiului.
           //În caz contrar, se afișează două spații goale ( ) pentru a forma zona golă din interiorul triunghiului'
            if (linie == numar || coloana == 1 || coloana == linie) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}


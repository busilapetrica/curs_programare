//Scrieți un program care să afișeze, în ordine crescătoare,
//toate numerele naturale formate din câte n cifre și care au suma
//cifrelor egală cu s, precum și câte astfel de numere există.
//EX:Intrare:2 5
//Ieșire
//14 23 32 41 50
//5

#include <iostream>
using namespace std;
int main() {
    int numarCifre, sumaCifre;
    cin >> numarCifre >> sumaCifre;
    int numereGasite = 0;

    for (int numarCurent = 0; numarCurent <= 9999999; numarCurent++) {
        int sumaCifreCurent = 0;
        int tempNumar = numarCurent;
        // Calculează suma cifrelor numărului curent
        while (tempNumar > 0) {
            sumaCifreCurent += tempNumar % 10;
            tempNumar /= 10;
        }
        // Verifică dacă numărul curent îndeplinește condițiile
        if (sumaCifreCurent == sumaCifre && to_string(numarCurent).length() == numarCifre) {
            cout << numarCurent << ' ';
            numereGasite++;
        }
    }
    cout << endl << numereGasite;
    return 0;
}

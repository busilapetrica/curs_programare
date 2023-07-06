//Scrieți un program care să afișeze, în ordine crescătoare,
//toate numerele naturale formate din câte n cifre și care au suma
//cifrelor egală cu sumaCifrelor, precum și câte astfel de numere există.
//EX:Intrare:2 5
//Ieșire
//14 23 32 41 50
//5

#include <iostream>
#include <cmath>
using namespace std;

int calculeazaSumaCifrelor(int numar) {
    int suma = 0;
    while (numar > 0) {
        suma += numar % 10;
        numar /= 10;
    }
    return suma;
}

int main() {
    int numarCifre, sumaCifre;
    cin >> numarCifre >> sumaCifre;

    int contorNumere = 0;

    for (int numar = pow(10, numarCifre - 1); numar < pow(10, numarCifre); ++numar) {
        if (calculeazaSumaCifrelor(numar) == sumaCifre) {
            cout << numar << ' ';
            ++contorNumere;
        }
    }

    cout << endl << contorNumere;

    return 0;
}

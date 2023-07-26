/*
Gigel vrea un calculator nou care are prețul x. Tatăl acestuia, fiind profesor de matematica,
i-a spus ca îi va cumpăra calculatorul dacă prețul x al acestuia este norocos. Un număr x este norocos
dacă pătratul acestuia se poate scrie ca sumă de x numere consecutive. De exemplu, x = 7 este număr norocos deoarece, 7 * 7 = 4 + 5 + 6 + 7 + 8 + 9 + 10.

Gigel a obţinut T oferte de preț și dorește să știe pentru fiecare dintre acestea dacă prețul este corespunzătar restricției pe care i-a impus-o tatăl său.

Fișierul de intrare pc.in conține pe prima linie un singur număr natural numarOferte, reprezentând numărul de oferte.
Pe a doua linie se află numarNorocos numere naturale x1 x2 x3 … xT separate prin câte un spaţiu, cu semnificația din enunț

Fișierul de ieșire pc.out va conține pe prima linie, separate prin câte un spațiu,
cele T răspunsuri, în ordine: 1 dacă oferta este corespunzătoare restricției impuse și 0 în caz contrar.

pc.in
3
3 4 7

pc.out
1 0 1
*/
#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("pc.in");
ofstream fout("pc.out");

int main(){
    int numarOferte, numarNorocos;
    fin>>numarOferte;

    for (int i=1; i<=numarOferte; i++){
        fin>>numarNorocos;

            if (numarNorocos % 2 == 1){
                fout << "1 ";
            }else{
                fout << "0 ";
            }
    }

    return 0;
}

//Într-un vas sunt x litri de apă (x>0). După fiecare t minute, un sfert din cantitatea de apă se evaporă.
//Să se determine după câte minute vor rămâne în vas cel mult y litri de apă.
//Intrare: 100 15 20
//Iesire : 90
#include <iostream>
using namespace std;
int main() {
    int x, t, y;
    cout << "Introduceți numărul de litri de apă (x), timpul în minute (t) și cantitatea maximă de apă (y): ";
    cin >> x >> t >> y;
//Intr-un ciclu while, se verifică dacă cantitatea de apă curentă (x)
//este mai mare decât cantitatea maximă de apă dorită (y).
    int timp = 0;
    while (x > y) {
//În interiorul ciclului, se actualizează cantitatea
//de apă prin scăderea unui sfert din cantitatea curentă (x -= x / 4), deoarece acea parte se evaporă.
        x -= x / 4;
//De asemenea, se incrementează timpul cu valoarea timpului de evaporare (timp += t).
        timp += t;
    }
    cout << timp;
    return 0;
}

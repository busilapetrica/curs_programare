/*
Se dau n numere naturale. Calculați media armonică
a celor n numere citite cu 2 zecimale exacte.
EX:
	5
1 2 3 4 5
*/
*/
	#include <iostream>
	#include <iomanip>
	using namespace std;
	int main() {
	    double number1, number2, s = 0;
	    cin >> number1; // primul numar(5)
	    for (int i = 1; i <= number1; i++) {
	        cin >> number2; //ia al doilea rand (1 -> 5 )
	        s = s + 1 / number2;
	    }
	    s = number1 / s;
	    cout << fixed << setprecision(2) << s;
	}

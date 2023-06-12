/*
Prietenul nostru, Zolly, a învățat la scoală despre ridicarea la putere. Ajutați-l să calculeze ab.
EX:       5 4
Iesire : 625
*/
	#include <iostream>
	using namespace std;
	int calc_putere(int numar, int putere) {
	    int P = 1;
	    while (putere) {
	        P = P * numar;
	        putere--;
	    } return P;
	}
	int main() {
	    int numar, putere;
	    cin >> numar >> putere;
	    cout << calc_putere(numar, putere);
	}

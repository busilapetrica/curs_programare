	/*
	Se citesc numere de la tastatură până la apariția lui zero. Să se determine câte dintre ele erau pare.
	Exemplu:
    Intrare
    1 2 3 4 5 6 0
    Ieșire
    3
	*/
	#include <iostream>
	using namespace std;
	int main() {
	  int number, evenNumber;
	  evenNumber = 0;
	  while (true) {
	    cin >> number;
	    if (number == 0) {
	      break;
	    }
	    if (number % 2 == 0) {
	      evenNumber++;
	    }
	  }

	  if (evenNumber == 0) {
	    cout << "NU EXISTA";
	  } else {
	    cout << evenNumber;
	  }
	  return 0;
	}

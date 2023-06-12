/*
Se dă un număr natural n. Afișați în ordine crescătoare primele n numere naturale nenule.
*/
#include <iostream>
	using namespace std;
	int main() {
		int n, i;
		cin >> n;
		for (i = 1; i <= n; i++) {
			cout << i << " ";
		}
		return 0;
	}

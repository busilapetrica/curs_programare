	#include <bits/stdc++.h>
	using namespace std;
// fisierul de unde se citesc valori
	ifstream in("date.in");
	//fisier de iesire
	ofstream out("date.out");

	int main() {
	    int numar1, numar2, numar3;
	    in >> numar1 >> numar2 >> numar3;
	    if (numar1 > numar2 && numar1 > numar3) out << numar1;
	    else if (numar2 > numar1 && numar2 > numar3) out << numar2;
	    else out << numar3;
	    return 0;
	}

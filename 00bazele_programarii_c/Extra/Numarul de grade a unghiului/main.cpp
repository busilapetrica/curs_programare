/*Fiind date numărul de ore în variabila "ore" și numărul de minute în variabila "minute", să se determine
 câte grade avea unghiul dintre orarul și minutarul unui ceas clasic, la ora şi minute?

Fișierul unghi.in va conține pe prima linie un număr natural n, reprezentând numărul de probleme date ca temă,
iar pe a doua linie, două numere h și m, separate printr-un spațiu, cu semnificațiile din cerință.

Fișierul unghi.in va conține pe prima linie un număr natural n, reprezentând numărul de probleme date ca temă, iar pe a doua linie,
două numere h și m, separate printr-un spațiu, cu semnificațiile din cerință.

Fișierul unghi.out va conține pe câte o linie numărul de grade corespunzător unghiului format de orar și minutar, pentru fiecare dintre cele n probleme din temă.

unghi.in
3
8 20
1 10
5 15
unghi.out
130
25
67.5
*/
	#include <fstream>
	#include <math.h>
	using namespace std;
	ifstream in("unghi.in");
	ofstream out("unghi.out");
	int main() {
	    int n, h, m;
	    float uh, um, u;
	    in >> n;

	    for (int i = 1; i <= n; i++) {
	        in >> h >> m;
	        h = h % 12;
	        if (m == 60) {
	            m = 0;
	            h++;
	        }
	        uh = (h * 60 + m) * 0.5;
	        um = 6 * m;
	        if (uh > um){
              u = uh - um;
	        } else{
              u = um - uh;
	        }
	        if (u < 360 - u){
              out << u << "\n";
	        }else{
	        out << 360 - u << "\n";
	        }

	    } return 0;
	}

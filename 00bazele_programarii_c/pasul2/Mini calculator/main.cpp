/*
Se citesc de la tastatură 3 numere naturale, a, b, c.
Să se realizeze cu a și b operația codificată prin numărul c..
type=1 numar1+numar2;
type=2 numar1-numar2;
type=3 numar1*numar2;
type=4 numar1/numar2;
type=5 numar1%numar2;
*/
#include <iostream>
using namespace std;

int main() {
  int numar1, numar2, type;
  cin >> numar1 >> numar2 >> type;

 switch( type == 1){
case 1:
    cout << numar1 + numar2;
    break;
case 2 :
    cout << numar1 - numar2;
    break;
case 3:
    cout << numar1 * numar2;
    break;
case 4:
 cout << numar1 / numar2;
    break;
case 5:
    cout << numar1 % numar2;
    break;
case 6:
    cout << numar1 % numar2;
    break;
}


 return 0;
}




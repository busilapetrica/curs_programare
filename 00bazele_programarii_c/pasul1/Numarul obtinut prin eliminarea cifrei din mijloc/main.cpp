#include <iostream>
#include <string>
using namespace std;
/*Sa se scrie un program care citeste de la tastatura un numar
natural cu exact trei cifre si determina numarul obtinut prin eliminarea cifrei din mijloc.*/
int main (){
  int numarIntrare, nr1, nr3, rezultat;
  cout << "Introdu un numar de trei cifre intre 100 si 1000" << endl;
  cin >> numarIntrare;
  if (numarIntrare < 100 || numarIntrare >= 1000)
    {
      cout << "Numarul introdus nu se afla in range-ul 100-1000" << endl;
      }else{
       nr1 = (numarIntrare/100)*10;
        nr3 = numarIntrare%10;
      rezultat = nr1+nr3;
    }
  cout << rezultat;
  return 0;
}

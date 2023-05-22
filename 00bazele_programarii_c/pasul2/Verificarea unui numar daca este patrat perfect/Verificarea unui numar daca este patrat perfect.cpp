#include <iostream>
#include <cmath>
using namespace std;
// sa se scrie un program care verifica daca un
//numar natural citit de la tastatura este patrat perfect.
int main (){
  int numar;
  cout<<"introdu un numar pentru a verifica daca este un numar patrat perfect"<<endl;
  cin >> numar;
  if ((int) sqrt (numar) == sqrt (numar)){
      cout << "numarul este patrat perfect";
    }else{
      cout << "numarul nu este pastrat perfect";
    }
  return 0;
}

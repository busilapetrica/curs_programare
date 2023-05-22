#include <iostream>
using namespace std;
//#105 Sa se scrie un program care determina maximul a doua numere intregi citite de la tastatura. 
int main (){
  int n, m;
  cin >> n >> m;
  if (n > m){
      cout << "primul numar este mai mare dacat al doilea";
       }else{
      cout << "al doilea numar este mai mare decat primul";
       }
  return 0;
        }
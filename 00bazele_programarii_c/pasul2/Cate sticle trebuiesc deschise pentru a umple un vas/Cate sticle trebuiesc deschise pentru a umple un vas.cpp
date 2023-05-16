#include <iostream>
using namespace std;
#include <cmath>
//#816 Determinati cate sticle de x litri cu
//apa trebuie deschise pentru a umple un vas de y litri. 
int main (){
  int x, y;
  cin >> x >> y;
  if (y % x == 0){
      cout << y / x;
    }else{
      cout << y / x + 1;
    }
  return 0;
}
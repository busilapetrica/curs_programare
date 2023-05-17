#include <bits/stdc++.h>
using namespace std;
//Se dă un număr natural n cu exact 13 cifre reprezentând un cod numeric personal. 
//Să se afișeze anul, luna și ziua nașterii deținătorului.
int main (){
  // CNP 2961103042367 raspuns 96 11 03
  long int cnp; 
  int size_cnp;
  cin >> cnp;
  long int array[12]; 
  size_cnp = int(log10(cnp) + 1); 
  
  if (size_cnp < 13){
      cout << "Cnp-ul are mai putine cifre";
    }else if (size_cnp < 13){
     cout << "Cnp-ul are mai multe cifre";   
    }else{
      for (long int i = 12; i >= 0; i--){
	  array[i] = cnp % 10;
	  cnp /= 10;
	}
      cout << "ziua: " <<array[1] << array[2] << "  Luna: " << array[3] << array[4] << "  Anul: " <<
	array[5] << array[6];
    }
    
  return 0;
}
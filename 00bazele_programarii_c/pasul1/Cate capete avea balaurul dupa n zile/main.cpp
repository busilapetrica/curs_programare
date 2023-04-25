#include <iostream>
using namespace std;
/*A fost o data un balaur cu 6 capete. Intr-o zi Fat-Frumos s-a suparat si i-a taiat un cap. 
Peste noapte i-au crescut alte 6 capete in loc. Pe acelasi gat! 
A doua zi, Fat-Frumos iar i-a taiat un cap, dar peste noapte balaurului i-au crescut in loc alte 6 capete si
tot asa timp de n zile. In cea de a ( n+1 )-a zi, Fat-Frumos s-a plictisit si a plecat acasa!
Scrieti un program care citeste de la tastatura n , numarul de zile, 
si care afiseaza pe ecran cate capete avea balaurul dupa n zile.*/
int main (){
  int numarZile, capeteBalaur;
  cout << "Introdu cate zile i-a taiat cate un cap balaurului" << endl;
  cin >> numarZile;
  capeteBalaur = 6 * numarZile - numarZile;
  cout << capeteBalaur;
  return 0;
}
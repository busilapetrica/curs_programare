#include <iostream>
using namespace std;
//3611Se da un numar natural n de exact trei cifre distincte.
//Sa se calculeze suma tuturor numerelor care se pot obtine prin interschimbarea cifrelor lui n.
int main(){
   int numarIntrare, nr1, nr2, nr3, rezultat;
   cout<< "Introdu un numar cu 3 cifre distincte incadrat intre 102 si 987 "<<endl;
   cin>>numarIntrare;
   nr1 = numarIntrare/100;
   nr2 = numarIntrare/10%10;
   nr3 = numarIntrare%10;
   //Verifica daca numarul are cifre distincte
   if(nr1 == nr2 && nr2 == nr3){
       cout<<"Numarul" << " " <<numarIntrare <<" " <<"nu are 3 cifre distincte"<<endl;
   }else{
       //Verifica daca numarul se incadreaza intre 102 si 987
   if (numarIntrare >=102 && 987 >= numarIntrare){
    rezultat = 222*(nr1 + nr2 + nr3); 
   }else{
     cout<<"Numarul" << " " <<numarIntrare <<" " <<"nu este incadrat intre 102 si 987"<<endl;
   }
   }
   cout << rezultat;
    return 0;
}
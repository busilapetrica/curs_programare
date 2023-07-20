
/**
Să se scrie un program care citește numărul natural numar și determină suma S=2+4+..+(2n).

Intrare
48
Ieșire
Suma este 2352
 */

#include <iostream>
using namespace std;
int main() {
   int numar,suma;
   cin>>numar;

       for(int i=0;i<=2*numar;i++){
            if(i%2==0){
             suma+=i;
     }
   }
cout<<suma;

    return 0;
}

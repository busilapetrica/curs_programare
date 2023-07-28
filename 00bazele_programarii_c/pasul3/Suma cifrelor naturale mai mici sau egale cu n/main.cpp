/** \brief
Se citește n număr natural. Calculați suma tuturor numerelor naturale mai mici sau egale cu n.
Exemplu:

Intrare
7
Ieșire
28

Explicație
1+2+3+4+5+6+7=28
 */

#include <iostream>
using namespace std;

int main(){
    int n,suma;
    cin>>n;

    for(int i=1; i<=n; i++){
    suma+=i;
   }

cout<<suma<<endl;
    return 0;
   }

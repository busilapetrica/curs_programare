/*
Se dă un număr natural n. Afișați în ordine descrescătoare
 numerele naturale impare mai mici sau egale cu n.
*/
#include <iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    for(int i = number - ((number+1) % 2); i >= 1; i-=2)
        cout << i << ' ';
    return 0;
}

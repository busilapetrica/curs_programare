/*
e dă un număr natural n.
Afișați în ordine crescătoare numerele naturale pare nenule mai mici sau egale cu n.
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i+=2)
        cout << i << ' ';
}

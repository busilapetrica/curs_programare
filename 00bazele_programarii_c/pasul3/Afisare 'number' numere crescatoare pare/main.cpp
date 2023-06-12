/*
Se dă un număr natural n. Afișați în ordine crescătoare primele n numere naturale pare nenule.
*/
#include <iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    for(int i =2 ; i<=(number*2)+1 ; i++ ){
        if (i % 2 == 0)
        cout << i << ' ';
        }
    return 0;
}

/*
Ridicarea la putere. 10 la puterea n
*/
#include    <iostream>
using namespace std;
int main(){
    int n;
    long long rezultat = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        rezultat = rezultat * 10;
}
    cout << rezultat;
    return 0;
}

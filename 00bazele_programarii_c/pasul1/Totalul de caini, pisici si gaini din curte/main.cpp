#include <iostream>
using namespace std;
//#2240. Într-o curte sunt câini, pisici și găini. Se știe că numărul de pisici este egal cu dublul numărului de câini,
 //iar numărul de găini este egal cu dublul numărului de pisici. Dacă în curte sunt "caini" câini, câte animale sunt în curte?
int main(){
    int caini,pisici,gaini,ToatalAnimaleCurte;
    cin >>caini;
    pisici=caini*2;
    gaini=pisici*2;
     ToatalAnimaleCurte = caini+pisici+gaini;
     cout << ToatalAnimaleCurte;
    return 0;
}

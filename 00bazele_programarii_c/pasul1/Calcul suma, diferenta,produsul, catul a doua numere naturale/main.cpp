#include <iostream>
using namespace std;
//#1260.Se dau 2 numere naturale. Calculați suma, diferenţa, produsul şi câtul lor, în această ordine.
 int main(){
    int a,b, suma, diferenta,produsul, catul;
    cin>> a >> b;
    suma = a+b;
    diferenta = a/b;
    produsul = a*b;
    catul = a%b;
    //afisare rezultate
    cout <<suma <<" " <<diferenta <<" " <<produsul << " " << catul;
    return 0;
}

//#832 Fiind dată nota unui elev să se afișeze dacă acesta este corigent sau promovat.
#include <iostream>
using namespace std;
#include <cstring>
int main(){
    int n; string  AdmitereEelev;
    cin >>n;
    if(n<5){
          AdmitereEelev = "Corigent";
    }else{
        AdmitereEelev = "Promovat";
    }
    //afisare resultat
    cout << AdmitereEelev;
    return 0;
}

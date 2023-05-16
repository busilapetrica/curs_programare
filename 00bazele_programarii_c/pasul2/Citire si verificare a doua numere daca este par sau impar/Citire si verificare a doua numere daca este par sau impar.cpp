#include <iostream>
using namespace std;
//#109 Să se scrie un program care citeşte de la 
//tastatură un număr natural şi verifică dacă numărul este par sau impar.
int main(){
    int n;
    cin>>n;
    if(n%2==0) {
        cout <<"numarul este par";
    }else{
       cout <<"numarul este impar";   
    }
    return 0;
}
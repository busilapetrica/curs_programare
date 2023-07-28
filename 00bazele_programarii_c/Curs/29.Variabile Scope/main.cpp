#include <iostream>
using namespace std;
//local variabiles = declared inside a function or a block{}
//Global variabiles = declared outside off all functions
int myNum =2;
void printMyNum(int myNum);

int main(){
int myNum = 1;
printMyNum(myNum);

return 0;
}

void printMyNum(int myNum){
cout<< ::myNum;  // ca sa folosim strict variabila globala folosim :: in fata variabilei
}

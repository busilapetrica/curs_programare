#include <iostream>
using namespace std;
//#1273. Se dau două numere naturale x și y. Calculați ultima cifră a sumei lor.
int main(){
  int x,y,SumaUltmeiCifre, UltimaCifraASumei;
  cin>>x>>y;
  SumaUltmeiCifre=x%10+y%10;
  UltimaCifraASumei=SumaUltmeiCifre%10;
  cout<<UltimaCifraASumei;
}

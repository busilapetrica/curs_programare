#include <iostream>
using namespace std;
//#2263.O firmă are două tipuri de camioane: camioane de tipul 1,
// care pot transporta câte t1 tone de marfă pe zi,
//și camioane de tipul 2, care pot transporta câte t2 tone de marfă pe zi.
//Știind că firma are n camioane de tipul 1 și m camioane de tipul 2,
// câte tone de marfă pot transporta camioanele firmei în z zile.
int main(){
    int TonajTip1, TonajTip2, CamioaneTip1, CamioaneTip2, Zile, ToatalToneZi;
    cin>> TonajTip1 >>TonajTip2 >>CamioaneTip1 >>CamioaneTip2 >>Zile;
    ToatalToneZi = ((TonajTip1 * CamioaneTip1) + (TonajTip2 * CamioaneTip2)) * Zile;
    cout<<ToatalToneZi;
    return 0;
}

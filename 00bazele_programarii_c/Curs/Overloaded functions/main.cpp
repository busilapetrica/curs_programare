#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string toping1);
void bakePizza(string topping1, string topping2);

int main(){
bakePizza("peperoni","mashrums");

return 0;
}

void bakePizza(){
    cout <<"Here is your pizza";
}
void bakePizza(string topping1){
    cout <<"Here is your " << topping1 << " pizza";
}
void bakePizza(string topping1, string topping2){
    cout <<"Here is your " << topping1 << " pizza" <<endl;
    cout <<"Here is your " << topping2 << " pizza";
}

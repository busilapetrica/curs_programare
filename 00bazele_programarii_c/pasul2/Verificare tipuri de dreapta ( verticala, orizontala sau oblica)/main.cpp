/*
Se dau coordonatele a două puncte diferite din plan. Să se stabilească dacă dreapta
determinată de cele două puncte este orizontală, verticală sau oblică.
*/
#include <iostream>
using namespace std;
int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  if (x1 == x2) {
    cout << "verticala";
  } else if (y1 == y2) {
    cout << "orizontala"
  } else {
    cout << "oblica";
  }
  return 0;
}

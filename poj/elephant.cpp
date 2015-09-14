#include <iostream>
#include <cmath>

using namespace std;

int main(){
  const double PI = 3.14159;
  double threshold = 20000;

  double h, r;
  double volume;

  cin >> h >> r;
  volume = PI * r * r *h;
  cout << ceil(threshold/volume);
  return 0;
}

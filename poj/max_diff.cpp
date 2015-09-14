#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int max_odd = 1;
  int min_even = 100;

  for (int i = 0; i < 6; i++){
    int temp;
    cin >> temp;
    if((temp % 2== 0) && (min_even > temp)){
      min_even = temp;
    }
    if((temp % 2 == 1) && (max_odd < temp )){
      max_odd = temp;
    }

  }
  cout << abs(max_odd - min_even) ;
  return 0;
}

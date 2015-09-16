#include <iostream>
using namespace std;

int main() {
  int max, sum = 0;
  cin >> max;

  for(int i = 0; i < 5; i++){
    int temp;
    cin >> temp;
    if (temp < max){
      sum += temp;
    }
  }
  cout << sum;
  return 0;
}

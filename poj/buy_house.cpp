#include <iostream>
using namespace std;

int house_of_price_in(double salary, double rate){
  double total_price = 200;
  for(int i = 0; i <= 20; i++){
      if(salary * (i + 1) - total_price >= 0){
        return i + 1;
      }
      total_price = total_price * (1 + rate);
  }
  return -1;
}

int main() {
  double salary, rate;

  while(cin >> salary >> rate){
    int result = house_of_price_in(salary, rate/100);
    if(result > 0){
      cout << result << endl;
    } else {
      cout << "Impossible" << endl;
    }
  }
  return 0;
}

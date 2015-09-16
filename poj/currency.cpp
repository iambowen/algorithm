#include <iostream>
using namespace std;

int main(){
  int currency;
  cin >> currency;

  cout << currency / 100 << endl;
  cout << (currency % 100) / 50 << endl;
  cout << ((currency % 100) % 50 ) / 20 << endl;
  cout << (((currency % 100) % 50) % 20) / 10 << endl;
  cout << ((((currency % 100) % 50) % 20) % 10) / 5 << endl;
  cout << (((((currency % 100) % 50) % 20) % 10) % 5) << endl;

  return 0;
}

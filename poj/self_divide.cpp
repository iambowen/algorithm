#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  for(int i = 10; i <= num; i++){
    if(i % (i % 10 + i / 10) == 0)
      cout << i << endl;
  }
  return 0;
}

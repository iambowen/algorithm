#include <iostream>
using namespace std;

void guess(int n){
  if(n == 1){
    cout << "End" << endl;
  } else if(n % 2 == 1){
    int temp = n * 3 + 1;
    cout << n << "*3+1=" << temp << endl;
    guess(temp);
  } else {
    int temp = n / 2;
    cout << n << "/2=" << temp << endl;
    guess(temp);
  }
}

int main(){
  int n;

  cin >> n;

  guess(n);

  return 0;
}

#include <iostream>
using namespace std;

void separate(int n){
  if(n / 10 == 0){
    cout << n % 10 << endl;
    return;
  }else {
    separate(n/10);
    cout << n % 10 << endl;
  }
}

int main(){
  int n;

  cin >> n;
  separate(n);

  return 0;
}


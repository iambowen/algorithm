#include <iostream>
using namespace std;

int main() {
  int n;
  int a[100];

  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  while(n-- != 0){
    cout << a[n] << " ";
  }
  return 0;
}

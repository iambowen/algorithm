#include <iostream>
using namespace std;

int main(){
  int k;
  int a[11] = {0};
  cin >> k;
  for(int i = 0; i < k; i++){
    int m;
    cin >> m;
    a[m]++;
  }
  cout << a[1] << endl << a[5] << endl << a[10] << endl;
  return 0;
}


#include <iostream>
using namespace std;
int count(int n){
  int count = 0;
  while(n != 0){
    n = n & (n-1);
    count++;
  }
  return count;
}

int main(){
  int n;
  int a[10] = {0};
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cout << count(a[i]) << endl;
  }
  return 0;
}

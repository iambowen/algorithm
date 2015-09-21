#include <iostream>
using namespace std;

int main(){
  int  n, k;

  cin >> n >> k;

  int a[n];
  k = (k % n);

  for(int i = 0; i < n; i++)
    cin >> a[i];
  int temp = a[n - k];

  for(int i = 0; i < k; i++){
    for(int j = i; j < n; j += k){
      int temp2 = a[j];
      a[j] = temp;
      temp = temp2;
    }
  }

  for(int i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}

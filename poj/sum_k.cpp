#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int i = 1; i < n - 1; i++)
    for(int j = i + 1; j < n; j++){
      if ( (a[i] + a[j]) == k){
        cout << "yes";
        return 0;
      }
    }
  cout << "no";
  return 0;
}

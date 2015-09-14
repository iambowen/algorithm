#include <iostream>
using namespace std;

int main(){
  int n;
  int a[100];
  int max = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for(int i = 0; i < n; i++){
    if(max < a[i])
      max = a[i];
  }
  cout << max;
  return 0;
}

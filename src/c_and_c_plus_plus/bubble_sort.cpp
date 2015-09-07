#include <iostream>
using namespace std;

int main() {
  int a[2000];
  int n;
  int temp; 

  cin >> n;

  for (int i = 0; i < n; ++i ){
    cin >> a[i];
  }

  for(int i = 0; i < n - 1; i++)
    for (int j = 1; j < n - i; j++){
      temp = a[j];
      if (a[j] < a[j - 1]) {
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }

    }

  for ( int i = 0; i < n; i++ )
    cout << a[i] << endl;

  return 0;
}

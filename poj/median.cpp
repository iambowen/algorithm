#include <iostream>
using namespace std;

int main(){
  int n;

  while (cin >> n && n != 0){
    int a[n];
    for(int i = 0; i < n; i++)
      cin >> a[i];
    int pivot = n / 2;

    for(int i = 0; i <= pivot; i++)
      for(int j = 0; j < n - i - 1; j++)
      {
        int temp = a[j];
        if(a[j] > a[j + 1]){
          a[j] = a[j + 1];
          a[j + 1] = temp;
        }
      }

    if(n % 2 == 0) {
      cout << (a[n - pivot - 1] + a[n - pivot]) / 2 << endl;
    }  else {
      cout << a[pivot] << endl;
    }
  }

  return 0;
}

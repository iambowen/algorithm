#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int x[n];
  int y[n];
  int result[n];
  int count = 0;
  for(int i = 0; i < n; i++)
    cin >> x[i] >> y[i];

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n - i - 1; j++){
      if(x[j] > x[j + 1]){
          int tempx = x[j];
          x[j] = x[j + 1];
          x[j + 1] = tempx;
          int tempy = y[j];
          y[j] = y[j + 1];
          y[j + 1] = tempy;
      }
    }

  for(int i = 0, k = 0; i < n; i++){
    int value = 0;
    for(int j = 0; j < n; j++){
      if(i == j)
        continue;
      if (x[j] >= x[i] && y[j] >= y[i]) {
        value++;
      }
    }
    if(value == 0){
      result[k++] = i;
      count++;
    }
  }
  for (size_t i = 0; i < count; i++) {
    if(i == count - 1){
      cout << "(" << x[result[i]] << "," << y[result[i]] << ")";
    } else{
      cout << "(" << x[result[i]] << "," << y[result[i]] << "),";
    }
  }

  return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int n;
  float threshold;
  int isExisted = 0;
  cin >> n >> threshold;

  int numbers[n];
  float stats[n];

  for(int i = 0; i < n; i++){
    cin >> numbers[i] >> stats[i];

  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i - 1; j++){
      if(stats[j] < stats[j + 1]){
        int temp1 = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp1;
        float temp2 = stats[j];
        stats[j] = stats[j + 1];
        stats[j + 1] = temp2;
      }
    }
  }
  for (size_t i = 0; i < n; i++) {
    if(stats[i] > threshold){
      printf("%03d %.1f\n", numbers[i], stats[i]);
      isExisted++;
    }
  }

  if (isExisted == 0) {
    cout << "None.";
  }

  return 0;
}

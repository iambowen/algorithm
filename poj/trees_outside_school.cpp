#include <iostream>
using namespace std;

int main(){
  int roadLength, n;

  cin >> roadLength >> n;
  int upper[n];
  int lower[n];

  for(int i = 0; i < n; i++){
    lower[i] = 0;
    upper[i] = 0;
  }

  for(int i = 0; i < n; i++){
    cin >> lower[i] >> upper[i];
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i - 1; j++){
      int temp = 0;
      if(lower[j] > lower[j + 1]){
        temp = lower[j];
        lower[j] = lower[j + 1];
        lower[j + 1] = temp;
        temp = upper[j];
        upper[j] = upper[j + 1];
        upper[j + 1] = temp;
      }
    }
  }

  int lower_bound = lower[0];
  int upper_bound = upper[0];
  int result = 0;

  for(int i = 1; i < n; i++){
    if(upper[i] <= upper_bound){
      continue;
    } else if(lower[i] > upper_bound){
      result += upper_bound - lower_bound + 1;
      lower_bound = lower[i];
      upper_bound = upper[i];
    } else {
      upper_bound = upper[i];
    }
  }
  
  cout << roadLength - (result + upper_bound - lower_bound + 1) + 1<< endl;

  return 0;
}

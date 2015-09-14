#include <iostream>
using namespace std;

int main() {
  int n;
  double rates[100];
  int indexes[100];
  int interval = 0;

  cin >> n;

  for(int i = 1; i <= n; i++){
    int index;
    double before, after;
    
    cin >> index >> before >> after;
    rates[index] = (double)after / before;
    indexes[index] = index;
  }

  for (int i = 1; i <= n; i++)
    for(int j = 1; j <= n - i; j++){
      double temp = rates[j];
      int index = indexes[j];
      if (rates[j] > rates[j + 1]){
        rates[j] = rates[j + 1];
        rates[j + 1] = temp;
        indexes[j] = indexes[j + 1];
        indexes[j + 1] = index;
      }
    }
  
  for(int i = n; i >= 2; i--){
    if((rates[i] - rates[i - 1]) > (rates[i - 1] - rates[1])) {
      interval = i;
      break;
    }
  }
  cout << n - interval + 1<< endl;
  for(int i = interval; i <= n; i++)
    cout << indexes[i] << endl;

  cout << interval - 1 << endl;
  for(int i = 1; i < interval; i++)
    cout << indexes[i] << endl;


  return 0;
}

#include <iostream>
using namespace std;

int main(){
  int collection[100];
  int n, k;

  cin >> n >> k;

  for(int i = 0; i < n; i++)
    cin >> collection[i];

  for(int i = 0; i < k; i++)
    for(int j = 0; j < n - i - 1; j++)
    {
      int temp = collection[j];
      if(collection[j] > collection[j + 1]){
        collection[j] = collection[j + 1];
        collection[j + 1] = temp;
      }
    }

  cout << collection[n - k];

  return 0;
}

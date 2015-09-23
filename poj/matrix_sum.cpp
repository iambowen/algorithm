#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    int m, k;
    cin >> m >> k;

    int matrix[m][k];

    for(int j = 0; j < m; j++){
      for(int x = 0; x < k; x++){
        cin >> matrix[j][x];
      }
    }
    a[i] = 0;
    for(int j = 0; j < m; j++){
      for(int x = 0; x < k; x++){
        if(j == 0 || j == m - 1 || x == 0 || x == k - 1){
          a[i] += matrix[j][x];
        }
      }
    }
  }

  for(int i = 0; i < n; i++)
    cout << a[i] << endl;

  return 0;
}

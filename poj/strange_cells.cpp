#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  cin >> n;

  int matrix[n][n];
  int count = 0;

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
        cin >> matrix[i][j];
    }

  for(int i = 1; i < n - 1; i++)
    for(int j = 1; j < n - 1; j++){
      int current = matrix[i][j];
      if((matrix[i - 1][j] - current  >= 50)
        && (matrix[i][j - 1] - current >= 50)
        && (matrix[i + 1][j] - current >= 50)
        && (matrix[i][j + 1]  - current >= 50)
      ){
        count++;
      }
    }

  cout << count;

  return 0;
}

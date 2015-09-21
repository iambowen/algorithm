#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int matrix[5][5];
  int m, n;

  for(int i = 0; i < 5; i++)
    for(int j = 0; j < 5; j++){
        cin >> matrix[i][j];
    }

  cin >> m >> n;

  if( (m >= 0) && (m < 5) && (n >= 0) && (n < 5)){
      for(int i = 0; i < 5; i++){
        int temp = matrix[m][i];
        matrix[m][i] = matrix[n][i];
        matrix[n][i] = temp;
      }
  }else{
    cout << "error";
    return 0;
  }

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cout<< setw(4)<< matrix[i][j];
    }
    cout << endl;
  }

  return 0;
}

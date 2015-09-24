#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int m, n;

  cin >> m >> n;

  int hills[m][n];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cin >> hills[i][j];
    }
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      int result = 0;
      if( j - 1 >= 0){
        if(hills[i][j] < hills[i][j - 1]){
          continue;
        } else {
          result = 1;
        }
      }
      if( j + 1 < n){
        if(hills[i][j] < hills[i][j + 1]){
          continue;
        } else {
          result = 1;
        }
      }
      if( i - 1 >= 0){
        if(hills[i][j] < hills[i - 1][j]){
          continue;
        } else {
          result = 1;
        }
      }

      if( i + 1 < m){
        if(hills[i][j] < hills[i + 1][j]){
          continue;
        } else {
          result = 1;
        }
      }

      if (result == 1) {
        cout << i << " " << j << endl;
      }
    }
  }

  return 0;

}

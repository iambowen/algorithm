#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int m, n;

  cin >> m >> n;

  char hills[m][n];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cin >> hills[i][j];
      }
    }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if( j - 1 >= 0){
        if(hills[i][j] < hills[i][j - 1]){
          continue;
        }
      }
      if()
      if ((j - 1 >= 0 && hills[i][j] >= hills[i][j - 1])
          && (i - 1 >= 0 && hills[i][j] >= hills[i - 1][j])
          && (j + 1 < n && hills[i][j] >= hills[i][j + 1])
          && (i + 1 < n && hills[i][j] >= hills[i + 1][j])
        ) {
          cout << i << " " << j << endl;
      }
    }

  return 0;
}

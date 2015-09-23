#include <iostream>
using namespace std;

char * infect(char cells[], int m, int n){
  if ( m == 1){
    char * cellCopy;
    cellCopy = new char[n * n];

    for(int i = 0; i < n; i++)
      for(int j = 0; j < n; j++){
        if(cells[i * n + j] == '.'){
          if((i - 1 >= 0 && j >= 0 && cells[(i - 1) * n + j] == '@')
              || (j - 1 >= 0 && cells[i * n + j - 1] == '@')
              || (j + 1 < n && cells[i * n + j + 1] == '@')
              || (i + 1 < n && cells[(i + 1) * n + j] == '@')
            ){
              cellCopy[i * n + j] = '@';
            } else {
              cellCopy[i * n + j] = '.';
            }
        } else {
          cellCopy[i * n + j] = cells[i * n + j];
        }
      }

    return cellCopy;
  } else {
    return infect(infect(cells, m - 1, n), 1, n);
  }
}

int main(){
  int n, m;
  cin >> n;

  char cells[n * n];
  char * cellCopy;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
      cin >> cells[i * n + j];
    }

  cin >> m;

  cellCopy = infect(cells, m - 1, n);

  int count = 0;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
      if(cellCopy[i * n + j] == '@'){
        count++;
      }
  }
  cout << count;

  return 0;
}

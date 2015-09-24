#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int n;

  cin >> n;

  char dnas[n][256];

  for(int i = 0; i < n; i++){
    cin >> dnas[i];
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; dnas[i][j] != '\0'; j++){
        switch (dnas[i][j]) {
          case 'A': cout << "T"; break;
          case 'T': cout << "A"; break;
          case 'G': cout << "C"; break;
          case 'C': cout << "G"; break;
          default : break;
        }
      }
      cout << endl;
    }
  return 0;
}

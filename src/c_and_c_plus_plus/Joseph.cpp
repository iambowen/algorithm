//for joseph problem
#include <iostream>
using namespace std;

int main(){
  int circle[300];
  int m = -1, n = -1;
  int winners[100];
  int index = 0;
  int amounts[100], token[100], group = 0;
  bool jump = true;

  while(0){
    cout << "something" << endl;
  }

  do{
    cin >> n >> m;
    amounts[group] = n;
    token[group] = m;
    group++;
    cout << m << n << endl;
    jump = (m != 0 && n != 0);
    cout << jump << endl;
  }while(jump);
  
    cout << n << m;
  for(int z = 0; z < group; ++z){
    m = amounts[z];
    n = token[z];

    for(int i = 0; i < 300; ++i){
      circle[i] = i;
    }
    int rounds = m % n == 0 ? m/n : m/n + 1;
    int count = 0;
      for(int j = 1, k = 1; j <= n; ){
        if (circle[j] != 0 && k == 0) {
          circle[j] = 0;
          k = (++k) % m;
          count++;
        }
        if (count == n -1){
          winners[index++] = j;
          break;
        }
        j = j % n + 1;
      }
  }

  for(int i = 0; i < index; ++i)
    cout << winners[i] << endl;

  return 0;
}

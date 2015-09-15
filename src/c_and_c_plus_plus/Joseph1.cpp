//for joseph problem
#include <iostream>
using namespace std;

int joseph(int n, int m){
  int succedent[300], preccedent[300];
  for(int i = 0; i < n - 1; i++){
    succedent[i] = i + 1;
    preccedent[i + 1] = i;
  }
  preccedent[0] = n - 1;
  succedent[n - 1] = 0;

  int current = 0;
  
  while(true){
    for(int count = 0; count < m - 1; count++)
      current = succedent[current];
    int pre = preccedent[current];
    int suc = succedent[current];

    succedent[pre] = suc;
    preccedent[suc] = pre;

    if ( pre == suc ) {
      return pre + 1;
    }
    current = suc;
  }

}

int main(){
  int set_n[100], set_m[100];
  int count = 0;

  while(true){
    int n, m;
    cin >> n >> m;
    if ((n == 0) && (m == 0)){
      break;
    } else {
      set_n[count] = n;
      set_m[count] = m;
      count++;
    }
  }

  for(int i = 0; i < count; i++)
    cout << joseph(set_n[i], set_m[i]) << endl;

  return 0;
}

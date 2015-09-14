//for joseph problem
#include <iostream>
using namespace std;

int joseph(int n, int m){
  int flat[300];
  for(int i = 0; i < n; i++)
    flat[i] = 1;

  for(int i = 0, count = n, mod = m - 1; count != 1; i = ((++i) % n)){
      if(flat[i] == 1){
        if(mod == 0){
          flat[i] = 0;
          count--;
        }
        mod = (mod - 1) % m;
      }
  }
  for(int i = 0; i < n; i++){
    if(flat[i] == 1)
      return i + 1;
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

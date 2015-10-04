#include <iostream>
using namespace std;
const int MAXNUM = 1000;

int main(){
  int prime[MAXNUM];
  int c = 0;

  for(int i = 2; i < MAXNUM; i++)
    prime[i] = 1;

  for(int i = 2; i * i < MAXNUM; i++)
    {
      if(prime[i] == 1){
        for(int k = 2 * i; k < MAXNUM; k++){
          if(!prime[k]) continue;
          if(k % i == 0)
            prime[k] = 0;
        }
      }
    }

  for(int i = 2; i < MAXNUM; i++)
  {
    if(prime[i] == 1){
      cout << "    " << i;
      c++;
      if(c % 10 == 0)
        cout << endl;
    }
  }
  return 0;
}

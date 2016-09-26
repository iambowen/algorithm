
// http://pkuic.openjudge.cn/hw07/solution/6749945/

#include <iostream>
using namespace std;

char man;

int queueGame(char queue[], int pivotal){
  int n;

  if (queue[pivotal] != man){
    return pivotal;
  } else {
    n = queueGame(queue, pivotal + 1);
    cout << pivotal << " " << n << endl;
    return queueGame(queue, n + 1);
  }
}

int main(){
  char queue[101] = {0};
  int n;


  cin >> queue;

  man = queue[0];
  
  n = queueGame(queue, 1);

  cout << 0 << " " << n << endl;

  return 0;
}

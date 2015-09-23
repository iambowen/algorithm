#include <iostream>
using namespace std;

void queueGame(char queue[],  int left, int right){
  if(queue[right] == '\0' || left < 0){
    return;
  }
  if(queue[left] == '(' && queue[right] == ')'){
    cout << left << ' ' << right << endl;
    queueGame(queue, right + 1, right + 1);
  } else if (queue[left] == '(' && queue[right] == '(') {
    queueGame(queue, )

  }
}

int main(){
  char queue[100];
  int length = 0;

  cin.getline(queue, 100);

  queueGame(queue, 0, 1);

  return 0;
}

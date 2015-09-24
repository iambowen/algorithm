#include <iostream>
using namespace std;

void queueGame(char queue[], int left, int right){
  if (queue[right] == '\0' || left < 0){
    return queue;
  }
  if(queue[left] == '(' && queue[right] == ')'){
    cout << left << ' ' << right << endl;
    queue[left] = '0';
    queue[right] = '0';
    if(queue[right + 1] == ')'){
      queueGame(queue, left - 1, right + 1);
    }else{
      queueGame(queue, right + 1, right + 2);
    }
  } else if(queue[left] == '(' && queue[right] == '('){
    queueGame(queue, left - 1, right);
  } else if(queue[left] == '(' && queue[right] == '('){
    queueGame(queue, right, right + 1);
  }
}

int main(){
  char queue[100];

  cin.getline(queue, 100);

  queueGame(queue, 0, 1);

  return 0;
}

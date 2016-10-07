#include <iostream>

using namespace std;

void queueGame(char queue[], int left, int right){

  if (queue[left] == '(' && queue[right] == ')'){
    queue[left] = ' ';
    queue[right] = ' ';
    queueGame(queue, left - 1, right + 1);
  } else if(left < 0 || queue[right] == '\0'){
    return ;
  } else {
    queueGame(queue, right, right + 1);
    queueGame(queue, left, right + 1);
  }
}

int main(){
    char queue[101];

    while(cin >> queue){
  
      cout << queue << endl;

      for (size_t j = 0; queue[j] != 0; j++) {
        if (queue[j] != '(' && queue[j] != ')' ) {
          queue[j] = ' ';
        }
      }

      queueGame(queue, 0, 1);

      for (size_t i = 0; i < queue[i] != '\0'; i++) {
        if (queue[i] == '(') {
          cout << "$";
        }else if (queue[i] == ')') {
          cout << "?";
        }else {
          cout << queue[i];
        }
      }
      cout << endl;
    }

  return 0;
}

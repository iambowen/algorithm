#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string sentences;

  cin >> n;

  // char * words[n];

  getline(cin, sentences);

  int pivot = 0;

  for(int i = 0; sentences[i] != '\0'; i++){
    if((i - pivot + 1) % 80 == 0){
      if(sentences[i] == ' '){
        for(int j = pivot; j <= i; j++){
          cout << sentences[j];
        }
        cout << endl;
        pivot = i + 1;
      } else if(sentences[i + 1] == ' '){
        for(int j = pivot; j <= i; j++){
          cout << sentences[j];
        }
        cout << endl;
        pivot = i + 1;
        i++;
      } else {
        int index = i;
        for( ; index >= 0; index--){
          if (sentences[index] == ' ')
            break;
        }
        for(int j = pivot; j < index; j++)
          cout << sentences[j];
        for(int j = index; j < i; j++){
          cout << ' ';
        }
        cout << endl;
      }
    }
  }

  cout << sentences;

  return 0;
}

#include <iostream>
using namespace std;

int main(){
  char strings[300];

  while(cin.getline(strings, 300)){
    int start = 0;
    int end = 0;

    for (int i = 0; strings[i] != '\0' && strings[i] != '.';){
      int innerStart = 0;
      int innerEnd = 0;

      innerStart = i;
      while((strings[i] != ' ') && (strings[i] != '.')){
        i++;
      }
      innerEnd = i;

      if((innerEnd - innerStart) > (end - start)){
        start = innerStart;
        end = innerEnd;
      }

      i++;
    }

    for(int i = start; i < end; i++){
      cout << strings[i];
    }
    cout << endl;
  }


  return 0;
}

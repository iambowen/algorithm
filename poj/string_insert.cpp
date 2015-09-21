#include <iostream>
using namespace std;

int main(){
  char str[11];
  char substr[4];
  char all[20];

  while(cin.getline(all, 20)){
    int delimeter_index = 0;
    for(int i = 0; all[i] != '\0'; i++){
      if(all[i] == ' '){
        delimeter_index = i;
        str[i] = '\0';
        break;
      }else{
        str[i] = all[i];
      }
    }
    for(int i = delimeter_index + 1, j = 0; all[i] != '\0'; i++, j++){
      substr[j] = all[i];
    }
    substr[3] = '\0';

    int insert_index = 0;
    char max = int(str[0]);
    for(int i = 1; str[i] != '\0'; i++){
      if (max < int(str[i])) {
        max = int(str[i]);
        insert_index = i;
      }
    }

    for(int i = 0; i < insert_index + 1; i++)
      cout << str[i];

    for(int i = 0; substr[i] != '\0'; i++)
      cout << substr[i];

    for(int i = insert_index + 1; str[i] != '\0'; i++)
      cout << str[i];
    cout << endl;  
  }

  return 0;
}

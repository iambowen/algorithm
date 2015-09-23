#include <iostream>
using namespace std;

void reverse_string(char str[], int start, int end){
  if(start == end || str[start] == '\0'){
    return;
  } else{
    reverse_string(str, start + 1, end);
    cout << str[start];
  }
}
void reverse_strings(char str[], int start, int end){
  if(str[start] == '\0'){
    return;
  } else if(str[end] == ' ') {
    reverse_string(str, start, end);
    cout << " ";
    reverse_strings(str, end + 1, end + 1);
  } else if (str[end] == '\0') {
    reverse_string(str, start, end);
  } else{
    reverse_strings(str, start, end + 1);
  }
}

int main(){
  char str[500];

  cin.getline(str, 500);

  reverse_strings(str, 0, 0);

  return 0;
}

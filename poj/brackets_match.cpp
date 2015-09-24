#include <iostream>
using namespace std;

char [] brackets(char str[], int start, int end){
  if (str[end] == '\0') {
    return str;
  } else if (str[start] == '(' && str[end] == ')'){
    str[start] = ' ';
    str[end] = ' ';
    brackets(str, start - 1, end - 1);
  } else if (str[start] != '(' && str[end] != ')'){
    str[start] = ' ';
    str[end] = ' ';
    brackets(str, start + 1, end + 1);
  }
}

int main(){
  int str[101];

  cin.getline(str, 101);


  return 0;
}

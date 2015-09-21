#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
  char A[80];
  char B[80];
  int index = 0;

  cin.getline(A, 80);
  cin.getline(B, 80);

  for(; A[index] != '\0' && B[index] != '\0'; index++){
      if (toupper(A[index]) - toupper(B[index]) < 0){
        cout << "<";
        return 0;
      } else if(toupper(A[index]) - toupper(B[index]) > 0){
        cout << ">";
        return 0;
      }
  }

  if(A[index] == '\0' && B[index] == '\0'){
    cout << "=";
  } else if(A[index] != '\0') {
    cout << ">";
  } else{
    cout << "<";
  }


  return 0;
}

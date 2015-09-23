#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  char token;

  cin >> a >> token >> b >> token >> c;

  if(a + b == c){
    cout << "+";
  } else if( a - b == c){
    cout << "-";
  } else if( a * b == c){
    cout << "*";
  } else if(a / b == c){
    cout << "/";
  } else if( a % b == c){
    cout << "%";
  } else{
    cout << "error";
  }

  return 0;
}

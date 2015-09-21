#include <iostream>
using namespace std;

int main(){
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  char strings[80];

  cin.getline(strings, 80);


  for(int j = 0; strings[j] != '\0'; j++){
    switch (strings[j]) {
      case 'a': a++; break;
      case 'e': e++; break;
      case 'i': i++; break;
      case 'o': o++; break;
      case 'u': u++; break;
      default : break;
    }
  }
  cout << a << " " << e << " " << i << " " << o << " " << u;
  return 0;
}

#include <iostream>
using namespace std;

int main(){
  string s;
  int n;
  cin >> n;
  s = to_string(n);
  for(int i = 0; i < s.length(); i++)
    cout << s[i] << endl;

  return 0;
}

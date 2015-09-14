#include <iostream>
using namespace std;

int main() {
  int n, x, y;
  int eaten, left;
  cin >> n >> x >>y;

  int full = y / x;
  int extra = y % x;
  if(extra > 0) {
    eaten = full + 1;
  } else {
    eaten = full;
  }
  left = n - eaten;
  if (left > 0)
    cout << left;
  else
    cout << 0;
  return 0;
}

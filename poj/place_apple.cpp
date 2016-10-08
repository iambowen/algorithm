#include <iostream>
using namespace std;

int count(int m, int n){
  if(m <= 1 || n <= 1) return 1;
  if(m < n)
    return count(m, m);
  else
    return count(m, n - 1) + count(m - n, n);
}
int main(void){
  int n;
  int apples, plates;
  cin >> n;
  for (size_t i = 0; i < n; i++)
  {
    cin >> apples >> plates;
    cout << count(apples, plates) << endl;
  }

  return 0;
}

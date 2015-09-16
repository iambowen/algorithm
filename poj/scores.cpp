#include <iostream>
using namespace std;

int main(){
  int scores[101];
  int score;
  cin >> score;

  for(int i = 95; i <= 100; i++ )
    scores[i] = 1;
  for(int i = 90; i < 95; i++ )
    scores[i] = 2;
  for(int i = 85; i < 90; i++ )
    scores[i] = 3;
  for(int i = 80; i <= 85; i++ )
    scores[i] = 4;
  for(int i = 70; i < 80; i++ )
    scores[i] = 5;
  for(int i = 60; i < 70; i++ )
    scores[i] = 6;
  for(int i = 0; i < 60; i++ )
    scores[i] = 7;

  cout << scores[score];
  return 0;
}

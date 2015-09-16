#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int n;
  int age18 = 0, age35 = 0, age60 = 0, age60plus = 0;

  cin >> n;
  int ages[n];
  for(int i = 0; i < n; i++)
    cin >> ages[i];

  for(int i = 0; i < n; i++){
    if(ages[i] <= 18){
      age18++;
    } else if(ages[i] <= 35){
      age35++;
    } else if(ages[i] <= 60){
      age60++;
    } else{
      age60plus++;
    }
  }
  cout << fixed << setprecision(2);

  cout << "1-18: " << 100.0 * age18 / n << "%" << endl;
  cout << "19-35: " << 100.0 * age35 / n << "%" << endl;
  cout << "36-60: " << 100.0 * age60 / n << "%" << endl;
  cout << "60-: " << 100.0 * age60plus / n << "%" << endl;

  return 0;
}

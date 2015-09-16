#include <iostream>
using namespace std;

double walk(double distance){
  return distance / 1.2;
}

double ride(double distance){
  return 50 + distance / 3.0;
}

int main() {
  int n;
  cin >> n;
  int distances[n];

  for(int i = 0; i < n; i++){
    cin >> distances[i];
  }

  for(int i = 0; i < n; i++){
    if(walk(distances[i]) == ride(distances[i])){
      cout << "All" << endl;
    } else if (walk(distances[i]) < ride(distances[i])){
      cout << "Walk" << endl;
    } else {
      cout << "Bike" << endl;
    }

  }
  return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  int n;

  cin >> n;

  double x[n], y[n];
  double max_distance = 0.0;

  for(int i = 0; i < n; i++){
    cin >> x[i] >> y[i];
  }

  for(int i = 0; i < n; i++)
    for(int j = i + 1; j < n; j++){
      double distance;
      distance = (x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]);
      if(distance > max_distance)
        max_distance = distance;
    }

  cout << fixed << setprecision(4) << sqrt(max_distance) << endl;

  return 0;
}

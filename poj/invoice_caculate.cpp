#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  char typeCollection[4] = {' ', 'A', 'B', 'C'};
  float typeMoney[4];
  float totalMoney[4];

  for(int i = 1; i < 4; i++){
      int id, n;
      cin >> id >> n;

      for( int j = 0; j < n; j++){
        char type;
        float money;
        cin >> type >> money;
        totalMoney[id] += money;

        if(type == 'A'){
          typeMoney[1] += money;
        } else if(type == 'B'){
          typeMoney[2] += money;
        } else {
          typeMoney[3] += money;
        }
      }
  }
  for(int i = 1; i < 4; ++i){
    cout << i << " " << fixed << setprecision(2) << totalMoney[i] << endl;
  }
  for(int i = 1; i < 4; ++i){
    cout << typeCollection[i] << " " << fixed << setprecision(2) << typeMoney[i] << endl;
  }
  return 0;

}

#include <iostream>
using namespace std;

int main(){
    int n;
      cin >> n;

        int x[n];

          for(int i = 0; i < n; i++)
                cin >> x[i];

          for(int i = 0; i < n; i++){
            if(x[i] == i){
                    cout << i;
                          return 0;
                              
            }
              
          }
            cout << "N";
              return 0;

}

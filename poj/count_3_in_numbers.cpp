#include <iostream>
using namespace std;

int counts_of_three_in(int m){
  if(m / 10 == 0){
    if(m == 3){
            return 1;
                
    } else {
            return 0;
                
    }
      
  } else {
        return counts_of_three_in(m % 10) + counts_of_three_in(m / 10);
          
  }

}

int main(){
    int m, k;
      cin >> m >> k;

      if((m % 19 == 0) && (counts_of_three_in(m) == k)){
            cout << "YES";
              
      } else{
            cout << "NO";
              
      }

        return 0;

}

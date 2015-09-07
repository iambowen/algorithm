#include <iostream>

using namespace std;

int main() {
   int odd[10];
   int odd_count = 0;
   int even[10];
   int even_count = 0;
   int temp; 

   for(int i = 0, j = 0, n = 0; n < 10; n++){
      cin >> temp;
      if (temp % 2 == 0){
        even[i++] = temp;
        even_count++;
      } else {
        odd[j++] = temp;
        odd_count++;
      }
   }

  for(int i = 0; i < even_count; i++)
    for (int j = 1; j < even_count - i; j++){
      temp = even[j];
      if (even[j] < even[j - 1]) {
        even[j] = even[j - 1];
        even[j - 1] = temp;
      }
    }

  for(int i = 0; i < odd_count; i++)
    for (int j = 1; j < odd_count - i; j++){
      temp = odd[j];
      if (odd[j] < odd[j - 1]) {
        odd[j] = odd[j - 1];
        odd[j - 1] = temp;
      }
    }

  for ( int i = 0; i < odd_count; i++ )
    cout << odd[i] << " ";

  for ( int i = 0; i < even_count; i++ )
    cout << even[i] << " ";

  return 0;
}

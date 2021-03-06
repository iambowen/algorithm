/*given the input is limited from 100 to 999, print out the number ABC = A*A*A + B*B*B*B + C*C*C. This is called the narcissus number */
#include <stdio.h>

int is_narcissus(int number) {
  int a = number / 100;
  int c = number % 10;
  int b = (number / 10) % 10;
  if (number == (a * a * a + b * b * b + c * c * c))
    return 1;
  return 0;
}

int main(){
  int number = 100;
  
  for (; number < 1000; number++){
    if (is_narcissus(number) == 1)
      printf("%d is a narcissus number between 100 and 999.\n", number);
  }
  
  return 0;
}

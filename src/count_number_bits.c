/*given a number is less than 1000000000, caculate the bits count the number have*/

#include<stdio.h>

int divider(int bits) {
   int number = 1;
   for(int i = 1; i <= bits; ++i){
    number *= 10;
  }
  return number;
}

int main()
{
  int number;
  int count = 0;

  scanf("%d", &number);
  for(int i = 9; i > 0; i--) {
    if (number / divider(i) >= 1)
      count = i;
  }  
  printf("the number %d has %d bits", number, count);
  return 0;
}

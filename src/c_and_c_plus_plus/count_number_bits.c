/*given a number is less than 1000000000, caculate the bits count the number have*/

#include<stdio.h>
#define INF 1000000000
int divider(int bits) {
   int number = 1;
   int i = 1;
   for(; i <= bits; ++i){
    number *= 10;
  }
  return number;
}

void exit_if_number_is_too_large(long number) {
   if (number > INF) {
     printf("Sorry, your input number is over the boarder.\n");
     exit(666);  
   }
}

int main()
{
  long number;
  int count = 0;
  int i = 9;
  scanf("%ld", &number);
  exit_if_number_is_too_large(number);
  for(; i > 0; i--) {
    long d= divider(i); 
    if (number / d >= 1){
      count = i;
      break;
    }
  }  
  printf("the number %ld has %d bits.\n", number, count + 1);
  return 0;
}

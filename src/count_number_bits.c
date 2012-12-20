/*given a number is less than 1000000000, caculate the bits count the number have*/

#include<stdio.h>
#define INF 1000000000
int divider(int bits) {
   int number = 1;
   for(int i = 1; i <= bits; ++i){
    number *= 10;
  }
  return number;
}
int exit_if_number_is_too_large(int number) {
   if number > INF
     printf("Sorry, your input number is over the boarder.\n");
   exit(666);  
}
int main()
{
  int number;
  int count = 0;

  scanf("%d", &number);
  for(int i = 9; i > 0; i--) {
    int divider = divider(i); 
    exit_if_number_is_too_large(divider) 
    if (number / divider >= 1)
      count = i;
  }  
  printf("the number %d has %d bits", number, count);
  return 0;
}

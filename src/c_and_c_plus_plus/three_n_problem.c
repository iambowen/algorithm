#include <stdio.h>
#include <math.h>

int odd(int number)
{
  if (number % 2 == 0)
    return 1;
  return 0;
}

int main()
{
  int count = 0;
  int n; 

  scanf("%d", &n);

  while(n > 1) {
   if (odd(n))  
     n /= 2;
   else
     n = 3 * n + 1;
   count++;
  }
 printf("times to format: %d\n", count);
 return 0; 
}

#include <stdio.h>

int main()  {
  int number = 0;
  int a, b, c, d;
  int i = 3;
  for (; i <= 9; ++i)
  {
    number = 121 * i * i;
    a = number / 1000;
    b = (number / 100) % 10;
    c = (number % 100) / 10;
    d = number % 10;

    if (a == b && c == d)
    {
      printf("%d \n", number);
    }
  }
  return 0;
}

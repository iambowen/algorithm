#include <stdio.h>

void hanio(int n, char a, char b, char c){
  if(n == 1){
    printf("move from %c to %c\n", a, c);
    return ;
  }
  hanio(n - 1, a, c, b);
  hanio(1, a, b, c);
  hanio(n - 1, b, a, c);
}

int main(void){
  int n;
  scanf("%d", &n);
  hanio(n, 'a', 'b', 'c');
  return 0;
}

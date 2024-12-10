#include <stdio.h>

int main(void) {
  int x;
  printf("Please enter an intger: ");
  scanf("%d",&x);
  x % 2 == 0 ? printf("even\n"):printf("odd\n");

  return 0;
}
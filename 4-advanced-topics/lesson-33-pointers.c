#include <stdio.h>

int main(void) {
  int t,x,y;
  printf("Please enter integer x & y: ");
  scanf("%d%d",&x,&y);
  printf("X: %d Y: %d\n",x,y);
  t = x;
  x = y;
  y = t;

  printf("X: %d Y: %d\n",x,y);
  return 0;
}
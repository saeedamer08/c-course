#include <stdio.h>

int main(void) {
  int x, sum=0;
  printf("Please, enter the price: ");
  scanf("%d",&x);
  while(x != 0){
    sum += x;
    printf("Please, enter the price: ");
    scanf("%d",&x);
  }
  printf("Sum = %d\n",sum);
  return 0;
}
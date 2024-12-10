#include <stdio.h>

#include <stdio.h>

int main(void) {
    int x1,x2,x3,x4,x5,sum=0;
  printf("Please enter number 1: ");
  scanf("%d",&x1);
  printf("Please enter number 2: ");
  scanf("%d",&x2);
  printf("Please enter number 3: ");
  scanf("%d",&x3);
  printf("Please enter number 4: ");
  scanf("%d",&x4);
  printf("Please enter number 5: ");
  scanf("%d",&x5);
  sum = x1+x2+x3+x4+x5;
  do{
    printf("%d %d %d %d %d sum = %d \n",x5,x4,x3,x2,x1,sum);
    printf("%d %d %d %d %d sum = %d \n",x1,x2,x3,x4,x5,sum);
    break;
  } while (sum != 0);
  return 0;
}
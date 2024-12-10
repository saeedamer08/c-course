#include <stdio.h>

int main(void) {
  int i,numbers[11],sum=0;
  printf("Enter 10 numbers: ");
  for(i = 0; i < 10; i++){
    scanf("%d",&numbers[i]);
  }
  
  for(i = 0; i < 10; i++){
    printf("\n%d\n",numbers[i]);
    sum += numbers[i];
  }
  printf("Sum = %d\n",sum);
  return 0;
}
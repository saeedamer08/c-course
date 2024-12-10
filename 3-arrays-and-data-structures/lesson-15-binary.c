#include <stdio.h>

int main(void) {
  int binary, decimal = 0, y=1;
  printf("Enter binary number: ");
  scanf("%d",&binary);
  while (binary){
    decimal += binary%10 * y;
    binary /= 10;
    y *= 2; 
  }
  printf("%d\n",decimal);
  return 0;
}

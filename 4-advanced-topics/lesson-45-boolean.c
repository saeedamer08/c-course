#include <stdio.h>
#include <stdbool.h>

bool isBigger (int x,int y){
  if (x > y)
    return 1;
  else if (y > x)
    return 0;   
}

int main(void) {
  int x,y;
  printf("Please enter number1:  ");
  scanf("%d",&x);
  printf("Please enter number2:  ");
  scanf("%d",&y);
  if(isBigger(x,y))
    printf("First is the greatest\n");
  else
    printf("Second is the greatest\n");  

  return 0;
}
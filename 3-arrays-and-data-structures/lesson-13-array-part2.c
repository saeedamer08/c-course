#include <stdio.h>

int main(void){
    while(1){
      int i,count=0,numbers[11];
      printf("Enter 10 numbers: ");
      for(i = 0; i < 10; i++){
        scanf("%d",&numbers[i]);
      }
  
      for(i = 0; i < 10; i++)
        if (numbers[i] == 5)
          count++;
    
      printf("5 is found %d times\n",count);
    }
  return 0;
}
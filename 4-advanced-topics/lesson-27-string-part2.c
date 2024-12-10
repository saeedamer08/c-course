#include <stdio.h>

int main(void){
    while(1){
      int i,numbers[11];
      printf("Enter 10 numbers: ");
      for(i = 0; i < 10; i++){
        scanf("%d",&numbers[i]);
      }
  
      for(i = 0; i < 10; i++)
        if(numbers[i] == 5){
          printf("Found\n");
          return 0;
        }
      printf("Not found\n");
    }
  return 0;
}

#include <stdio.h>
#include <string.h>

int main(void) {
  int i,j;
  char x[3][3][11];
  printf("Please, enter 9 names: ");
  for(i=0; i < 3; i++)
    for(j=0; j < 3; j++)
      scanf("%s",x[i][j]);
 
  for(i=0; i < 3; i++){
    for(j=0; j < 3; j++)
      printf("%s ",x[i][j]);
    printf("\n");
  }

  return 0;
}
#include <stdio.h>

int main(void) {
  int i,j,x1[4][5];
  int x2[4][5]={{1,2,3,4,5},
              {11,22,33,44,55},
              {14,88,87,89,99},
              {35,70,42,84,77}};
  
  for (i = 0; i < 4; i++)
    for(j = 0; j < 5; j++)
      x1[i][j] = x2[i][j];

  for (i = 0; i < 4; i++){
    for(j = 0; j < 5; j++)
      printf("%d\t", x1[i][j]);
    printf("\n");  
  }
  return 0;
}
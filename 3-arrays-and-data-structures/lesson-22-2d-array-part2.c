#include <stdio.h>

int main(void) {
  int x[4][5]={{20,21,22,23,24},
                {25,26,27,28,29},
                {30,31,32,33,34},
                {35,36,37,38,39}};
  int i,j,sum[4];
  for(i = 0; i < 4; i++) {
    sum[i] = 0;
    for(j = 0; j < 5; j++) {
      printf("%d\t", x[i][j]);
      sum[i] += x[i][j];
    }
    printf("\n");
  }
  printf("\n");
  for(i = 0; i < 4; i++)
    printf("Sum %d = %d\n", i, sum[i]);
}
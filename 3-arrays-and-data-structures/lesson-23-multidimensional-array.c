#include <stdio.h>

int main(void) {
  int i,j,k;
  int x[3][3][3];
  for (i = 0; i<3; i++)
    for (j = 0; j<3; j++)
      for (k = 0; k<3; k++)
        scanf("%d",&x[i][j][k]);
  for (i = 0; i<3; i++)
    for (j = 0; j<3; j++)
      for (k = 0; k<3; k++)
        printf("%d ",x[i][j][0]);

  return 0;
}
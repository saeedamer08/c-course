#include <stdio.h>

struct student {
  char name[50],cell[50];
  int videos;
};

int main(void) {
  struct student x[100];
  int i;

  for(i=0; i < 2; i++){
      printf("%d) \n",i+1);
      printf("Name: ");
      scanf("%s",x[i].name);
      printf("Tel: ");
      scanf("%s",x[i].cell);
      printf("Videos: ");
      scanf("%d",&x[i].videos);
  }

 for(i=0; i < 2; i++){ 
      printf("\n\n%d) \n",i+1);
      printf("Name: %s\n",x[i].name);
      printf("Tel: %s\n",x[i].cell);
      printf("Videos: %d\n\n",x[i].videos);
  }

  return 0;
}
#include <stdio.h>

struct student {
  char name[50],cell[20];
  int videos;
};


int main(void) {
  struct student x;
  printf("Enter name: ");
  scanf("%s",x.name);
  printf("Enter number: ");
  scanf("%s",x.cell);
  x.videos = 65;

  printf("Name: %s, Number: %s, vidoes: %d\n",x.name,x.cell,x.videos);
  return 0;
}
#include <stdio.h>

int main(void) {
  int x; char name[30];
  printf("What's your name? ");
  scanf("%s",name);
  printf("How old are you? ");
  scanf("%d",&x);

  printf("%s %d years old\n",name,x);
  return 0;
}
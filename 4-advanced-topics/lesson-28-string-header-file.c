#include <stdio.h>
#include <string.h>

int main(void) {
  char s1[40], s2[20];
  printf("First name: ");
  scanf("%s",s1);
  printf("Last name: ");
  scanf("%s",s2);
  strcat(s1,s2);
  printf("%s\n",s1);
  return 0;
}
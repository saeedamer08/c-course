#include <stdio.h>

int main(void) {
  char s[3][50];
  int i;
  for (i = 0; i < 3; i++){
    printf("Enter a name: ");
    scanf("%s",s[i]);
  }
  
  for (i = 0; i < 3; i++){
    printf("%s ",s[i]);
  }

  return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int n1;
    int n2;
    int result;
    printf("please enter the first number: ");
    scanf("%d", &n1);
    printf("please enter the second number: ");
    scanf("%d", &n2);
    result = n1 + n2;
    printf("%d\n",result);
    
    return 0;
}
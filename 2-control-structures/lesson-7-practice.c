/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int age, i;
    printf("How old are you? ");
    scanf("%d",&age);
    if(age<10)
        for(i=0; i<age; i++)
            printf("Hello\n");
    else
        printf("Hello\n ");
    
    return 0;
}
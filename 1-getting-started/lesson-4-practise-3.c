/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("Please, enter your birthdate: ");
    scanf("%d%*c%d%*c%d",&day,&month,&year);
    printf("--> %d %d %d\n",day, month, year);

    return 0;
}
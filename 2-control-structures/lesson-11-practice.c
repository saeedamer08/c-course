/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=5, j=1; i>0 && j<6 ; i--,j++)
        printf("%d %d\n",i,j);
        
    printf("Done\n");    
    return 0;
}
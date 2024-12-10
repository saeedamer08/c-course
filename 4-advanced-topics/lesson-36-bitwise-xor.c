/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x = 5;
    int y = 7;
    printf("%d %d\n",x,y);
    x ^= y;
    y ^= x;
    x ^= y;
     
    printf ("%d %d\n",x,y);
    
    return 0; 
}
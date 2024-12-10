/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int price;
    printf("Please, Enter the price: ");
    scanf("%d",&price);
    if( price <= 1000){
        printf("Yes\n");
    } 
    else {
        printf ("No\n");
    }
    
    
    
    return 0;
}
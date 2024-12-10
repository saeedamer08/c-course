/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// declare global variables
int x,y, sum, product;

int Sum(){
    sum = x+y;
    return 0;
}

int Product(){
    product = x * y;
    return 0;
}

int main()
{
    printf("Enter the first number: ");
    scanf("%d", &x);
    
    printf("Enter the second number: ");
    scanf("%d", &y);
    
    Sum();
    Product();
    
    printf("\nSum: %d\n", sum);
    printf("Product: %d\n", product);
    
    return 0; 
}
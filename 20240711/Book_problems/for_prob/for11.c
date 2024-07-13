//3. Write a C program that calculates the product of numbers from 1 to n using a while loop.
#include<stdio.h>
int main() 
{
    int n, i, prod = 1;
    printf("Enter the Number for product's Limit :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        prod = prod * i;
        printf("Current number: %d, Current product: %d\n", i, prod);
    }
    printf("The product from 1 to %d is: %d\n", n, prod);
    return 0;
}

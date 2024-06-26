// Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the Number :");
    scanf("%d", &n);
    if(n % 5 == 0 && n % 11 == 0)
    {
        printf("\n%d is divisible by 5 & 11", n);
    }
    else{
        printf("\n%d is not divisible by 5 & 11", n);
    }
}
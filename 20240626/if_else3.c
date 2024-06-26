// Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the Number :");
    scanf("%d", &n);
    if(n > 0)
    {
        printf("\n%d is positive number", n);
    }
    else if(n < 0)
    {
        printf("\n%d is negative number", n);
    }
    else{
        printf("\n%d is Zero", n);
    }

    return 0;
}
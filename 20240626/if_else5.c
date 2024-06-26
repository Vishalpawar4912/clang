// Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("\n%d is even number", n);
    }
    else{
        printf("\n%d is odd number", n);
    }
}
//1.Write a C program that calculates the factorial of a given number using a while loop.
#include<stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter the Number :");
    scanf("%d", &num);
    while (num >= 1)
    {
        fact = fact * num;
        num--;
    }
    printf("The Factorial is %d", fact);    
}
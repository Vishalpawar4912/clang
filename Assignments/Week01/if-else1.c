//1.Write a C program that takes three integers as input and prints the largest of the three numbers using if-else statements.
#include<stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter the values of a, b, c :");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
    {
        if(a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else if(b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("%d is Maximum Number", max);
}
//1. Write a recursive C function to calculate the sum of digits of a number. 
// Use this function in main to accept a number and print sum of its digits.
#include<stdio.h>
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
int main()
{
    int num, result;
    printf("Enter the Number :");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of Digits of %d is %d", num, result);
    return 0;
}
//7. Write a C program to find sum of digits of a given number using recursion.
#include<stdio.h>
int main()
{
    int num, sum;
    printf("Enter the Number to get the Sum: ");
    scanf("%d", &num);
    sum = sumofDigits(num);
    printf("Sum of Digits of %d = %d", num, sum);
    return 0;
}
int sumofDigits(int num)
{
    if(num == 0)
        return 0;
    return((num % 10) + sumofDigits(num / 10));
}
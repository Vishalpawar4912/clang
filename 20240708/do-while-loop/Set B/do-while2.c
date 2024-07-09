// 2. Write a program to accept real number x and integer n and calculate the sum of first n terms of the series x+ 3x+5x+7x+… 
#include<stdio.h>
int main()
{
    float x, sum = 0;
    int n, i = 1;
    printf("Enter the value of Real Number X :");
    scanf("%f", &x);
    printf("Enter the value of n:");
    scanf("%d", &n);
    do
    {
        sum = sum + ((2 * i - 1) * x);
        i++;
    } while (i <= n);
    printf("Sum of Series is : %.f", sum);
}
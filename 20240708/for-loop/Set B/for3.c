// 3. Write a program to accept real number x and integer n and calculate the sum of first n terms of the series 1/x + 2/x^2 + 3/x^3 + …
#include<stdio.h>
int main()
{
    float sum = 0, m;
    int x, n, i, j;
    printf("Enter the value of Real Number :");
    scanf("%d", &x);
    printf("Enter the value of n :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        m = x;
        for(j = 1; j < i; j++)
        {
            m = (m * x);
        }
        sum = sum + (i / m);
    }
    printf("Sum of Series is : %.2f", sum);
}
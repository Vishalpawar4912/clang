// 3. Write a program to accept two integers x and n and compute x^n.
#include<stdio.h>
int main()
{
    int x, n, pow = 1, i;
    printf("Enter the value of X and n :");
    scanf("%d %d", &x, &n);
    for(i = 0; n != i; i++)
    {
        pow = pow * x;
    }
    printf("%d to the Power %d = %d", x, n, pow);
}
//  3. Write a program to accept two integers x and n and compute x^n.
#include<stdio.h>
int main()
{
    int x, n;
    int pow = 1, i = 0;
    printf("Enter the value of X and n :\n");
    scanf("%d %d", &x, &n);
    do
    {
        pow = pow * x;
        i++;
    } while (n != i);
    printf("%d to the Power %d = %d", x, n, pow);
}
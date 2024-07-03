//  3. Write a program to accept two integers x and n and compute x^n.
#include<stdio.h>
#include<math.h>
int main()
{
    int x, n, pow = 1, i = 0;
    printf("\nEnter the value of X and n :");
    scanf("%d %d", &x, &n);
    pow = x;
    while(n != i)
    {
        pow = pow * x;
        i++;
    }
    printf("%d to the power %d = %d", x, n, pow);
}
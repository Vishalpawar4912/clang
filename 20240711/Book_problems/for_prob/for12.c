// 12.Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.
#include<stdio.h>
int main() 
{
    int i, sum = 0, n, cube;
    printf("Enter the limit for Even Numbers :");
    scanf("%d", &n);
    for(i = 2; i <= n; )
    {
        if (i % 2 == 0) 
        {
            cube = i * i * i;
            sum = sum + cube;
        }
        i = i + 2;
    }
    printf("Sum of cubes of even numbers up to %d: %d\n", n, sum);
    return 0;
}

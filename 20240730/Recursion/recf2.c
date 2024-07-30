//2. Write a C program to generate nth Fibonacci term using recursion.
#include<stdio.h>
int fibonacci(int n) 
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci term at position %d is: %d\n", n, fibonacci(n));
    return 0;
}

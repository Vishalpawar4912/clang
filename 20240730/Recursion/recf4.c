//4. Write a C program to find LCM of two numbers using recursion.
#include<stdio.h>
int gcd(int a, int b) 
{
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}
int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
    return 0;
}

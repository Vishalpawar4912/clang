//7. Write a function in C that takes two integers, base and exponent, and returns the result of raising the base to the power of the exponent.
#include <stdio.h>
int power(int base, int exp);
int main() 
{
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp); 
    if (exp < 0) 
    {
        printf("Exponent should be non-negative.\n");
        return 1;
    }
    int result = power(base, exp);    
    printf("%d^%d = %d\n", base, exp, result);
    return 0;
}
int power(int base, int exp) 
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}
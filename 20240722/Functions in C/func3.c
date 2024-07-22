//3. Write a function to calculate the greatest common divisor (GCD) of two numbers using the Euclidean algorithm.
#include <stdio.h>
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() 
{
    int num1, num2;
    printf("Enter the Two Numbers to calculate GCD: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
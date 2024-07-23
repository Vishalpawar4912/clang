//2. Write a recursive C function to calculate the GCD of two numbers. Use this function in main. The GCD is calculated as : 
//gcd(a,b) = a                       if b = 0             
//         = gcd (b, a mod b)        otherwise
#include<stdio.h>
int gcd(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    } 
    else 
    {
        return gcd(b, a % b);
    }
}
int main()
{
    int a, b, result;
    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("The GCD of %d and %d is %d.\n", a, b, result);
}
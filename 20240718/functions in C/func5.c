//5. function to calculate factorial of n.
#include<stdio.h>
int factorial(int n)
{
    int fact = 1, i;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num, ans;
    printf("Enter the Number :");
    scanf("%d", &num);
    ans = factorial(num);
    printf("The Factorial of %d is %d", num, ans);
    return 0;
}
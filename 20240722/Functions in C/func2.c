//2. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>
int main() 
{
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) 
    {
        sum += fact(i) / i;
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}
int fact(int n) 
{
    int f = 1;
    for(int i = 1; i <= n; i++) 
    {
        f *= i;
    }
    return f;
}
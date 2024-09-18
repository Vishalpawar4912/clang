//11. Function to check whether a number is Prime. Return 1 if prime and 0 otherwise. Use this function in main to display first n prime numbers.
#include<stdio.h>
int isprime(int n) 
{
    if(n <= 1) 
    {
        return 0;
    }
    for(int i = 2; i <= n / 2; i++) 
    {
        if(n % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    int num = 2, n, cnt = 0;
    printf("Enter the Number :");
    scanf("%d", &n);
    while (cnt < n) 
    {
        if(isprime(num)) 
        {
            printf("%d ", num); 
            cnt++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
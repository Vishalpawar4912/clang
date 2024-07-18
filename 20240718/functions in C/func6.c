//6. Function to check whether a number is Prime. Return 1 if prime and 0 otherwise.
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
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    if(isprime(num))
    {
        printf("%d is Prime Number", num);
    }
    else
    {
        printf("%d is not Prime Number", num);
    }
}
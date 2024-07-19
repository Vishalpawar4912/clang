//6. Write a C program to find all prime numbers between given interval using functions.
#include<stdio.h>
void findPrimes(int start, int end)
{
    printf("Prime numbers between %d and %d are:\n", start, end);
    for(int i = start; i <= end; i++)
    {
        int isprime = 1;
        for(int j = 2; i > 1 && j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime && i > 1)
            printf("%d\t", i);
    }    
}
int main() 
{
    int start, end;
    printf("Enter the start and end of the interval: ");
    scanf("%d %d", &start, &end);
    findPrimes(start, end);
    return 0;
}
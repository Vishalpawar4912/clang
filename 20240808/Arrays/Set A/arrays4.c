//4. Write a program to accept n numbers and store all prime numbers in an array called prime. Display this array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Numbers:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int prime[n], primeCnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
        {
            prime[primeCnt++] = arr[i];
        }
    }
    printf("Prime Numbers: ");
    for(int i = 0; i < primeCnt; i++)
    {
        printf("%d  ", prime[i]);
    }
    printf("\n");
    return 0;
}
int isPrime(int num)
{
    if(num <= 1)
        return 0;
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
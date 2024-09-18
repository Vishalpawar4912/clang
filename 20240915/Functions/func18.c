//18. Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
#include<stdio.h>
int isPrime(int num)
{
    if(num <= 1)
        return 0;
    for(int i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int isArmstrong(int num)
{
    int sum = 0, temp;
    temp = num;
    while(temp != 0)
    {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }
    return sum == num;
}
int isPerfect(int num)
{
    int sum = 0;
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
            sum = sum + i;
    }
    return sum == num;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) printf("%d is prime\n", num);
    if (isArmstrong(num)) printf("%d is Armstrong\n", num);
    if (isPerfect(num)) printf("%d is perfect\n", num);
    return 0;
}
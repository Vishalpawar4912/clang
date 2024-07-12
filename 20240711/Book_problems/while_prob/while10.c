//10. Find the sum of first n Numbers.
#include<stdio.h>
int main()
{
    int sum = 0, n, i = 1;
    printf("Enter the value of n :");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("\nThe Sum of Numbers from 1 to %d is : %d", n, sum);
}


//10. Find the sum of first n Numbers.
#include<stdio.h>
int main()
{
    int sum = 0, n, i;
    printf("Enter the value of n :");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum = sum + i;
    printf("\nThe Sum of Numbers from 1 to %d is : %d", n, sum);
}
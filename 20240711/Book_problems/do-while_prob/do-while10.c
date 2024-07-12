//10. Find the sum of first n Numbers.
#include<stdio.h>
int main()
{
    int sum = 0, n, i = 1;
    printf("Enter the value of n :");
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);

    printf("\nThe Sum of Numbers from 1 to %d is : %d", n, sum);
}

//3.Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
#include<stdio.h>
int main()
{
    int n, i = 1, t = 9;
    int sum = 0;
    printf("Enter the Number of Terms :");
    scanf("%d", &n);
    do
    {
        sum = sum + t;
        printf("%d ", t);
        t = t * 10 + 9;
        i++;
    } while (i <= n);
    printf("\nThe sum of the series = %d \n", sum);
    return 0;
}

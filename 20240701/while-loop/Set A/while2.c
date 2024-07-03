// 2. Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive).
#include<stdio.h>
int main()
{
    int x = 1, y = 0, sum = 0;
    while(x > y)
    {
        printf("\nFirst Number :");
        scanf("%d", &x);
        printf("\nSecond Number Should be greater than First One :");
        scanf("%d", &y);
    }
    while(x <= y)
    {
        sum = sum + x;
        x++;
    }
    printf("\nResult : %d", sum);
}
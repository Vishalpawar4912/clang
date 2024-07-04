// 2. Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive).
#include<stdio.h>
int main()
{
    int x, y, sum = 0;
    printf("\nFirst Number :");
    scanf("%d", &x);
    printf("\nSecond Number Should be greater than First One :");
    scanf("%d", &y);
    if(x < y)
    {
        while(x <= y)
        {
            sum = sum + x;
            x++;
        }
        printf("\nResult : %d", sum);
    }
    else{
        printf("We cannot Calculate sum because Second Number should be greater than First One");
    }
}
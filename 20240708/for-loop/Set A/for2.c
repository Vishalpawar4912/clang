// 2. Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive).
#include<stdio.h>
int main()
{
    int x, y, sum = 0;
    printf("\nFirst Number :");
    scanf("%d", &x);
    printf("\nSecond Number should be Greater than one :");
    scanf("%d", &y);
    if(x < y)
    {
        for(;x <= y; x++)
        {
            sum = sum + x;
        }
        printf("\n Result :%d", sum);
    }
    else{
        printf("We cannot Calculate sum because Second Number should be greater than First One");
    }
}
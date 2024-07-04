// 2. Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive).
#include<stdio.h>
int main()
{
    int x, y, sum = 0;
    printf("Enter the First Number :\n");
    scanf("%d", &x);
    printf("Enter Second Number it should be Greater than First One :\n");
    scanf("%d", &y);
    if(x < y)
    {
        do
        {
            sum = sum + x;
            x++;
        } while (x <= y);
        printf("Sum of all integers between %d and %d : %d\n", x, y, sum);
    }
    else{
        printf("We cannot Calculate sum because Second Number should be greater than First One");
    }
}

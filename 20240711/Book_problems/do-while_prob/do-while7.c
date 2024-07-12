//7. Program to accept a Number and check whether it is a Perfect Number (i.e. the Sum of it's factor = Number itself).
#include<stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter the Number :");
    scanf("%d", &n);
    do
    {
        if(n % i == 0)
            sum = sum + i;
            i++;
    } while (i < n);
    if(sum == n)
        printf("%d is Perfect Number", n);
    else
        printf("%d is not Perfect Number", n);
    return 0;
}

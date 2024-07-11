// 1.To calculate the sum of digits of a number till it reduces to a single digit number. i.e. I/p: 987 O/p: 987 24 6.
#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the Number :");
    scanf("%d", &n);
    printf("%d\t", n);
    for(; n > 9 ;)
    {
        sum = 0;
        while (n > 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        printf("%d\t", sum);
        n = sum;
    }
    return 0;
}
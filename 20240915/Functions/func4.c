//4. Function to count sum of digits of a number.
#include<stdio.h>
int sumofdigits(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum = sum + n % 10;
        n = n / 10; 
    }
    return sum;
}
int main()
{
    int num, ans;
    printf("Enter the Number :");
    scanf("%d", &num);
    ans = sumofdigits(num);
    printf("Sum of Digits of %d is %d", num, ans);
    return 0;
}
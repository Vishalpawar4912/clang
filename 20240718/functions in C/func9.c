//9. Function to reverse number.
#include<stdio.h>
int reverse(int num)
{
    int rev = 0;
    while(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    printf("The Reverse Number of the %d is %d", num, reverse(num));
    return 0;
}
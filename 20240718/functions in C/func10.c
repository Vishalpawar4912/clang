//10. function to check if a number is palindrome (number == reverse).
#include<stdio.h>
int palindrome(int num)
{
    int rev = 0, temp = num;
    while(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if(temp == rev)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    if(palindrome(num))
    {
        printf("%d is Palindrome Number", num);
    }
    else
    {
        printf("%d is not Palindrome Number", num);
    }
    return 0;
}
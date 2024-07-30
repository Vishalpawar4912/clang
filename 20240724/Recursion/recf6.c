//6. Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>
int main() 
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if(isPalindrome(num) == 1) 
    {
        printf("%d is Palindrome Number.\n", num);
    } 
    else 
    {
        printf("%d is Not Palindrome Number.\n", num);
    }
    return 0;
}
int isPalindrome(int num) 
{
    int rev = reverse(num, 0);
    if(num == rev)
        return 1;
    return 0;
}
int reverse(int num, int rev) 
{
    if(num == 0)
        return rev;
    else 
    {
        return reverse(num / 10, rev * 10 + num % 10);
    }
}
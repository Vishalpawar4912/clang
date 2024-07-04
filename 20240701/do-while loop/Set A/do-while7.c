// 7. Write a program to accept an integer and reverse the number. Example: Input: 546, Output 645.
#include<stdio.h>
int main()
{
    int num, rev = 0;
    printf("Enter the Number :");
    scanf("%d", &num);
    do
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    } while (num > 0);
    printf("The Reverse is :%d", rev);
}

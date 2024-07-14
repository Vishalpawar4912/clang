//2. Write a C program to reverse a given number using a do-while loop.
#include<stdio.h>
int main()
{
    int num, rev = 0, rem;
    printf("Enter the Number :");
    scanf("%d", &num);
    int orgNum = num;
    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    } while (num != 0);
    printf("Original Number : %d\n", orgNum);
    printf("Reversed Number : %d\n", rev);
    return 0;
}
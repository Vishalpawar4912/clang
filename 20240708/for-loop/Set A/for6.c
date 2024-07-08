// 6. Write a program to accept an integer and count the number of digits in the number. 
#include<stdio.h>
int main()
{
    int num, i, sum = 0, j;
    printf("Enter the Number :");
    scanf("%d", &num);
    for(i = 0; num != 0; i++)
    {
        j = num % 10;
        num = num / 10;
        sum = sum + j;
    }
    printf("Digit = %d and Sum = %d\n", i, sum);
}
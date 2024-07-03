// 6. Write a program to accept an integer and count the number of digits and calculate sum of digits in the number.eg,Number = 1234 Output: Digits = 4,Sum = 10; 
#include<stdio.h>
int main()
{
    int n, i = 0, sum = 0, j;
    printf("Enter the Number :");
    scanf("%d", &n);
    do
    {
        j = n % 10;
        n = n / 10;
        i++;
        sum = sum + j;
    } while (n != 0);
    printf("Digit =%d and Sum =%d\n", i, sum);
}
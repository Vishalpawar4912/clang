//13. Write a C program that prompts the user to enter a positive integer and then calculates and
// prints the sum of the squares of each digit in that number using a do-while loop.
#include<stdio.h>
int main()
{
    int num, digit, sum = 0;
    printf("Enter the Positive Integer :");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("Please input a positive integer.\n");
        return 1;
    }
    for( ; num != 0; )
    {
        digit = num % 10;
        sum = sum + digit * digit;
        num = num / 10;
    }
    printf("Sum of the squares of each digit: %d\n", sum);
    return 0;
}

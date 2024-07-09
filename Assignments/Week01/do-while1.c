//1.Write a C program that continuously asks the user to enter a number until they enter a negative number. 
//The program should then print the sum of all entered positive numbers.
#include<stdio.h>
int main()
{
    int num;
    int sum = 0;

    do
    {
        printf("Enter the Negative Number to Stop :");
        scanf("%d", &num);
        if(num >= 0)
        {
            sum = sum + num;
        }
    } while (num >= 0);

    printf("Sum of all Positive Numbers :%d", sum);

    return 0;
}
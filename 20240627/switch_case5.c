//Write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    switch (num % 2 == 0)
    {
    case 0:
        printf("%d is Odd Number", num);
        break;
    
    case 1:
        printf("%d is Even Number", num);
        break;
    }
}
//2.Write a C program that checks whether a given year is a leap year or not. 
//A leap year is divisible by 4, but not by 100, unless it is also divisible by 400.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year :");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is Leap Year", year);
    }
    else
    {
        printf("%d is not Leap Year", year);
    }
}
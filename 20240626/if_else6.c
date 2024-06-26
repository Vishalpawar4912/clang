// Write a C program to check whether a year is leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter the Year :");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year %400 == 0)
    {
        printf("\n%d is Leap Year", year);
    }
    else{
        printf("\n%d is not Leap Year", year);
    }
}
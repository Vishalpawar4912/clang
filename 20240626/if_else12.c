// Write a C program to input month number and print number of days in that month.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the Month Number :");
    scanf("%d", &month);
    if(month == 1)
    {
        printf("\nJanuary contains 31 Days");
    }
    else if(month == 2)
    {
        printf("\nFebruary contains 28 or 29 Days");
    }
    else if(month == 3)
    {
        printf("\nMarch contains 31 Days");
    }
    else if(month == 4)
    {
        printf("\nApril contains 30 Days");
    }
    else if(month == 5)
    {
        printf("\nMay contains 31 Days");
    }
    else if(month == 6)
    {
        printf("\nJune contains 30 Days");
    }
    else if(month == 7)
    {
        printf("\nJuly contains 31 Days");
    }

    else if(month == 8)
    {
        printf("\nAugust contains 31 Days");
    }

    else if(month == 9)
    {
        printf("\nSeptember contains 30 Days");
    }

    else if(month == 10)
    {
        printf("\nOctober contains 31 Days");
    }

    else if(month == 11)
    {
        printf("\nNovember contains 30 Days");
    }

    else if(month == 12)
    {
        printf("\nDecember contains 31 Days");
    }
    else{
        printf("invalid Input!");
    }
}
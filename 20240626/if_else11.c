// Write a C program to input week number and print week day.
#include<stdio.h>
int main()
{
    int week;
    printf("\nEnter the Number :");
    scanf("%d", &week);
    if(week == 1)
    {
        printf("\nMonday");
    }
    else if(week == 2)
    {
        printf("\nTuesday");
    }
    else if(week == 3)
    {
        printf("\nWednesday");
    }
    else if(week == 4)
    {
        printf("\nThursday");
    }
    else if(week == 5)
    {
        printf("\nFriday");
    }
    else if(week == 6)
    {
        printf("\nSaturday");
    }
    else if(week == 7)
    {
        printf("\nSunday");
    }
    else{
        printf("\nInvalid Input!");
    }
}
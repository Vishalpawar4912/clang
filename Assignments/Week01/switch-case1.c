//1.Write a C program that takes a number between 1 and 7 as input and prints the corresponding day of the week using a switch case. 
//For example, 1 for Monday, 2 for Tuesday, etc.
#include<stdio.h>
int main()
{
    int day;
    printf("Enter the Day Number :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Day!");
        break;
    }
}
// Write a C program to print day of week name using switch case.
#include<stdio.h>
int main()
{
    int week;
    printf("Enter the week day Number : ");
    scanf("%d", &week);
    switch(week)
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
            printf("Invalid Week Number\n");   
            break;
    }
}
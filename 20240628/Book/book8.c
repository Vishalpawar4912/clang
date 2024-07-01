// Accept the three positive integers for date from the user (day,month and year) and check whether the date is valid or invalid. 
// Run your program for the following dates and fill the table. 
// (Hint:for valid date 1<=month<=12,1<=day<=noofdays where noofdays is 30 in case of months 4,6,9 and 11.31 in case of months 1,3,5,7,8,10 and 12. 
// In case of month 2 no_of_days is 28 or 29 depending on year is leap or not).
#include<stdio.h>
int main()
{
    int day, month, year;
    int noofdays;
    printf("Enter the Day, Month, Year :");
    scanf("%d %d %d", &day, &month, &year);
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                noofdays = 31;
                break;
        case 4: case 6: case 9: case 11:
                noofdays = 30;
                break;
        case 2: 
                if(year % 4 == 0 && ( year % 400 == 0 || year %100 != 0 ))
                {
                    noofdays = 29;
                }
                else{
                    noofdays = 28;
                }
                break;
        default:
                printf("Invalid Month!\n");
    }
    if(month >= 1 && month <= 12)
    {
        if(day >= 1 && day <= noofdays)
        {
            printf("Date is Valid\n");
        }
        else{
            printf("Date is Invalid\n");
        }
    }
    else{    
        printf("Date is Invalid\n");
    }
}
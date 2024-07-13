//14. Write a C program that calculates the average of a set of numbers input by the user.
// The user should be able to input as many numbers as desired, and the program should continue until the user decides to stop.
#include<stdio.h>
int main()
{
    int cnt = 0;
    float sum = 0.0, num, avg;
    printf("Input numbers to calculate the average (enter a non-numeric value to stop):\n");
    while (1)
    {
        printf("Enter the Number :");
        if(scanf("%f", &num) != 1)
        {
            break;
        }
        sum = sum + num;
        cnt++;
    }
    if(cnt > 0)
    {
        avg = sum / cnt;
        printf("Average of Input Numbers : %.2f\n", avg);
    }
    else
    {
        printf("No Numbers were Entered.\n");
    }
    return 0;
}
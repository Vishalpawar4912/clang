//1. Write a C program that calculates the compound interest for a given principal amount, interest rate, and time period.
// Use a do-while loop to allow the user to input values multiple times.
#include<stdio.h>
int main()
{
    float amt, rate, time, interest;
    int flag = 1;
    while (flag == 1)
    {
        printf("Input Principal Amount: ");
        scanf("%f", &amt);
        printf("Input Annual Interest Rate (as a Percentage): ");
        scanf("%f", &rate);
        printf("Input Time Period (in years): ");
        scanf("%f", &time);
        if(amt <= 0 || rate < 0 || time <= 0)
        {
            printf("Please input valid positive values for principal, interest rate, and time.\n");
            continue;
        }
        rate = rate / 100;
        interest = amt * pow(1 + rate , time) - amt;
        printf("Compound Interest: %.2f\n", interest);
        printf("Want to calculate compound interest again? (1 for Yes, 0 for No): ");
        scanf("%d", &flag);
    }
    return 0;
}
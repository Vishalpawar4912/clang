//22. Write a C program to print all strong numbers between given interval using functions.
#include<stdio.h>
int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}
int isStrong(int num) 
{
    int sum = 0, temp = num;
    while (temp != 0) 
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == num;
}
void findStrongNumbers(int start, int end) 
{
    printf("Strong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) 
    {
        if (isStrong(i)) printf("%d\n", i);
    }
}
int main()
{
    int start, end;
    printf("Enter the Lower Limit to find the strong number :");
    scanf("%d", &start);
    printf("Enter the Upper Limit to find the strong number :");
    scanf("%d", &end);
    printf("All strong numbers between %d to %d are: \n", start, end);
    findStrongNumbers(start, end);
    return 0;
}
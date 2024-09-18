//17. Write a C program to check whether a number is even or odd using functions.
#include<stdio.h>
int isEven(int num)
{
    return num % 2 == 0;
}
int main()
{
    int num;
    printf("Enter The Number :");
    scanf("%d", &num);
    if(isEven(num))
    {
        printf("%d is Even Number", num);
    }
    else
    {
        printf("%d is Odd Number", num);
    }
    return 0;
}
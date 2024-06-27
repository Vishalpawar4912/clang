//Write a C program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number :");
    scanf("%d", &num);
    switch (num > 0)
    {
    case 1:
        printf("%d is Positive Number", num);
        break;
    case 0:
        switch (num < 0)
        {
            case 1:
                printf("%d is Negative Number", num);
                break;
            case 0:
                printf("%d is Zero", num);
                break;
        }
    }
}
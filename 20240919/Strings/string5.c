// 5. Write a program to accept an integer and display it in the form of words.
//     Eg.,    9702 : Nine Thousand Seven Hundred Two.
#include <stdio.h>

void printTens(int num);
void printHundreds(int num);
void printNumber(int num);

const char *singleDigits[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
const char *twoDigits[] = { "", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
const char *tensDigits[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

void printTens(int num) 
{
    if (num >= 10 && num < 20) 
    {
        printf("%s", twoDigits[num - 10]);
    } 
    else 
    {
        printf("%s", tensDigits[num / 10]);
        if (num % 10) 
        {
            printf(" %s", singleDigits[num % 10]);
        }
    }
}

void printHundreds(int num) 
{
    if (num >= 100) 
    {
        printf("%s Hundred", singleDigits[num / 100]);
        if (num % 100) 
        {
            printf(" ");
        }
    }
    if (num % 100) 
    {
        printTens(num % 100);
    }
}

void printNumber(int num) 
{
    if (num == 0) 
    {
        printf("Zero");
        return;
    }
    if (num >= 1000) 
    {
        printHundreds(num / 1000);
        printf(" Thousand");
        if (num % 1000) 
        {
            printf(" ");
            printHundreds(num % 1000);
        }
    } 
    else 
    {
        printHundreds(num);
    }
}

int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0 || num > 9999) 
    {
        printf("Number out of range. Please enter a number between 0 and 9999.\n");
    } 
    else 
    {
        printNumber(num);
        printf("\n");
    }
    return 0;
}

//2. Write a program to accept a decimal number and convert it to binary, octal and hexadecimal. Write seperate functions.
#include<stdio.h>
void decToBin(int num) 
{
    int bin[32];
    int i = 0;
    while(num > 0) 
    {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--) 
    {
        printf("%d", bin[j]);
    }
    printf("\n");
}
void decToOct(int num) 
{
    int oct[32];
    int i = 0;
    while(num > 0) 
    {
        oct[i] = num % 8;
        num = num / 8;
        i++;
    }
    printf("Octal: ");
    for(int j = i - 1; j >= 0; j--) 
    {
        printf("%d", oct[j]);
    }
    printf("\n");
}
void decToHex(int num) 
{
    char hex[32];
    int i = 0;
    while(num > 0) 
    {
        int rem = num % 16;
        if(rem < 10) 
        {
            hex[i] = '0' + rem;
        } 
        else 
        {
            hex[i] = 'A' + (rem - 10);
        }
        num = num / 16;
        i++;
    }
    printf("Hexadecimal: ");
    for(int j = i - 1; j >= 0; j--) 
    {
        printf("%c", hex[j]);
    }
    printf("\n");
}
int main() 
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decToBin(num);
    decToOct(num);
    decToHex(num);
    return 0;
}
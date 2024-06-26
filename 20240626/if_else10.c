// Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the Character :");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("\n%c is lowercase alphabet",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("\n%c is uppercase alphabet",ch);
    }
    else{
        printf("\n%c is not an alphabet",ch);
    }
}
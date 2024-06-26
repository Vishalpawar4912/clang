// Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the Character :");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n%c is an Alphabet", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n%c is a Digit", ch);
    }
    else{
        printf("\n%c is a special character", ch);
    }
}
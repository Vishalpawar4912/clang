// Write a C program to check whether a character is alphabet or not.
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
    else{
        printf("\n%c is not an Alphabet", ch);
    }
}
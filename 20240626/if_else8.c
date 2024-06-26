// Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter Charater :");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("\n%c is Vowel", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n%c is consonant", ch);
    }
    else{
        printf("\n%c is not character", ch);
    }
}
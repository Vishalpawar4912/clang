//2.Write a C program that takes a character as input and determines if it is a vowel or consonant using a switch case. 
//Consider both uppercase and lowercase inputs.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character :");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a': case 'A':
        printf("Vowel");
        break;
    case 'e': case 'E':
        printf("Vowel");
        break;
    case 'i': case 'I':
        printf("Vowel");
        break;
    case 'o': case 'O':
        printf("Vowel");
        break;
    case 'u': case 'U':
        printf("Vowel");
        break;
    default:
        printf("Character is Consonant");
        break;
    }
}
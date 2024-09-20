// 11. Write a C program to check whether string is Palindrome. A Palindrome is a string that reads the same forward and reverse e.g., MADAM.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("Enter the String: ");
    gets(str);
    if (isPalindrome(str)) 
    {
        printf("The string \"%s\" is a Palindrome.\n", str);
    } 
    else 
    {
        printf("The string \"%s\" is not a Palindrome.\n", str);
    }
    return 0;
}
int isPalindrome(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    while(start < end)
    {
        if (tolower(str[start]) != tolower(str[end])) 
        {
            return 0;  
        }
        start++;
        end--;
    }
    return 1;
}
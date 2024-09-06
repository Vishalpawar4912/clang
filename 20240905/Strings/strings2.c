// 2. Check whether a string is a Palindrome. A Palindrome is a string that reads the same forward and reverse.
//    ex., Malayalam is a Palindrome.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int ans;
    printf("\nEnter the String: ");
    gets(s);
    ans = ispalindrome(s);
    if(ans)
        printf("\nString is a Palindrome.");
    else
        printf("\nString is not Palindrome.");
}
int ispalindrome(char s[])
{
    int len, i, j;
    len = strlen(s);
    for(i = 0, j = len - 1; i < len / 2; i++, j--)
        if(s[i] != s[j])
            return 0;
    return 1;
}
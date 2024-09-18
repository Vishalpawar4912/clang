// 10. Display characters of a string in the shape of kite.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[80];
    int i;
    puts("Enter the String: ");
    gets(s);
    for(i = 1; i <= strlen(s); i++)
    {
        printf("%40.*s", i, s);
        printf("%-40.*s", i, s);
    }
    for(i = strlen(s) - 1; i >= 1; i--)
    {
        printf("%40.*s", i, s);
        printf("%-40.*s", i, s);
    }
    return 0;
}
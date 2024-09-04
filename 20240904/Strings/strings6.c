// 6. Count the Occurences of a character in a string using pointers.
#include<stdio.h>
void main()
{
    char str[80], ch;
    int cnt;
    int charcnt(char *, char);
    printf("Enter the String: ");
    gets(str);
    fflush(stdin);
    printf("\nEnter the Character to be Searched: ");
    ch = getchar();
    cnt = charcnt(str, ch);
    printf("\n\nThe Character %c occurs %d Times", ch, cnt);
}
int charcnt(char *s, char ch)
{
    int cnt = 0;
    while (*s != '\0')
    {
        if(*s == ch)
            cnt++;
            s++;
    }
    return cnt;
}

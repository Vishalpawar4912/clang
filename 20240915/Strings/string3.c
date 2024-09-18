// 3. Find the length of the string using pointers.
#include<stdio.h>
int main()
{
    char str[80];
    printf("Enter the String: ");
    gets(str);
    printf("The Length of String is %d", length(str));
    return 0;
}
int length(char *s)
{
    int cnt = 0;
    while (*s != '\0')
    {
        cnt++;
        s++;
    }
    return cnt;
}
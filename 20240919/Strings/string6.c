// 6. Write a C Program to accept a string and display it such that all white spaces are display as visible characters.
//     space       \s
//     tab         \t
//     newline     \n
#include<stdio.h>
int main()
{
    char str[200];
    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);
    printf("Modified String: ");
    displayWhiteSpace(str);
    return 0;
}
void displayWhiteSpace(const char *str)
{
    while(*str)
    {
        if(*str == ' ')
        {
            printf("\\s");
        }
        else if(*str == '\t')
        {
            printf("\\t");
        }
        else if(*str == '\n')
        {
            printf("\\n");
        }
        else
        {
            putchar(*str);
        }
        str++;
    }
}
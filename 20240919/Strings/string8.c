// 8. Write a C Program to find recursive function to calculate length of string.
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Length of the string: %d\n", stringLength(str));
    return 0;
}
int stringLength(const char *str) 
{
    if (*str == '\0') 
    {
        return 0;
    }
    return 1 + stringLength(str + 1);
}
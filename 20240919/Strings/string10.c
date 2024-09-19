// 10. Write a C program to find recursive function to display string in the reverse order.(with and without using standard library function).
#include <stdio.h>
void reverseWithLibrary(const char *str) 
{
    if (*str) 
    {
        reverseWithLibrary(str + 1); 
        putchar(*str);               
    }
}
void reverseWithoutLibrary(char *str, int start, int end) 
{
    if (start >= end) 
    {
        return; 
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseWithoutLibrary(str, start + 1, end - 1);
}
int main() 
{
    char str[100]; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') 
    {
        str[length - 1] = '\0';
    }
    printf("Reversed string (using recursive function with library): ");
    reverseWithLibrary(str);
    printf("\n");
    char originalStr[100];
    strcpy(originalStr, str);
    printf("Reversed string (using recursive function without library): ");
    reverseWithoutLibrary(originalStr, 0, strlen(originalStr) - 1);
    printf("%s\n", originalStr);
    return 0;
}

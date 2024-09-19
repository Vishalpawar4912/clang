// 9. Write a C Program function to display string in the reverse order.(with and without using standard library function).
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Reversed string (using library function): ");
    reverseWithLibrary(str);
    strcpy(str, str);
    printf("Reversed string (without using library function): ");
    reverseWithoutLibrary(str);
    return 0;
}
void reverseWithLibrary(char *str) 
{
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) 
    {
        putchar(str[i]);
    }
    printf("\n");
}
void reverseWithoutLibrary(char *str) 
{
    int start = 0;
    int end = 0;
    char temp;
    while (str[end] != '\0') 
    {
        end++;
    }
    end--;
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("%s\n", str);
}
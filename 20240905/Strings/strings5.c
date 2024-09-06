// 5. Write a program to copy one string to another without using standard library function. Use dynamic memory allocation to accept string.
#include<stdio.h>
#include<stdlib.h>

int main() 
{
    char *str1 = malloc(100);
    char *str2;
    printf("Enter a string: ");
    scanf("%s", str1);
    str2 = malloc(strlen(str1) + 1);
    for(int i = 0; str1[i] != '\0'; i++) 
    {
        str2[i] = str1[i];
    }
    str2[strlen(str1)] = '\0';
    printf("Source String str1 = %s\n", str1);
    printf("String is Copied. After Copy str2 = %s\n", str2);
    free(str1);
    free(str2);
    return 0;
}

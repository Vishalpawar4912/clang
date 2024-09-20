// 16. Write a C program to accept two strings as command line arguments and concatenate the second to the first.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
    if (argc != 3) 
    {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }
    char *str1 = argv[1];
    char *str2 = argv[2];
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string: %s\n", result);
    free(result);
    return 0;
}
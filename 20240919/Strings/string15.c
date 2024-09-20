// 15. Write a C program to accept a string and character as command line arguments and replace each occurance of 
//    character in the string by the given character.
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("Usage : %s <string> <target_char> <replacement_char>\n");
        return 1;
    }
    char *str = argv[1];
    char target = argv[2][0];
    char replacement = argv[3][0];
    printf("Original String: %s\n", str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == target)
        {
            str[i] = replacement;
        }
    }
    printf("Modified String: %s\n", str);
    return 0;
}
// 7. Write a menu driven program using string library functions for :
//     1. length of string         2. comparing two strings
#include<stdio.h>
#include<string.h>
int main()
{
    int ch;
    do
    {
        printf("\nMenu:\n");
        printf("1. Find length of a string\n");
        printf("2. Compare two strings\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();
        switch (ch) 
        {
            case 1:
                findLength();
                break;
            case 2:
                compareStrings();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while(ch != 3);
    return 0;
}
void findLength()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Length of the string: %lu\n", strlen(str));
}
void compareStrings()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    int result = strcmp(str1, str2);
    if (result < 0) 
    {
        printf("First string is less than the second string.\n");
    } 
    else if (result > 0) 
    {
        printf("First string is greater than the second string.\n");
    } 
    else 
    {
        printf("Both strings are equal.\n");
    }
}
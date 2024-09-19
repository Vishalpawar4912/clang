// 2. Write a program to accept n strings and display the longest string.
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the Number of Strings: ");
    scanf("%d", &n);
    char strings[n][100];
    char longest[100] = " ";
    for(int i = 0; i < n; i++)
    {
        printf("Enter String %d : ", i + 1);
        scanf("%s", strings[i]);
        if(strlen(strings[i]) > strlen(longest))
        {
            strcpy(longest, strings[i]);
        }
    }
    printf("The Longest String is : %s\n", longest);
    return 0;
}
// 13. Write a C program to copy one string to another without using stndard library function. use dynamic memory allocation to accept string.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *src, *dest;
    int len = 0, i;
    src = (char *)malloc(100 * sizeof(char));
    if(src == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;
    }
    printf("Enter a String: ");
    fgets(src, 100, stdin);
    while(src[len] != '\0')
    {
        len++;
    }
    dest = (char *)malloc((len + 1) * sizeof(char));
    if(dest == NULL)
    {
        printf("Memory Allocation Failed!\n");
        free(src);
        return  1;
    }
    for(i = 0; i <= len; i++)
    {
        dest[i] = src[i];
    }
    printf("Copied String : %s", dest);
    free(src);
    free(dest);
    return 0;
}
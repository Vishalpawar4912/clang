//17. Write a C program that accepts n words and displays them in dictionary order.
#include<stdio.h>
#include<string.h>
int main() 
{
    int i, j, n;
    char str[20][20], temp[20];
    puts("Enter the No. of Words to be Sorted: ");
    scanf("%d", &n);
    getchar();
    printf("Enter the String: \n");
    for(i = 0; i < n; i++) 
    {
        gets(str[i]);
    }
    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            if(strcmp(str[i], str[j]) > 0) 
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("Words in Dictionary Order: \n");
    for(i = 0; i < n; i++) 
    {
        puts(str[i]);
    }
    return 0;
}
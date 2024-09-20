// 14. Write a C program that accepts n words and displays them in dictionary order.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the Number of Words: ");
    scanf("%d", &n);
    char **words = (char **)malloc(n * sizeof(char *));
    if(words == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;   
    }
    for(int i = 0; i < n; i++)
    {
        words[i] = (char *)malloc(100 * sizeof(char));
        if(words[i] == NULL)
        {
            printf("Memory Allocation Failed!\n");
            return 1;
        }
        printf("Enter Word %d: ", i + 1);
        scanf("%s", words[i]);
    }
    sortWords(words, n);
    printf("Words in Dictionary Order: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }
    for(int i = 0; i < n; i++)
    {
        free(words[i]);
    }
    free(words);
    return 0;
}
void sortWords(char **words, int n)
{
    char *temp;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(words[i], words[j]) > 0)
            {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }
}
// 8. Storing Strings using Dynamic Memory Allocation, Sorting.
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
int main() 
{
    char temp[80], *name[20];
    int i, j, n;
    printf("\nHow Many Names: ");
    scanf("%d", &n);
    if(n > 20) 
    {
        printf("Maximum 20 names allowed.\n");
        return 1;
    }
    for(i = 0; i < n; i++) 
    {
        name[i] = (char *)malloc(80 * sizeof(char)); 
        printf("\nEnter Name %d : ", i);
        scanf("%s", name[i]); 
    }
    printf("\nThe Unsorted names are: \n");
    for(i = 0; i < n; i++) {
        printf("%s\n", name[i]); 
    }
    for(i = 1; i <= n - 1; i++) 
    {
        for(j = 0; j < n - i - 1; j++) 
        {
            if(strcmp(name[j], name[j + 1]) > 0) 
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
    printf("\nThe Sorted list is: \n");
    for(i = 0; i < n; i++) 
    {
        printf("%s\n", name[i]);
    }
    for(i = 0; i < n; i++) 
    {
        free(name[i]);
    }
    return 0;
}
// 12. Write a C program which accepts n names and display them and search for a particular name.
#include<stdio.h>
#include<string.h>
#define MAX 100
int main() 
{
    int n, i;
    char names[MAX][50], searchName[50];
    int found = 0;
    printf("Enter the Number of Names: ");
    scanf("%d", &n);
    getchar();
    printf("Enter %d Names: \n", n);
    for(i = 0; i < n; i++) 
    {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';  
    }
    printf("\nList of Names: \n");
    for(i = 0; i < n; i++) 
    {
        printf("%s\n", names[i]);
    }
    printf("\nEnter the Name to Search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';
    for(i = 0; i < n; i++) 
    {
        if(strcmp(names[i], searchName) == 0) 
        {
            printf("%s is found at position %d.\n", searchName, i + 1);
            found = 1;
            break;
        }
    }
    if(!found) 
    {
        printf("%s not found.\n", searchName);
    }
    return 0;
}
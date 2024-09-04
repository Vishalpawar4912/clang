// 7. Accepting and Displaying n names. Search for a speific name.
#include<stdio.h>
#include<string.h>
int main() 
{
    char list[10][20], name[20];
    int i, n;
    printf("\nHow Many Names: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        printf("Enter Name %d : ", i);
        scanf("%s", list[i]); 
    }
    printf("\nThe Names in the list are: \n");
    for(i = 0; i < n; i++) 
    {
        printf("%s\n", list[i]); 
    }
    printf("Enter the Name to be Searched: ");
    scanf("%s", name); 
    for(i = 0; i < n; i++) 
    {
        if(strcmp(list[i], name) == 0) 
        {
            printf("Name Found at Position %d\n", i+1); 
            break;
        }
    }
    if(i == n) 
    {
        printf("Name not found in the list\n");
    }
    return 0;
}

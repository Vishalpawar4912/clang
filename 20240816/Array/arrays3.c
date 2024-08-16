//3. Write a C program to search an element in an array.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int size, i, toSearch, found;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to Search: ");
    scanf("%d", &toSearch);
    found = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("%d is not found in the array", toSearch);
    }
    return 0;
}
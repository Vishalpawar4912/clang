//1. Write a C program to delete an element from an array at specified position.
#include<stdio.h>
int main() 
{
    int arr[100], n, pos, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete (1-%d): ", n);
    scanf("%d", &pos);
    if(pos >= 1 && pos <= n) 
    {
        for(i = pos - 1; i < n - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion: ");
        for(i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }
    } 
    else 
    {
        printf("Invalid position!");
    }
    return 0;
}
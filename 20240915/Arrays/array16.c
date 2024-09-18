//16. Write a C program to merge two array to third array.
#include<stdio.h>
int main() 
{
    int arr1[100], arr2[100], merged[200], n1, n2, i;
    printf("Enter the number of elements in array1: ");
    scanf("%d", &n1);
    printf("Enter %d elements for array1:\n", n1);
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in array2: ");
    scanf("%d", &n2);
    printf("Enter %d elements for array2:\n", n2);
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n1; i++) 
    {
        merged[i] = arr1[i];
    }
    for(i = 0; i < n2; i++) 
    {
        merged[n1 + i] = arr2[i];
    }
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
//17. Write a C program to find reverse of an array.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int i, size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order: ");
    for(i = size - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
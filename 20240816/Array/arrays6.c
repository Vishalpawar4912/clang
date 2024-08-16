//6. Write a C program to left rotate an array.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int size, i, temp, rotate;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &rotate);
    for(i = 0; i < rotate; i++) 
    {
        temp = arr[0];
        for(int j = 0; j < size - 1; j++) 
        {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
    printf("Array after left rotation: ");
    for(i = 0; i < size; i++) 
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
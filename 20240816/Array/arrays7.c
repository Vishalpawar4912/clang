//7. Write a C program to right rotate an array.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int size, i, temp, rotate;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements an array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of position to rotate: ");
    scanf("%d", &rotate);
    for(i = 0; i < rotate; i++)
    {
        temp = arr[size - 1];
        for(int j = size - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    printf("Array after right rotation: ");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
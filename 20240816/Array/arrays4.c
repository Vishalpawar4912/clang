//4. Write a C program to sort array elements in ascending or descending order.
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int size;
    int i, j, temp;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Elements of array in Ascending Order: ");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    for(i = 0; i < size; i++) 
    {
        for(j = i + 1; j < size; j++) 
        {
            if(arr[i] < arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in Descending Order: ");
    for(i = 0; i < size; i++) 
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}